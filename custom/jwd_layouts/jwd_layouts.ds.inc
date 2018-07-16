<?php
/**
 * @file
 * jwd_layouts.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function jwd_layouts_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'ds_views|jwd_blog-page|default';
  $ds_fieldsetting->entity_type = 'ds_views';
  $ds_fieldsetting->bundle = 'jwd_blog-page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'rows' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'pager' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'tags' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['ds_views|jwd_blog-page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|jwd_blogpost|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'jwd_blogpost';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'blognavigation' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'tags' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
  );
  $export['node|jwd_blogpost|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|jwd_blogpost|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'jwd_blogpost';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
  );
  $export['node|jwd_blogpost|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|jwd_product_bundle_display|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'jwd_product_bundle_display';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'contact_block' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
  );
  $export['node|jwd_product_bundle_display|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|jwd_product_display|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'jwd_product_display';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'contact_block' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h1',
        'class' => '',
      ),
    ),
  );
  $export['node|jwd_product_display|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|jwd_reference|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'jwd_reference';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'jwd_references_thumbnails' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|jwd_reference|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|webform|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'webform';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'contact_block' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|webform|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|tags|default';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'tags';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'blognavigation' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'tags' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|tags|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|tags|full';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'tags';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'blog_tags' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'blognavigation' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'tags' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['taxonomy_term|tags|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function jwd_layouts_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'blog_tags';
  $ds_field->label = 'Blog tags';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<?php
print views_embed_view(\'jwd_blog\',\'block_tags\',arg(2));
?>',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['blog_tags'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'blognavigation';
  $ds_field->label = 'Blognavigation';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|jwd_blog-block_all_short_ajax',
    'block_render' => '1',
  );
  $export['blognavigation'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'contact_block';
  $ds_field->label = 'Contact block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'jwd_custom|contact',
    'block_render' => '1',
  );
  $export['contact_block'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'tags';
  $ds_field->label = 'Tags';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|jwd_tags-block',
    'block_render' => '1',
  );
  $export['tags'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function jwd_layouts_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_customer_profile|billing|customer';
  $ds_layout->entity_type = 'commerce_customer_profile';
  $ds_layout->bundle = 'billing';
  $ds_layout->view_mode = 'customer';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_customer_address',
      ),
      'right' => array(
        1 => 'field_customer_phone',
        2 => 'field_customer_fax',
        3 => 'field_customer_email',
        4 => 'field_customer_how_found',
        5 => 'field_customer_notes',
      ),
    ),
    'fields' => array(
      'field_customer_address' => 'left',
      'field_customer_phone' => 'right',
      'field_customer_fax' => 'right',
      'field_customer_email' => 'right',
      'field_customer_how_found' => 'right',
      'field_customer_notes' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
  );
  $export['commerce_customer_profile|billing|customer'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_customer_profile|billing|default';
  $ds_layout->entity_type = 'commerce_customer_profile';
  $ds_layout->bundle = 'billing';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_customer_address',
      ),
      'right' => array(
        1 => 'field_customer_phone',
        2 => 'field_customer_fax',
        3 => 'field_customer_email',
        4 => 'field_customer_how_found',
        5 => 'field_customer_notes',
        6 => 'field_newsletter',
      ),
    ),
    'fields' => array(
      'field_customer_address' => 'left',
      'field_customer_phone' => 'right',
      'field_customer_fax' => 'right',
      'field_customer_email' => 'right',
      'field_customer_how_found' => 'right',
      'field_customer_notes' => 'right',
      'field_newsletter' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['commerce_customer_profile|billing|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_line_item|jwd_product_bundle|line_item_ordered';
  $ds_layout->entity_type = 'commerce_line_item';
  $ds_layout->bundle = 'jwd_product_bundle';
  $ds_layout->view_mode = 'line_item_ordered';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'commerce_product',
      ),
      'right' => array(
        1 => 'field_customer_address',
        2 => 'field_customer_phone',
        3 => 'field_customer_fax',
        4 => 'field_customer_email',
        5 => 'field_customer_how_found',
        6 => 'field_customer_notes',
        7 => 'field_newsletter',
      ),
    ),
    'fields' => array(
      'commerce_product' => 'left',
      'field_customer_address' => 'right',
      'field_customer_phone' => 'right',
      'field_customer_fax' => 'right',
      'field_customer_email' => 'right',
      'field_customer_how_found' => 'right',
      'field_customer_notes' => 'right',
      'field_newsletter' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['commerce_line_item|jwd_product_bundle|line_item_ordered'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_line_item|jwd_product|line_item_ordered';
  $ds_layout->entity_type = 'commerce_line_item';
  $ds_layout->bundle = 'jwd_product';
  $ds_layout->view_mode = 'line_item_ordered';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'commerce_product',
        1 => 'field_product_options',
        2 => 'field_product_options_individual',
        3 => 'field_product_size',
        4 => 'field_product_font',
        5 => 'field_product_text',
      ),
      'right' => array(
        6 => 'field_customer_address',
        7 => 'field_customer_phone',
        8 => 'field_customer_fax',
        9 => 'field_customer_email',
        10 => 'field_customer_how_found',
        11 => 'field_customer_notes',
        12 => 'field_newsletter',
      ),
    ),
    'fields' => array(
      'commerce_product' => 'left',
      'field_product_options' => 'left',
      'field_product_options_individual' => 'left',
      'field_product_size' => 'left',
      'field_product_font' => 'left',
      'field_product_text' => 'left',
      'field_customer_address' => 'right',
      'field_customer_phone' => 'right',
      'field_customer_fax' => 'right',
      'field_customer_email' => 'right',
      'field_customer_how_found' => 'right',
      'field_customer_notes' => 'right',
      'field_newsletter' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['commerce_line_item|jwd_product|line_item_ordered'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'commerce_product|jwd_product|default';
  $ds_layout->entity_type = 'commerce_product';
  $ds_layout->bundle = 'jwd_product';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'commerce_price',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'commerce_price' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['commerce_product|jwd_product|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'ds_views|jwd_blog-page|default';
  $ds_layout->entity_type = 'ds_views';
  $ds_layout->bundle = 'jwd_blog-page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'twocol_sidebar';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'rows',
        1 => 'pager',
      ),
      'right' => array(
        2 => 'tags',
      ),
    ),
    'fields' => array(
      'rows' => 'left',
      'pager' => 'left',
      'tags' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['ds_views|jwd_blog-page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|jwd_blogpost|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'jwd_blogpost';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'twocol_sidebar';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'post_date',
        1 => 'field_blogpost_image',
        2 => 'body',
        3 => 'field_blogpost_tags',
      ),
      'right' => array(
        4 => 'tags',
        5 => 'blognavigation',
      ),
    ),
    'fields' => array(
      'post_date' => 'left',
      'field_blogpost_image' => 'left',
      'body' => 'left',
      'field_blogpost_tags' => 'left',
      'tags' => 'right',
      'blognavigation' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|jwd_blogpost|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|jwd_product_bundle_display|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'jwd_product_bundle_display';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'twocol_onecol';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'contact_block',
      ),
      'left' => array(
        1 => 'title',
        2 => 'body',
      ),
      'bottom' => array(
        3 => 'field_product_bundle_reference',
        4 => 'field_meta_description',
      ),
    ),
    'fields' => array(
      'contact_block' => 'right',
      'title' => 'left',
      'body' => 'left',
      'field_product_bundle_reference' => 'bottom',
      'field_meta_description' => 'bottom',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|jwd_product_bundle_display|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|jwd_product_display|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'jwd_product_display';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'twocol_onecol';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'contact_block',
      ),
      'left' => array(
        1 => 'body',
        2 => 'title',
        3 => 'field_product_images_bg',
        4 => 'field_product_images',
      ),
      'bottom' => array(
        5 => 'field_product_reference',
        6 => 'product:field_product_options_available',
        7 => 'field_product_image_gallery_type',
        8 => 'field_meta_description',
      ),
    ),
    'fields' => array(
      'contact_block' => 'right',
      'body' => 'left',
      'title' => 'left',
      'field_product_images_bg' => 'left',
      'field_product_images' => 'left',
      'field_product_reference' => 'bottom',
      'product:field_product_options_available' => 'bottom',
      'field_product_image_gallery_type' => 'bottom',
      'field_meta_description' => 'bottom',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|jwd_product_display|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|jwd_reference|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'jwd_reference';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'twocol_onecol';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_reference_images',
        1 => 'body',
      ),
      'right' => array(
        2 => 'group_reference_info',
        3 => 'field_reference_info_title',
        4 => 'field_reference_info_body',
      ),
    ),
    'fields' => array(
      'field_reference_images' => 'left',
      'body' => 'left',
      'group_reference_info' => 'right',
      'field_reference_info_title' => 'right',
      'field_reference_info_body' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|jwd_reference|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|webform|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'webform';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'twocol_onecol';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'body',
      ),
      'right' => array(
        1 => 'contact_block',
      ),
      'bottom' => array(
        2 => 'webform',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'contact_block' => 'right',
      'webform' => 'bottom',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|webform|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|tags|full';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'tags';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'twocol_sidebar';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'blog_tags',
      ),
      'right' => array(
        1 => 'tags',
        2 => 'blognavigation',
      ),
    ),
    'fields' => array(
      'blog_tags' => 'left',
      'tags' => 'right',
      'blognavigation' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['taxonomy_term|tags|full'] = $ds_layout;

  return $export;
}
