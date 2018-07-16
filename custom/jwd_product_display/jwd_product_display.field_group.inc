<?php
/**
 * @file
 * jwd_product_display.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function jwd_product_display_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_bundle_seo|node|jwd_product_bundle_display|form';
  $field_group->group_name = 'group_product_bundle_seo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jwd_product_bundle_display';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'SEO',
    'weight' => '7',
    'children' => array(
      0 => 'field_meta_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-product-bundle-seo field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_product_bundle_seo|node|jwd_product_bundle_display|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_bundle_special|node|jwd_product_bundle_display|form';
  $field_group->group_name = 'group_product_bundle_special';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jwd_product_bundle_display';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Special',
    'weight' => '4',
    'children' => array(
      0 => 'field_product_bundle_is_special',
      1 => 'field_product_bundle_special',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Special',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-product-bundle-special field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_product_bundle_special|node|jwd_product_bundle_display|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_image_gallery|node|jwd_product_display|form';
  $field_group->group_name = 'group_product_image_gallery';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jwd_product_display';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bildergalerie',
    'weight' => '5',
    'children' => array(
      0 => 'field_product_images',
      1 => 'field_product_image_gallery_type',
      2 => 'field_product_images_bg',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-product-image-gallery field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_product_image_gallery|node|jwd_product_display|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_seo|node|jwd_product_display|form';
  $field_group->group_name = 'group_product_seo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jwd_product_display';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'SEO',
    'weight' => '6',
    'children' => array(
      0 => 'field_meta_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-product-seo field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_product_seo|node|jwd_product_display|form'] = $field_group;

  return $export;
}
