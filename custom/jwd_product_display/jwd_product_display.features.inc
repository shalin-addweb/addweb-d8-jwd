<?php
/**
 * @file
 * jwd_product_display.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jwd_product_display_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function jwd_product_display_node_info() {
  $items = array(
    'jwd_product_bundle_display' => array(
      'name' => t('Produktpaket'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'jwd_product_display' => array(
      'name' => t('Produkt'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
