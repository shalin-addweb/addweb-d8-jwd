<?php
/**
 * @file
 * jwd_gesobau_product_display.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function jwd_gesobau_product_display_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gb_product_info|node|jwd_gesobau_product_display|default';
  $field_group->group_name = 'group_gb_product_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jwd_gesobau_product_display';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '6',
    'children' => array(
      0 => 'product:field_product_min_order_quantity',
      1 => 'product:field_product_unit',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Info',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_gb_product_info|node|jwd_gesobau_product_display|default'] = $field_group;

  return $export;
}
