<?php
/**
 * @file
 * jwd_bmw_product_display.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function jwd_bmw_product_display_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'commerce_line_item|jwd_bmw_product|line_item_user';
  $ds_fieldsetting->entity_type = 'commerce_line_item';
  $ds_fieldsetting->bundle = 'jwd_bmw_product';
  $ds_fieldsetting->view_mode = 'line_item_user';
  $ds_fieldsetting->settings = array(
    'line_item_back_to_order' => array(
      'weight' => '22',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['commerce_line_item|jwd_bmw_product|line_item_user'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|jwd_bmw_product_display|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'jwd_bmw_product_display';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'contact_block' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|jwd_bmw_product_display|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function jwd_bmw_product_display_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_line_item|jwd_bmw_product|line_item_user';
  $ds_layout->entity_type = 'commerce_line_item';
  $ds_layout->bundle = 'jwd_bmw_product';
  $ds_layout->view_mode = 'line_item_user';
  $ds_layout->layout = 'twocol_onecol';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'label',
        1 => 'commerce_product',
      ),
      'right' => array(
        2 => 'field_customer_address',
        3 => 'field_customer_address_name',
        4 => 'field_customer_address_title',
        5 => 'field_customer_address_position',
        6 => 'field_customer_address_function',
        7 => 'field_customer_address_postal',
        8 => 'field_customer_address_house_bmw',
        9 => 'field_product_size',
        10 => 'field_customer_email',
        11 => 'field_customer_phone',
        12 => 'field_customer_mobile',
        13 => 'field_customer_fax',
        14 => 'field_customer_com_fax',
        15 => 'field_bmw_cost_center',
        16 => 'field_product_text',
        17 => 'field_customer_notes',
        18 => 'field_product_logo',
      ),
      'bottom' => array(
        19 => 'quantity',
        20 => 'commerce_unit_price',
        21 => 'commerce_total',
        22 => 'line_item_back_to_order',
      ),
    ),
    'fields' => array(
      'label' => 'left',
      'commerce_product' => 'left',
      'field_customer_address' => 'right',
      'field_customer_address_name' => 'right',
      'field_customer_address_title' => 'right',
      'field_customer_address_position' => 'right',
      'field_customer_address_function' => 'right',
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
      'field_product_logo' => 'right',
      'quantity' => 'bottom',
      'commerce_unit_price' => 'bottom',
      'commerce_total' => 'bottom',
      'line_item_back_to_order' => 'bottom',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['commerce_line_item|jwd_bmw_product|line_item_user'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|jwd_bmw_product_display|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'jwd_bmw_product_display';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-twocol_onecol';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'body',
        8 => 'field_product_images',
      ),
      'right' => array(
        2 => 'contact_block',
      ),
      'bottom' => array(
        3 => 'product:field_eigenschaften',
        4 => 'group_bmw_product_info',
        5 => 'product:field_product_min_order_quantity',
        6 => 'product:commerce_price',
        7 => 'field_product_reference',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'body' => 'left',
      'contact_block' => 'right',
      'product:field_eigenschaften' => 'bottom',
      'group_bmw_product_info' => 'bottom',
      'product:field_product_min_order_quantity' => 'bottom',
      'product:commerce_price' => 'bottom',
      'field_product_reference' => 'bottom',
      'field_product_images' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|jwd_bmw_product_display|default'] = $ds_layout;

  return $export;
}
