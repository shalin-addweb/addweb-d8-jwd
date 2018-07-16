<?php
/**
 * @file
 * jwd_product_display.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function jwd_product_display_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_jwd_product_bundle_display';
  $strongarm->value = 0;
  $export['comment_anonymous_jwd_product_bundle_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_jwd_product_display';
  $strongarm->value = 0;
  $export['comment_anonymous_jwd_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_jwd_product_bundle_display';
  $strongarm->value = 1;
  $export['comment_default_mode_jwd_product_bundle_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_jwd_product_display';
  $strongarm->value = 1;
  $export['comment_default_mode_jwd_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_jwd_product_bundle_display';
  $strongarm->value = '50';
  $export['comment_default_per_page_jwd_product_bundle_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_jwd_product_display';
  $strongarm->value = '50';
  $export['comment_default_per_page_jwd_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_jwd_product_bundle_display';
  $strongarm->value = 1;
  $export['comment_form_location_jwd_product_bundle_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_jwd_product_display';
  $strongarm->value = 1;
  $export['comment_form_location_jwd_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_jwd_product_bundle_display';
  $strongarm->value = '1';
  $export['comment_jwd_product_bundle_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_jwd_product_display';
  $strongarm->value = '1';
  $export['comment_jwd_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_jwd_product_bundle_display';
  $strongarm->value = '0';
  $export['comment_preview_jwd_product_bundle_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_jwd_product_display';
  $strongarm->value = '1';
  $export['comment_preview_jwd_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_jwd_product_bundle_display';
  $strongarm->value = 1;
  $export['comment_subject_field_jwd_product_bundle_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_jwd_product_display';
  $strongarm->value = 1;
  $export['comment_subject_field_jwd_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__jwd_product_bundle_display';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
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
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'header' => array(
        'custom_settings' => TRUE,
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
          'weight' => '40',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'header' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'header' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'header' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_options_available' => array(
          'default' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'header' => array(
            'weight' => '8',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '2',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_extra_fields' => array(
          'default' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
          'header' => array(
            'weight' => '3',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
        'product:field_eigenschaften' => array(
          'header' => array(
            'weight' => '36',
            'visible' => FALSE,
          ),
        ),
        'product:field_gb_auflagen_produkt' => array(
          'header' => array(
            'weight' => '41',
            'visible' => FALSE,
          ),
        ),
        'product:field_gb_preis_stk' => array(
          'header' => array(
            'weight' => '39',
            'visible' => FALSE,
          ),
        ),
        'product:field_gb_preisberechnung' => array(
          'header' => array(
            'weight' => '40',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__jwd_product_bundle_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__jwd_product_display';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => FALSE,
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
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'header' => array(
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
          'weight' => '40',
        ),
      ),
      'display' => array(
        'product:sku' => array(
          'default' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '14',
            'visible' => FALSE,
          ),
        ),
        'product:title' => array(
          'default' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '15',
            'visible' => FALSE,
          ),
        ),
        'product:commerce_price' => array(
          'default' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '16',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_options_available' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'search_result' => array(
            'weight' => '4',
            'visible' => FALSE,
          ),
        ),
        'product:field_product_extra_fields' => array(
          'default' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
          'search_result' => array(
            'weight' => '11',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__jwd_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_jwd_product_bundle_display';
  $strongarm->value = '0';
  $export['language_content_type_jwd_product_bundle_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_jwd_product_display';
  $strongarm->value = '0';
  $export['language_content_type_jwd_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_jwd_product_bundle_display';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_jwd_product_bundle_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_jwd_product_display';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_jwd_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_jwd_product_bundle_display';
  $strongarm->value = 'main-menu:5691';
  $export['menu_parent_jwd_product_bundle_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_jwd_product_display';
  $strongarm->value = 'main-menu:1623';
  $export['menu_parent_jwd_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_jwd_product_bundle_display';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_jwd_product_bundle_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_jwd_product_display';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_jwd_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_jwd_product_bundle_display';
  $strongarm->value = '1';
  $export['node_preview_jwd_product_bundle_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_jwd_product_display';
  $strongarm->value = '0';
  $export['node_preview_jwd_product_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_jwd_product_bundle_display';
  $strongarm->value = 0;
  $export['node_submitted_jwd_product_bundle_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_jwd_product_display';
  $strongarm->value = 1;
  $export['node_submitted_jwd_product_display'] = $strongarm;

  return $export;
}
