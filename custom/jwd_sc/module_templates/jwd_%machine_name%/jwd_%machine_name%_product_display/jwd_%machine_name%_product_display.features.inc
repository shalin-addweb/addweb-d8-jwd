<?php
/**
 * @file
 * jwd_%machine_name%_product_display.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jwd_%machine_name%_product_display_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
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
function jwd_%machine_name%_product_display_node_info() {
  $items = array(
    'jwd_%machine_name%_product_display' => array(
      'name' => t('%name% Produkt'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
