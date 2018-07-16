<?php
/**
 * @file
 * jwd_%machine_name%_product.features.inc
 */

/**
 * Implements hook_commerce_line_item_default_types().
 */
function jwd_%machine_name%_product_commerce_line_item_default_types() {
  $items = array(
    'jwd_%machine_name%_product' => array(
      'name' => '%name% Produkt',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Artikel hinzufügen.',
      'base' => 'commerce_product_line_item',
    ),
  );
  return $items;
}

/**
 * Implements hook_commerce_product_default_types().
 */
function jwd_%machine_name%_product_commerce_product_default_types() {
  $items = array(
    'jwd_%machine_name%_product' => array(
      'type' => 'jwd_%machine_name%_product',
      'name' => '%name% Produkt',
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
function jwd_%machine_name%_product_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
