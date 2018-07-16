<?php
/**
 * @file
 * jwd_%machine_name%_product.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function jwd_%machine_name%_product_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_line_item|jwd_%machine_name%_product|line_item_ordered';
  $ds_layout->entity_type = 'commerce_line_item';
  $ds_layout->bundle = 'jwd_%machine_name%_product';
  $ds_layout->view_mode = 'line_item_ordered';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'label',
        1 => 'quantity',
        2 => 'commerce_unit_price',
        3 => 'commerce_total',
        4 => 'commerce_product',
      ),
      'right' => array(
        5 => 'field_customer_address',
        6 => 'field_customer_address_title',
        7 => 'field_customer_email',
        8 => 'field_customer_phone',
        9 => 'field_customer_mobile',
        10 => 'field_customer_fax',
        11 => 'field_product_text',
      ),
    ),
    'fields' => array(
      'label' => 'left',
      'quantity' => 'left',
      'commerce_unit_price' => 'left',
      'commerce_total' => 'left',
      'commerce_product' => 'left',
      'field_customer_address' => 'right',
      'field_customer_address_title' => 'right',
      'field_customer_email' => 'right',
      'field_customer_phone' => 'right',
      'field_customer_mobile' => 'right',
      'field_customer_fax' => 'right',
      'field_product_text' => 'right',
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
  $export['commerce_line_item|jwd_%machine_name%_product|line_item_ordered'] = $ds_layout;

  return $export;
}
