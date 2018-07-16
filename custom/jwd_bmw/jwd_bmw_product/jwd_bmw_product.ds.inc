<?php
/**
 * @file
 * jwd_bmw_product.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function jwd_bmw_product_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_line_item|jwd_bmw_product|line_item_ordered';
  $ds_layout->entity_type = 'commerce_line_item';
  $ds_layout->bundle = 'jwd_bmw_product';
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
        5 => 'field_product_logo',
        6 => 'field_customer_address',
        7 => 'field_customer_address_name',
        8 => 'field_customer_address_position',
        9 => 'field_customer_address_function',
        10 => 'field_customer_address_title',
        11 => 'field_customer_address_postal',
        12 => 'field_customer_address_house_bmw',
        13 => 'field_product_size',
        14 => 'field_customer_email',
        15 => 'field_customer_phone',
        16 => 'field_customer_mobile',
        17 => 'field_customer_fax',
        18 => 'field_customer_com_fax',
        19 => 'field_bmw_cost_center',
        20 => 'field_product_text',
        21 => 'field_customer_notes',
      ),
    ),
    'fields' => array(
      'label' => 'left',
      'quantity' => 'left',
      'commerce_unit_price' => 'left',
      'commerce_total' => 'left',
      'commerce_product' => 'left',
      'field_product_logo' => 'right',
      'field_customer_address' => 'right',
      'field_customer_address_name' => 'right',
      'field_customer_address_position' => 'right',
      'field_customer_address_function' => 'right',
      'field_customer_address_title' => 'right',
      'field_customer_address_postal' => 'right',
      'field_customer_address_house_bmw' => 'right',
      'field_product_size' => 'right',
      'field_customer_email' => 'right',
      'field_customer_phone' => 'right',
      'field_customer_mobile' => 'right',
      'field_customer_fax' => 'right',
      'field_customer_com_fax' => 'right',
      'field_bmw_cost_center' => 'right',
      'field_product_text' => 'right',
      'field_customer_notes' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['commerce_line_item|jwd_bmw_product|line_item_ordered'] = $ds_layout;

  return $export;
}
