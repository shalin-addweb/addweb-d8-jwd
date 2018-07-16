<?php
/**
 * @file
 * jwd_%machine_name%_product_display.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function jwd_%machine_name%_product_display_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_jwd_%machine_name%_product_display';
  $strongarm->value = 0;
  $export['comment_anonymous_jwd_%machine_name%_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_jwd_%machine_name%_product_display';
  $strongarm->value = 1;
  $export['comment_default_mode_jwd_%machine_name%_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_jwd_%machine_name%_product_display';
  $strongarm->value = '50';
  $export['comment_default_per_page_jwd_%machine_name%_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_jwd_%machine_name%_product_display';
  $strongarm->value = 1;
  $export['comment_form_location_jwd_%machine_name%_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_jwd_%machine_name%_product_display';
  $strongarm->value = '1';
  $export['comment_jwd_%machine_name%_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_jwd_%machine_name%_product_display';
  $strongarm->value = '1';
  $export['comment_preview_jwd_%machine_name%_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_jwd_%machine_name%_product_display';
  $strongarm->value = 1;
  $export['comment_subject_field_jwd_%machine_name%_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_access_jwd_%machine_name%_product_display';
  $strongarm->value = array(
    'view' => array(
      0 => 5,
      1 => %role_id%,
      2 => 3,
      3 => 4,
    ),
    'view_own' => array(
      0 => 5,
      1 => %role_id%,
      2 => 3,
      3 => 4,
    ),
  );
  $export['content_access_jwd_%machine_name%_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__jwd_%machine_name%_product_display';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'header' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
        'metatags' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '23',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
        ),
        'product:field_product_options_available' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_extra_fields' => array(
          'default' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
        ),
        'product:field_eigenschaften' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
        'product:field_%machine_name%_auflagen_produkt' => array(
          'default' => array(
            'weight' => '21',
            'visible' => FALSE,
          ),
        ),
        'product:field_%machine_name%_preis_stk' => array(
          'default' => array(
            'weight' => '19',
            'visible' => FALSE,
          ),
        ),
        'product:field_%machine_name%_preisberechnung' => array(
          'default' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_min_order_quantity' => array(
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
        ),
        'product:status' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__jwd_%machine_name%_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_jwd_%machine_name%_product_display';
  $strongarm->value = '0';
  $export['language_content_type_jwd_%machine_name%_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_jwd_%machine_name%_product_display';
  $strongarm->value = array();
  $export['menu_options_jwd_%machine_name%_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_jwd_%machine_name%_product_display';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_jwd_%machine_name%_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_jwd_%machine_name%_product_display';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_jwd_%machine_name%_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_jwd_%machine_name%_product_display';
  $strongarm->value = '1';
  $export['node_preview_jwd_%machine_name%_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_jwd_%machine_name%_product_display';
  $strongarm->value = 0;
  $export['node_submitted_jwd_%machine_name%_product_display'] = $strongarm;

  return $export;
}
