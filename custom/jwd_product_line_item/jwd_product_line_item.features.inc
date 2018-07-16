<?php
/**
 * @file
 * jwd_product_line_item.features.inc
 */

/**
 * Implements hook_commerce_line_item_default_types().
 */
function jwd_product_line_item_commerce_line_item_default_types() {
  $items = array(
    'jwd_product' => array(
      'name' => 'Produkt',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Produkt hinzufügen',
      'base' => 'commerce_product_line_item',
    ),
    'jwd_product_bundle' => array(
      'name' => 'Produktpaket',
      'description' => 'A customizable product line item type.',
      'product' => TRUE,
      'add_form_submit_value' => 'Produkt hinzufügen',
      'base' => 'commerce_product_line_item',
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function jwd_product_line_item_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
