<?php
/**
 * @file
 * jwd_delivery_address.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function jwd_delivery_address_field_default_fields() {
  $fields = array();

  // Exported field: 'node-jwd_delivery_returning_customers-field_customer_address'.
  $fields['node-jwd_delivery_returning_customers-field_customer_address'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_customer_address',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'addressfield',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'addressfield',
    ),
    'field_instance' => array(
      'bundle' => 'jwd_delivery_returning_customers',
      'default_value' => array(
        0 => array(
          'element_key' => 'node|jwd_delivery_returning_customers|field_customer_address|und|0',
          'thoroughfare' => '',
          'premise' => '',
          'postal_code' => '',
          'locality' => '',
          'country' => 'DE',
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'addressfield',
          'settings' => array(
            'format_handlers' => array(
              0 => 'address',
            ),
            'use_widget_handlers' => 1,
          ),
          'type' => 'addressfield_default',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'addressfield',
          'settings' => array(
            'format_handlers' => array(
              0 => 'address',
            ),
            'use_widget_handlers' => 1,
          ),
          'type' => 'addressfield_default',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'fences_wrapper' => 'div',
      'field_name' => 'field_customer_address',
      'label' => 'Adresse',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'addressfield',
        'settings' => array(
          'available_countries' => array(),
          'format_handlers' => array(
            'address' => 'address',
            'address-hide-country' => 0,
            'organisation' => 0,
            'name-oneline' => 0,
            'name-full' => 0,
          ),
        ),
        'type' => 'addressfield_standard',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-jwd_delivery_returning_customers-field_jwd_kundengruppe'.
  $fields['node-jwd_delivery_returning_customers-field_jwd_kundengruppe'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_jwd_kundengruppe',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'role_field',
      'settings' => array(
        'exclusive' => 0,
        'roles' => array(
          31 => '31',
        ),
      ),
      'translatable' => '0',
      'type' => 'role',
    ),
    'field_instance' => array(
      'bundle' => 'jwd_delivery_returning_customers',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'role_field',
          'settings' => array(),
          'type' => 'role_field_formatter',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'fences_wrapper' => 'div',
      'field_name' => 'field_jwd_kundengruppe',
      'label' => 'Kundengruppe',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'content_taxonomy_opt_groups' => FALSE,
        ),
        'type' => 'options_select',
        'weight' => '2',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Adresse');
  t('Kundengruppe');

  return $fields;
}
