<?php
/**
 * @file
 * jwd_bmw_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function jwd_bmw_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: create commerce_product entities of bundle jwd_bmw_product.
  $permissions['create commerce_product entities of bundle jwd_bmw_product'] = array(
    'name' => 'create commerce_product entities of bundle jwd_bmw_product',
    'roles' => array(
      0 => 'Redaktion',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: create jwd_bmw_product_display content.
  $permissions['create jwd_bmw_product_display content'] = array(
    'name' => 'create jwd_bmw_product_display content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any jwd_bmw_product_display content.
  $permissions['delete any jwd_bmw_product_display content'] = array(
    'name' => 'delete any jwd_bmw_product_display content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own jwd_bmw_product_display content.
  $permissions['delete own jwd_bmw_product_display content'] = array(
    'name' => 'delete own jwd_bmw_product_display content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 12.
  $permissions['delete terms in 12'] = array(
    'name' => 'delete terms in 12',
    'roles' => array(
      0 => 'Redaktion',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit any commerce_product entity of bundle jwd_bmw_product.
  $permissions['edit any commerce_product entity of bundle jwd_bmw_product'] = array(
    'name' => 'edit any commerce_product entity of bundle jwd_bmw_product',
    'roles' => array(
      0 => 'Redaktion',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: edit any jwd_bmw_product_display content.
  $permissions['edit any jwd_bmw_product_display content'] = array(
    'name' => 'edit any jwd_bmw_product_display content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own commerce_product entities of bundle jwd_bmw_product.
  $permissions['edit own commerce_product entities of bundle jwd_bmw_product'] = array(
    'name' => 'edit own commerce_product entities of bundle jwd_bmw_product',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: edit own jwd_bmw_product_display content.
  $permissions['edit own jwd_bmw_product_display content'] = array(
    'name' => 'edit own jwd_bmw_product_display content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 12.
  $permissions['edit terms in 12'] = array(
    'name' => 'edit terms in 12',
    'roles' => array(
      0 => 'Redaktion',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: search jwd_bmw_product_display content.
  $permissions['search jwd_bmw_product_display content'] = array(
    'name' => 'search jwd_bmw_product_display content',
    'roles' => array(
      0 => 'BMW',
      1 => 'Redaktion',
      2 => 'Redaktion Bestellungen',
      3 => 'Redaktion Hilfe',
      4 => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: view any commerce_product entity of bundle jwd_bmw_product.
  $permissions['view any commerce_product entity of bundle jwd_bmw_product'] = array(
    'name' => 'view any commerce_product entity of bundle jwd_bmw_product',
    'roles' => array(
      0 => 'BMW',
      1 => 'Redaktion',
      2 => 'Redaktion Bestellungen',
      3 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: view own commerce_product entities of bundle jwd_bmw_product.
  $permissions['view own commerce_product entities of bundle jwd_bmw_product'] = array(
    'name' => 'view own commerce_product entities of bundle jwd_bmw_product',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  return $permissions;
}
