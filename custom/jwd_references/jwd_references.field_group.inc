<?php
/**
 * @file
 * jwd_references.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function jwd_references_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reference_info|node|jwd_reference|default';
  $field_group->group_name = 'group_reference_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jwd_reference';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Infokasten',
    'weight' => '2',
    'children' => array(
      0 => 'field_reference_info_title',
      1 => 'field_reference_info_body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Infokasten',
      'instance_settings' => array(
        'classes' => 'block info-block group-reference-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_reference_info|node|jwd_reference|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reference_info|node|jwd_reference|form';
  $field_group->group_name = 'group_reference_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jwd_reference';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Infokasten',
    'weight' => '5',
    'children' => array(
      0 => 'field_reference_info_title',
      1 => 'field_reference_info_body',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-reference-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_reference_info|node|jwd_reference|form'] = $field_group;

  return $export;
}
