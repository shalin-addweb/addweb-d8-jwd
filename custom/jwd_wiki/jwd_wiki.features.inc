<?php
/**
 * @file
 * jwd_wiki.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jwd_wiki_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function jwd_wiki_node_info() {
  $items = array(
    'book' => array(
      'name' => t('Buchseite'),
      'base' => 'node_content',
      'description' => t('<em>Bücher (Books-Modul)</em> sind mit einer hierarchischen Menüstruktur ausgestattet - sie sind besonders für Handbücher und Tutorien geeignet.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
