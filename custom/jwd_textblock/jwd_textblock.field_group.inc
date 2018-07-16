<?php
/**
 * @file
 * jwd_textblock.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function jwd_textblock_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_textblock_image|node|textblock|form';
  $field_group->group_name = 'group_textblock_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'textblock';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bild',
    'weight' => '2',
    'children' => array(
      0 => 'field_textblock_image',
      1 => 'field_textblock_image_align',
      2 => 'field_textblock_image_format',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Bild',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-textblock-image field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_textblock_image|node|textblock|form'] = $field_group;

  return $export;
}
