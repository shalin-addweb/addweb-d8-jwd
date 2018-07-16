<?php
/**
 * @file
 * jwd_blog.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function jwd_blog_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_seo|node|jwd_blogpost|form';
  $field_group->group_name = 'group_blog_seo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'jwd_blogpost';
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
        'classes' => ' group-blog-seo field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_blog_seo|node|jwd_blogpost|form'] = $field_group;

  return $export;
}
