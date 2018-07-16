<?php
/**
 * @file
 * jwd_bmw_pathauto.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function jwd_bmw_pathauto_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_jwd_bmw_product_display_pattern';
  $strongarm->value = 'bmw/produkte/[node:title]';
  $export['pathauto_node_jwd_bmw_product_display_pattern'] = $strongarm;

  return $export;
}
