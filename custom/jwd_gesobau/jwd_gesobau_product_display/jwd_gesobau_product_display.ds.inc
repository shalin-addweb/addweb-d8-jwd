<?php
/**
 * @file
 * jwd_gesobau_product_display.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function jwd_gesobau_product_display_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|jwd_gesobau_product_display|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'jwd_gesobau_product_display';
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
  $export['node|jwd_gesobau_product_display|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function jwd_gesobau_product_display_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|jwd_gesobau_product_display|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'jwd_gesobau_product_display';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-twocol_onecol';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'title',
        1 => 'body',
        9 => 'field_product_images',
      ),
      'right' => array(
        2 => 'contact_block',
      ),
      'bottom' => array(
        3 => 'product:field_eigenschaften',
        4 => 'product:field_product_unit',
        5 => 'product:field_product_min_order_quantity',
        6 => 'group_gb_product_info',
        7 => 'product:commerce_price',
        8 => 'field_product_reference',
      ),
    ),
    'fields' => array(
      'title' => 'left',
      'body' => 'left',
      'contact_block' => 'right',
      'product:field_eigenschaften' => 'bottom',
      'product:field_product_unit' => 'bottom',
      'product:field_product_min_order_quantity' => 'bottom',
      'group_gb_product_info' => 'bottom',
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
  $export['node|jwd_gesobau_product_display|default'] = $ds_layout;

  return $export;
}
