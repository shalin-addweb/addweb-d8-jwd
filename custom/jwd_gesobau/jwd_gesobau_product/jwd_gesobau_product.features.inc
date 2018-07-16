<?php
/**
 * @file
 * jwd_gesobau_product.features.inc
 */

/**
 * Implements hook_commerce_line_item_default_types().
 */
function jwd_gesobau_product_commerce_line_item_default_types() {
  $items = array(
    'jwd_gb_product' => array(
      'name' => 'Gesobau Produkt',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Produkt hinzufügen',
      'base' => 'commerce_product_line_item',
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_product_default_types().
 */
function jwd_gesobau_product_commerce_product_default_types() {
  $items = array(
    'jwd_gesobau_product' => array(
      'type' => 'jwd_gesobau_product',
      'name' => 'Gesobau Produkt',
      'description' => '',
      'help' => '',
      'revision' => '1',
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function jwd_gesobau_product_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
