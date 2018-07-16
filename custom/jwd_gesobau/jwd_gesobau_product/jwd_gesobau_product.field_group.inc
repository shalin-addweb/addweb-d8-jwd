<?php
/**
 * @file
 * jwd_gesobau_product.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function jwd_gesobau_product_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_customer_contact|commerce_line_item|jwd_gb_product|form';
  $field_group->group_name = 'group_customer_contact';
  $field_group->entity_type = 'commerce_line_item';
  $field_group->bundle = 'jwd_gb_product';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Kontakt',
    'weight' => '3',
    'children' => array(
      0 => 'field_customer_email',
      1 => 'field_customer_fax',
      2 => 'field_customer_phone',
      3 => 'field_customer_mobile',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Kontakt',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-customer-contact field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_customer_contact|commerce_line_item|jwd_gb_product|form'] = $field_group;

  return $export;
}
