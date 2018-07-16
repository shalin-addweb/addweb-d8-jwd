<?php
/**
 * @file
 * jwd_product_type.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function jwd_product_type_field_default_fields() {
  $fields = array();

  // Exported field: 'commerce_product-jwd_product-commerce_price'.
  $fields['commerce_product-jwd_product-commerce_price'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'commerce_product',
      ),
      'field_name' => 'commerce_price',
      'foreign keys' => array(),
      'indexes' => array(
        'currency_price' => array(
          0 => 'amount',
          1 => 'currency_code',
        ),
      ),
      'locked' => '1',
      'module' => 'commerce_price',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'commerce_price',
    ),
    'field_instance' => array(
      'bundle' => 'jwd_product',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'commerce_line_item_display' => array(
          'label' => 'hidden',
          'module' => 'jwd_product',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'jwd_product_price_formatted',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'jwd_product',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'jwd_product_price_formatted',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'jwd_product',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'jwd_product_price_formatted',
          'weight' => 0,
        ),
        'line_item' => array(
          'label' => 'hidden',
          'module' => 'jwd_product',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'jwd_product_price_formatted',
          'weight' => '0',
        ),
        'node_teaser' => array(
          'label' => 'hidden',
          'module' => 'jwd_product',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'jwd_product_price_formatted',
          'weight' => '0',
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'jwd_product',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'jwd_product_price_formatted',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'commerce_product',
      'field_name' => 'commerce_price',
      'label' => 'Price',
      'required' => TRUE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'commerce_price',
        'settings' => array(
          'currency_code' => 'default',
        ),
        'type' => 'commerce_price_full',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'commerce_product-jwd_product-field_product_extra_fields'.
  $fields['commerce_product-jwd_product-field_product_extra_fields'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_product_extra_fields',
      'field_permissions' => array(
        'type' => '0',
      ),
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'field_product_text' => 'Ihr Text',
          'field_product_notes' => 'Bemerkungen',
          'field_product_size' => 'Größe',
          'field_product_font' => 'Schrifttyp',
          'field_customer_address' => 'Adresse',
          'field_customer_address_name' => 'Name',
          'field_customer_address_title' => 'Titel/Abteilung',
          'field_customer_address_position' => 'Position',
          'field_customer_address_function' => 'Funktionsbezeichnung',
          'field_customer_address_postal' => 'Postanschrift (BMW)',
          'field_customer_address_house_bmw' => 'Hausanschrift (BMW)',
          'field_customer_email' => 'Email',
          'field_customer_phone' => 'Telefon',
          'field_customer_mobile' => 'Mobiltelefon',
          'field_customer_fax' => 'Fax',
          'field_customer_com_fax' => 'Com Fax',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'jwd_product',
      'commerce_cart_settings' => array(
        'attribute_field' => 0,
        'attribute_widget' => 'select',
      ),
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'line_item' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'node_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'commerce_product',
      'fences_wrapper' => 'div',
      'field_name' => 'field_product_extra_fields',
      'label' => 'Verfügbare Freitextfelder',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'commerce_product-jwd_product-field_product_options_available'.
  $fields['commerce_product-jwd_product-field_product_options_available'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_product_options_available',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'product_fields',
            'parent' => '0',
            'depth' => '',
          ),
        ),
        'options_list_callback' => 'content_taxonomy_allowed_values',
        'split_by_parent_terms' => 1,
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'jwd_product',
      'commerce_cart_settings' => array(
        'attribute_field' => 0,
        'attribute_widget' => 'select',
      ),
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'line_item' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'node_teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'commerce_product',
      'field_name' => 'field_product_options_available',
      'label' => 'Verfügbare Produkteigenschaften',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'term_reference_tree',
        'settings' => array(
          'cascading_selection' => 0,
          'filter_view' => '',
          'leaves_only' => 0,
          'max_depth' => '',
          'parent_term_id' => '',
          'select_parents' => 1,
          'start_minimized' => 1,
          'token_display' => '',
          'track_list' => 0,
        ),
        'type' => 'term_reference_tree',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'commerce_product-jwd_product_bundle-commerce_price'.
  $fields['commerce_product-jwd_product_bundle-commerce_price'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'commerce_product',
      ),
      'field_name' => 'commerce_price',
      'foreign keys' => array(),
      'indexes' => array(
        'currency_price' => array(
          0 => 'amount',
          1 => 'currency_code',
        ),
      ),
      'locked' => '1',
      'module' => 'commerce_price',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'commerce_price',
    ),
    'field_instance' => array(
      'bundle' => 'jwd_product_bundle',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'commerce_line_item_display' => array(
          'label' => 'hidden',
          'module' => 'jwd_product',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'jwd_product_price_formatted',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'jwd_product',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'jwd_product_price_formatted',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'jwd_product',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'jwd_product_price_formatted',
          'weight' => 0,
        ),
        'line_item' => array(
          'label' => 'hidden',
          'module' => 'jwd_product',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'jwd_product_price_formatted',
          'weight' => '0',
        ),
        'node_full' => array(
          'label' => 'hidden',
          'module' => 'jwd_product',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'jwd_product_price_formatted',
          'weight' => 0,
        ),
        'node_rss' => array(
          'label' => 'hidden',
          'module' => 'jwd_product',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'jwd_product_price_formatted',
          'weight' => 0,
        ),
        'node_search_index' => array(
          'label' => 'hidden',
          'module' => 'jwd_product',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'jwd_product_price_formatted',
          'weight' => 0,
        ),
        'node_search_result' => array(
          'label' => 'hidden',
          'module' => 'jwd_product',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'jwd_product_price_formatted',
          'weight' => 0,
        ),
        'node_teaser' => array(
          'label' => 'hidden',
          'module' => 'jwd_product',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'jwd_product_price_formatted',
          'weight' => '0',
        ),
        'token' => array(
          'label' => 'hidden',
          'module' => 'jwd_product',
          'settings' => array(
            'calculation' => 'calculated_sell_price',
          ),
          'type' => 'jwd_product_price_formatted',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'commerce_product',
      'field_name' => 'commerce_price',
      'label' => 'Preis',
      'required' => TRUE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'commerce_price',
        'settings' => array(
          'currency_code' => 'default',
        ),
        'type' => 'commerce_price_full',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'taxonomy_term-product_fields-field_product_field_price'.
  $fields['taxonomy_term-product_fields-field_product_field_price'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_product_field_price',
      'foreign keys' => array(),
      'indexes' => array(
        'currency_price' => array(
          0 => 'amount',
          1 => 'currency_code',
        ),
      ),
      'locked' => '0',
      'module' => 'commerce_price',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'commerce_price',
    ),
    'field_instance' => array(
      'bundle' => 'product_fields',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'commerce_price',
          'settings' => array(
            'calculation' => FALSE,
          ),
          'type' => 'commerce_price_formatted_amount',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'taxonomy_term',
      'field_name' => 'field_product_field_price',
      'label' => 'Preis',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'commerce_price',
        'settings' => array(
          'currency_code' => 'default',
        ),
        'type' => 'commerce_price_full',
        'weight' => '31',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Preis');
  t('Price');
  t('Verfügbare Freitextfelder');
  t('Verfügbare Produkteigenschaften');

  return $fields;
}
