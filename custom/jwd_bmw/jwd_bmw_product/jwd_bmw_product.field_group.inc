<?php
/**
 * @file
 * jwd_bmw_product.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function jwd_bmw_product_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_customer_address|commerce_line_item|jwd_bmw_product|form';
  $field_group->group_name = 'group_customer_address';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'jwd_bmw_product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Adresse',
    'weight' => '3',
    'children' => array(
      0 => 'field_customer_address',
      1 => 'field_customer_address_function',
      2 => 'field_customer_address_house_bmw',
      3 => 'field_customer_address_name',
      4 => 'field_customer_address_position',
      5 => 'field_customer_address_postal',
      6 => 'field_customer_address_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Adresse',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-customer-address',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_customer_address|commerce_line_item|jwd_bmw_product|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_customer_contact|commerce_line_item|jwd_bmw_product|form';
  $field_group->group_name = 'group_customer_contact';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'jwd_bmw_product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kontakt',
    'weight' => '4',
    'children' => array(
      0 => 'field_customer_com_fax',
      1 => 'field_customer_email',
      2 => 'field_customer_fax',
      3 => 'field_customer_mobile',
      4 => 'field_customer_phone',
      5 => 'field_bmw_cost_center',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Kontakt',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-customer-contact',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_customer_contact|commerce_line_item|jwd_bmw_product|form'] = $field_group;

  return $export;
}
