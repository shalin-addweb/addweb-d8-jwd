<?php
/**
 * @file
 * jwd_cost_center.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jwd_cost_center_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function jwd_cost_center_node_info() {
  $items = array(
    'jwd_kostenstelle' => array(
      'name' => t('Kostenstelle'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
