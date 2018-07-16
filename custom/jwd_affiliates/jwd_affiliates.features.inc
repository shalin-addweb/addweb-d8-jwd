<?php
/**
 * @file
 * jwd_affiliates.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jwd_affiliates_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function jwd_affiliates_node_info() {
  $items = array(
    'jwd_affiliate' => array(
      'name' => t('Partner'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
