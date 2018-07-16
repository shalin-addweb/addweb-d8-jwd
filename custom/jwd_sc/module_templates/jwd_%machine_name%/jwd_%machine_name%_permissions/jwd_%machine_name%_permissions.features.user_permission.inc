<?php
/**
 * @file
 * jwd_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function jwd_%machine_name%_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: create jwd_%machine_name%_product_display content.
  $permissions['create jwd_%machine_name%_product_display content'] = array(
    'name' => 'create jwd_%machine_name%_product_display content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any jwd_%machine_name%_product_display content.
  $permissions['delete any jwd_%machine_name%_product_display content'] = array(
    'name' => 'delete any jwd_%machine_name%_product_display content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own jwd_%machine_name%_product_display content.
  $permissions['delete own jwd_%machine_name%_product_display content'] = array(
    'name' => 'delete own jwd_%machine_name%_product_display content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any jwd_%machine_name%_product_display content.
  $permissions['edit any jwd_%machine_name%_product_display content'] = array(
    'name' => 'edit any jwd_%machine_name%_product_display content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own jwd_%machine_name%_product_display content.
  $permissions['edit own jwd_%machine_name%_product_display content'] = array(
    'name' => 'edit own jwd_%machine_name%_product_display content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: search jwd_%machine_name%_product_display content.
  $permissions['search jwd_%machine_name%_product_display content'] = array(
    'name' => 'search jwd_%machine_name%_product_display content',
    'roles' => array(
      0 => '%name%',
      1 => 'Redaktion',
      2 => 'Redaktion Bestellungen',
      3 => 'Redaktion Hilfe',
      4 => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: view any commerce_product entity of bundle jwd_%machine_name%_product.
  $permissions['view any commerce_product entity of bundle jwd_%machine_name%_product'] = array(
    'name' => 'view any commerce_product entity of bundle jwd_%machine_name%_product',
    'roles' => array(
      0 => '%name%',
      1 => 'Redaktion',
      2 => 'Redaktion Bestellungen',
      3 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: view own commerce_product entities of bundle jwd_%machine_name%_product.
  $permissions['view own commerce_product entities of bundle jwd_%machine_name%_product'] = array(
    'name' => 'view own commerce_product entities of bundle jwd_%machine_name%_product',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  return $permissions;
}
