<?php
/**
 * @file
 * jwd_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function jwd_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_active_modules';
  $strongarm->value = array(
    'node' => 'node',
    'advanced_help' => 0,
    'user' => 0,
  );
  $export['search_active_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_config';
  $strongarm->value = array(
    'forms' => array(
      'toggle_forms' => 1,
      'move_keyword_search' => 1,
      'advanced_populate' => 0,
      'remove_containing_wrapper' => 'default',
      'advanced_expand' => 'remove',
    ),
    'fields' => array(
      'containing_any' => array(
        'remove' => 1,
        'roles' => array(
          1 => 0,
          2 => 0,
          51 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          11 => 0,
          21 => 0,
          41 => 0,
          31 => 0,
        ),
      ),
      'containing_phrase' => array(
        'remove' => 1,
        'roles' => array(
          1 => 0,
          2 => 0,
          51 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          11 => 0,
          21 => 0,
          41 => 0,
          31 => 0,
        ),
      ),
      'containing_none' => array(
        'remove' => 1,
        'roles' => array(
          1 => 0,
          2 => 0,
          51 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          11 => 0,
          21 => 0,
          41 => 0,
          31 => 0,
        ),
      ),
      'types' => array(
        'remove' => 1,
        'roles' => array(
          1 => 0,
          2 => 0,
          51 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          11 => 0,
          21 => 0,
          41 => 0,
          31 => 0,
        ),
        'filter' => array(
          'article' => 'article',
          'page' => 'page',
          'jwd_gallery' => 'jwd_gallery',
          'jwd_blogpost' => 'jwd_blogpost',
          'book' => 'book',
          'jwd_gesobau_product_display' => 'jwd_gesobau_product_display',
          'jwd_affiliate' => 'jwd_affiliate',
          'jwd_product_display' => 'jwd_product_display',
          'jwd_product_bundle_display' => 'jwd_product_bundle_display',
          'jwd_reference' => 'jwd_reference',
          'textblock' => 'textblock',
          'webform' => 'webform',
          'jwd_faq' => 0,
          'jwd_kostenstelle' => 0,
          'jwd_delivery_returning_customers' => 0,
        ),
        'groupings' => array(),
      ),
      'category' => array(
        'remove' => 0,
        'roles' => array(
          0 => 0,
          1 => 0,
          2 => 0,
          51 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          11 => 0,
          21 => 0,
          41 => 0,
          31 => 0,
        ),
      ),
    ),
    'restrictions' => array(
      'admin_bypass' => 0,
    ),
  );
  $export['search_config'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_config_string_overrides';
  $strongarm->value = array(
    'labels' => array(
      'basic' => 'S',
      'basic_with_keys' => '',
      'basic_submit' => '',
      'advanced_fieldset' => '',
      'advanced_fieldset_with_keys' => '',
      'advanced_any' => '',
      'advanced_phrase' => '',
      'advanced_none' => '',
      'advanced_type' => '',
      'advanced_language' => '',
      'advanced_submit' => '',
    ),
    'title_display' => array(
      'basic' => 'invisible',
      'advanced_any' => 'default',
      'advanced_phrase' => 'default',
      'advanced_none' => 'default',
      'advanced_type' => 'default',
      'advanced_language' => 'default',
    ),
  );
  $export['search_config_string_overrides'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_cron_limit';
  $strongarm->value = '100';
  $export['search_cron_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_default_module';
  $strongarm->value = 'node';
  $export['search_default_module'] = $strongarm;

  return $export;
}
