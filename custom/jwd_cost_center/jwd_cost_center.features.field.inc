<?php
/**
 * @file
 * jwd_cost_center.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function jwd_cost_center_field_default_fields() {
  $fields = array();

  // Exported field: 'node-jwd_kostenstelle-field_jwd_kundengruppe'.
  $fields['node-jwd_kostenstelle-field_jwd_kundengruppe'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_jwd_kundengruppe',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'role_field',
      'settings' => array(
        'exclusive' => 0,
        'roles' => array(
          31 => '31',
        ),
      ),
      'translatable' => '0',
      'type' => 'role',
    ),
    'field_instance' => array(
      'bundle' => 'jwd_kostenstelle',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'role_field',
          'settings' => array(),
          'type' => 'role_field_formatter',
          'weight' => 1,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'fences_wrapper' => 'div',
      'field_name' => 'field_jwd_kundengruppe',
      'label' => 'Kundengruppe',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'content_taxonomy_opt_groups' => FALSE,
        ),
        'type' => 'options_select',
        'weight' => '32',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Kundengruppe');

  return $fields;
}
