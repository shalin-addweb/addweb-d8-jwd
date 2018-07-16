<?php
/**
 * @file
 * jwd_%machine_name%_product_display.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function jwd_%machine_name%_product_display_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_%machine_name%_product_info|node|jwd_%machine_name%_product_display|default';
  $field_group->group_name = 'group_%machine_name%_product_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jwd_%machine_name%_product_display';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Info',
    'weight' => '6',
    'children' => array(
      0 => 'product:field_product_min_order_quantity',
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
  $export['group_%machine_name%_product_info|node|jwd_%machine_name%_product_display|default'] = $field_group;

  return $export;
}
