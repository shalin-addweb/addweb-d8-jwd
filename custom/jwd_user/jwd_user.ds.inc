<?php
/**
 * @file
 * jwd_user.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function jwd_user_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'twocol';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_customer_number',
        1 => 'field_user_title',
        2 => 'field_user_address',
      ),
      'right' => array(
        3 => 'field_user_phone',
        4 => 'field_user_room',
      ),
    ),
    'fields' => array(
      'field_customer_number' => 'left',
      'field_user_title' => 'left',
      'field_user_address' => 'left',
      'field_user_phone' => 'right',
      'field_user_room' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['user|user|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|full';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_customer_number',
        1 => 'field_user_title',
        2 => 'field_user_address',
        3 => 'field_user_phone',
        4 => 'field_user_room',
      ),
      'right' => array(
        5 => 'summary',
      ),
    ),
    'fields' => array(
      'field_customer_number' => 'left',
      'field_user_title' => 'left',
      'field_user_address' => 'left',
      'field_user_phone' => 'left',
      'field_user_room' => 'left',
      'summary' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['user|user|full'] = $ds_layout;

  return $export;
}
