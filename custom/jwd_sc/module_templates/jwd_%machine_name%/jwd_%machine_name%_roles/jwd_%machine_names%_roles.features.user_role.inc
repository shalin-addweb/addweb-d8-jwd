<?php
/**
 * @file
 * jwd_%machine_name%_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function jwd_%machine_name%_roles_user_default_roles() {
  $roles = array();

  // Exported role: %name%.
  $roles['%name%'] = array(
    'name' => '%name%',
    'weight' => '8',
  );

  return $roles;
}
