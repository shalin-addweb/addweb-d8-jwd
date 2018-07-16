<?php
/**
 * @file
 * jwd_bmw_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function jwd_bmw_roles_user_default_roles() {
  $roles = array();

  // Exported role: BMW.
  $roles['BMW'] = array(
    'name' => 'BMW',
    'weight' => '9',
  );

  return $roles;
}
