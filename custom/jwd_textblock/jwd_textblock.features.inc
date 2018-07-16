<?php
/**
 * @file
 * jwd_textblock.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jwd_textblock_ctools_plugin_api() {
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
function jwd_textblock_node_info() {
  $items = array(
    'textblock' => array(
      'name' => t('Textblock'),
      'base' => 'node_content',
      'description' => t('Textblock mit optionalem Bild für das Einfügen in Panels.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
