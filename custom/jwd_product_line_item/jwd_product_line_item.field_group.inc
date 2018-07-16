<?php
/**
 * @file
 * jwd_product_line_item.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function jwd_product_line_item_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_customer_contact|commerce_line_item|jwd_product_bundle|form';
  $field_group->group_name = 'group_customer_contact';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'jwd_product_bundle';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '9',
    'children' => array(
      0 => 'field_customer_phone',
      1 => 'field_customer_fax',
      2 => 'field_customer_email',
      3 => 'field_customer_how_found',
      4 => 'field_customer_notes',
      5 => 'field_customer_privacy',
      6 => 'field_newsletter',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-customer-contact field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_customer_contact|commerce_line_item|jwd_product_bundle|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_customer_contact|commerce_line_item|jwd_product|form';
  $field_group->group_name = 'group_customer_contact';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'jwd_product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '10',
    'children' => array(
      0 => 'field_customer_phone',
      1 => 'field_customer_fax',
      2 => 'field_customer_email',
      3 => 'field_customer_how_found',
      4 => 'field_customer_notes',
      5 => 'field_customer_privacy',
      6 => 'field_newsletter',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Contact',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-customer-contact field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_customer_contact|commerce_line_item|jwd_product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_product_options|commerce_line_item|jwd_product|form';
  $field_group->group_name = 'group_product_options';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'jwd_product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Product options',
    'weight' => '6',
    'children' => array(
      0 => 'field_product_options',
      1 => 'field_product_font',
      2 => 'field_product_size',
      3 => 'field_product_text',
      4 => 'field_product_options_individual',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Product options',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-product-options field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_product_options|commerce_line_item|jwd_product|form'] = $field_group;

  return $export;
}
