<?php
/**
 * @file
 * jwd_faq.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jwd_faq_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function jwd_faq_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function jwd_faq_node_info() {
  $items = array(
    'jwd_faq' => array(
      'name' => t('Frage und Antwort'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Frage'),
      'help' => '',
    ),
  );
  return $items;
}
