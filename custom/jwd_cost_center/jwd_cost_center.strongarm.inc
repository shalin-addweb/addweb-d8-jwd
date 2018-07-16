<?php
/**
 * @file
 * jwd_cost_center.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function jwd_cost_center_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_jwd_kostenstelle';
  $strongarm->value = 0;
  $export['comment_anonymous_jwd_kostenstelle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_jwd_kostenstelle';
  $strongarm->value = 1;
  $export['comment_default_mode_jwd_kostenstelle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_jwd_kostenstelle';
  $strongarm->value = '50';
  $export['comment_default_per_page_jwd_kostenstelle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_jwd_kostenstelle';
  $strongarm->value = 1;
  $export['comment_form_location_jwd_kostenstelle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_jwd_kostenstelle';
  $strongarm->value = '1';
  $export['comment_jwd_kostenstelle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_jwd_kostenstelle';
  $strongarm->value = '1';
  $export['comment_preview_jwd_kostenstelle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_jwd_kostenstelle';
  $strongarm->value = 1;
  $export['comment_subject_field_jwd_kostenstelle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__jwd_kostenstelle';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__jwd_kostenstelle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_jwd_kostenstelle';
  $strongarm->value = '0';
  $export['language_content_type_jwd_kostenstelle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_jwd_kostenstelle';
  $strongarm->value = array();
  $export['menu_options_jwd_kostenstelle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_jwd_kostenstelle';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_jwd_kostenstelle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_jwd_kostenstelle';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_jwd_kostenstelle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_jwd_kostenstelle';
  $strongarm->value = '1';
  $export['node_preview_jwd_kostenstelle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_jwd_kostenstelle';
  $strongarm->value = 1;
  $export['node_submitted_jwd_kostenstelle'] = $strongarm;

  return $export;
}
