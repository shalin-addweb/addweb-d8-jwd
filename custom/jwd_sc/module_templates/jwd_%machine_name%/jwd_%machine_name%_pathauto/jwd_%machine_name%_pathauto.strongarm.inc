<?php
/**
 * @file
 * jwd_%machine_name%_pathauto.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function jwd_%machine_name%_pathauto_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_jwd_%machine_name%_product_display_pattern';
  $strongarm->value = '%machine_name%/produkte/[node:title]';
  $export['pathauto_node_jwd_%machine_name%_product_display_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_produktkategorien_%machine_name%_pattern';
  $strongarm->value = '%machine_name%/[term:name]';
  $export['pathauto_taxonomy_term_produktkategorien_%machine_name%_pattern'] = $strongarm;

  return $export;
}
