<?php
/**
 * @file
 * jwd_delivery_address.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jwd_delivery_address_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function jwd_delivery_address_node_info() {
  $items = array(
    'jwd_delivery_returning_customers' => array(
      'name' => t('Lieferadresse Bestandskunde'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
