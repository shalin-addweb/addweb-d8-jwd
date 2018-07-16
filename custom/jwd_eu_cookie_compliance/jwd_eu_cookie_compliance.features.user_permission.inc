<?php
/**
 * @file
 * jwd_eu_cookie_compliance.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function jwd_eu_cookie_compliance_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer EU Cookie Compliance popup.
  $permissions['administer EU Cookie Compliance popup'] = array(
    'name' => 'administer EU Cookie Compliance popup',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'eu_cookie_compliance',
  );

  // Exported permission: display EU Cookie Compliance popup.
  $permissions['display EU Cookie Compliance popup'] = array(
    'name' => 'display EU Cookie Compliance popup',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'eu_cookie_compliance',
  );

  return $permissions;
}
