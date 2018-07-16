<?php

function jwd_sc_admin_form($form, &$form_state) {
  function _render_customers_list(array $customers) {
    $out = '<ul class="jwd-sc-customers">';
    foreach($customers as $customer) {
      $out .= _render_customer($customer);
    }
    $out .= '</ul>';

    return $out;
  }

  function _render_customer(JwdSpecialCustomer $customer) {
    $out = '<li>';
    $out .= $customer->name;
    $out .= '</li>';
    return $out;
  }

  $customers = jwd_sc_customers();

  backup_migrate_include('profiles', 'destinations');
  $_backup_profiles = backup_migrate_get_profiles();
  $backup_profiles = array();

  foreach($_backup_profiles as $backup_profile) {
    $profile_name = $backup_profile->get('name');
    $profile_id = $backup_profile->get('profile_id');
    $backup_profiles[$profile_id] = $profile_name;
  }

  $_backup_destinations = backup_migrate_get_destinations();
  $backup_destinations = array();

  foreach($_backup_destinations as $backup_destination) {
    $destination_name = $backup_destination->get('name');
    $destination_id = $backup_destination->get('destination_id');
    $backup_destinations[$destination_id] = $destination_name;
  }

  $form = array(
    'existing_customers' => array(
      '#type' => 'fieldset',
      '#title' => t('Existing customers'),
      'list' => array(
        '#type' => 'markup',
        '#markup' => _render_customers_list($customers)
      )
    ),
    'add_customer' => array(
      '#type' => 'fieldset',
      '#title' => t('Add customer'),
      'customer_name' => array(
        '#type' => 'textfield',
        '#title' => t('Name'),
        '#default_value' => isset($form_state['input']['customer_name']) ? $form_state['input']['customer_name'] : '',
        '#required' => true
      ),
      'customer_machine_name' => array(
        '#type' => 'machine_name',
        '#title' => t('Machine name'),
        '#default_value' => isset($form_state['input']['customer_machine_name']) ? $form_state['input']['customer_machine_name'] : '',
        '#required' => false,
        '#machine_name' => array(
          'exists' => '_jwd_sc_machine_name_exists'
        )
      ),
      'maintenance_mode' => array(
        '#type' => 'checkbox',
        '#title' => t('Put site into maintenance mode'),
        '#description' => t('Recommended'),
        '#checked' => isset($form_state['input']['maintenance_mode'])
      ),
      'backup' =>  array(
        '#type' => 'fieldset',
        '#title' => 'Backup',
        '#collapsible' =>  true,
        '#collapsed' => false,

        'create_backup' => array(
          '#type' => 'checkbox',
          '#title' => t('Create'),
          '#description' => t('Recommended'),
          '#checked' => isset($form_state['input']['create_backup'])
        ),
        'backup_profile' => array(
          '#type' => 'select',
          '#title' => t('Profile'),
          '#options' => $backup_profiles,
          '#default_value' => !empty($form_state['input']['backup_profile']) ? $form_state['input']['backup_profile'] : ''
        ),
        'backup_destination' => array(
          '#type' => 'select',
          '#title' => t('Destination'),
          '#options' => $backup_destinations,
          '#default_value' => !empty($form_state['input']['backup_destination']) ? $form_state['input']['backup_destination'] : ''
        ),
      ),
      'modules' => array(
        '#type' => 'fieldset',
        '#title' => t('Modules'),
        'create_modules' => array(
          '#type' => 'checkbox',
          '#title' => t('Create'),
          '#checked' => isset($form_state['input']['create_modules'])
        ),
        'enable_modules' => array(
          '#type' => 'checkbox',
          '#title' => t('Enable'),
          '#checked' => isset($form_state['input']['enable_modules'])
        ),
      ),
      'test_user' => array(
        '#type' => 'fieldset',
        '#title' => t('Test user'),
        '#collapsible' => true,
        '#collapsed' => empty($form_state['input']['test_user_name']),

        'test_user_name' => array(
          '#type' => 'textfield',
          '#title' => t('Username'),
          '#default_value' => !empty($form_state['input']['test_user_name']) ? $form_state['input']['test_user_name'] : '',
          '#description' => t('Leave empty if you do not want to create a test user.')
        )
      ),
      'clear_caches' => array(
        '#type' => 'checkbox',
        '#title' => t('Clear all caches'),
        '#description' => t('Will clear all caches after the customer was created.'),
        '#checked' => isset($form_state['input']['clear_caches'])
      )
    ),
    'submit' => array(
      '#type' => 'submit',
      '#value' => t('Apply'),
    )
  );

  return $form;
}

function jwd_sc_admin_form_submit($form, &$form_state) {
  $name = $form_state['input']['customer_name'];
  $machine_name = !empty($form_state['input']['customer_machine_name']) ? $form_state['input']['customer_machine_name'] : null;

  if ($form_state['values']['maintenance_mode']) {
    variable_set('maintenance_mode', 1);
  }

  if ($form_state['values']['create_backup']) {
    // create db-backup
    backup_migrate_include('profiles', 'destinations');
    $backup_profile = backup_migrate_get_profile($form_state['values']['backup_profile']);
    $backup_destination = backup_migrate_get_destination($form_state['values']['backup_destination']);
    $backup_profile->destination = $backup_destination;
    backup_migrate_perform_backup($backup_profile);
  }

  // preparations done, now create the customer
  $customer = jwd_sc_add_customer($name, $machine_name);

  if ($form_state['values']['create_modules']) {
    jwd_sc_create_customer_modules($customer);
  }

  if ($form_state['values']['enable_modules']) {
    jwd_sc_enable_customer_modules($customer);

    drupal_set_message(t('You may need to visit the features page to see the changes.'), 'status');
  }

  if (!empty($form_state['values']['test_user_name'])) {
    jwd_sc_create_customer_test_user($customer, $form_state['values']['test_user_name']);
  }

  if ($form_state['values']['clear_caches']) {
    cache_clear_all();
    menu_cache_clear();

    drupal_set_message(t('All caches cleared.'), 'status');
  }
}

function _jwd_sc_machine_name_exists($machine_name)
{
  $customers = jwd_sc_customers();

  foreach($customers as $customer) {
    if ($customer->machine_name === $machine_name) {
      return true;
    }
  }

  return false;
}