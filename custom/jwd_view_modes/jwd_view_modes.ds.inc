<?php
/**
 * @file
 * jwd_view_modes.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function jwd_view_modes_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'header';
  $ds_view_mode->label = 'Header';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['header'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'line_item_ordered';
  $ds_view_mode->label = 'Line item ordered';
  $ds_view_mode->entities = array(
    'commerce_line_item' => 'commerce_line_item',
  );
  $export['line_item_ordered'] = $ds_view_mode;

  return $export;
}
