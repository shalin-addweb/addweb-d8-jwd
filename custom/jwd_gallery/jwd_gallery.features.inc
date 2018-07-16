<?php
/**
 * @file
 * jwd_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jwd_gallery_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function jwd_gallery_node_info() {
  $items = array(
    'jwd_gallery' => array(
      'name' => t('Bildergalerie'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  return $items;
}
