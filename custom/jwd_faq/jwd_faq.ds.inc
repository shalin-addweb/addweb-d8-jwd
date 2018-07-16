<?php
/**
 * @file
 * jwd_faq.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function jwd_faq_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|jwd_faq|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'jwd_faq';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
      ),
    ),
  );
  $export['node|jwd_faq|default'] = $ds_fieldsetting;

  return $export;
}
