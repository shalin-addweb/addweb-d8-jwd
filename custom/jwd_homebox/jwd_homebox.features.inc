<?php
/**
 * @file
 * jwd_homebox.features.inc
 */

/**
 * Implements hook_homebox().
 */
function jwd_homebox_homebox() {
  $homeboxes = array();

  $homeboxes['jwd_homebox'] = array (
    'regions' => 3,
    'cache' => 0,
    'color' => 0,
    'colors' => 
    array (
    ),
    'blocks' => 
    array (
      'book_navigation' => 
      array (
        'module' => 'book',
        'delta' => 'navigation',
        'region' => 2,
        'movable' => 0,
        'status' => 1,
        'open' => 1,
        'closable' => 0,
        'title' => 'Wiki',
        'weight' => -30,
      ),
      'jwd_workflow_jwd_workflow_various' => 
      array (
        'module' => 'jwd_workflow',
        'delta' => 'jwd_workflow_various',
        'region' => 2,
        'movable' => 0,
        'status' => 1,
        'open' => 1,
        'closable' => 0,
        'title' => '',
        'weight' => -29,
      ),
      'jwd_workflow_jwd_workflow_products' => 
      array (
        'module' => 'jwd_workflow',
        'delta' => 'jwd_workflow_products',
        'region' => 3,
        'movable' => 0,
        'status' => 1,
        'open' => 1,
        'closable' => 0,
        'title' => '',
        'weight' => -29,
      ),
      'views_jwd_latest_orders-block_1' => 
      array (
        'module' => 'views',
        'delta' => 'jwd_latest_orders-block_1',
        'region' => 1,
        'movable' => 0,
        'status' => 1,
        'open' => 1,
        'closable' => 0,
        'title' => 'Bestellungen',
        'weight' => -27,
      ),
      'jwd_workflow_jwd_workflow_content' => 
      array (
        'module' => 'jwd_workflow',
        'delta' => 'jwd_workflow_content',
        'region' => 2,
        'movable' => 0,
        'status' => 1,
        'open' => 1,
        'closable' => 0,
        'title' => '',
        'weight' => -27,
      ),
      'jwd_workflow_jwd_workflow_header' => 
      array (
        'module' => 'jwd_workflow',
        'delta' => 'jwd_workflow_header',
        'region' => 2,
        'movable' => 0,
        'status' => 1,
        'open' => 1,
        'closable' => 0,
        'title' => '',
        'weight' => -26,
      ),
      'views_jwd_galleries-block' => 
      array (
        'module' => 'views',
        'delta' => 'jwd_galleries-block',
        'region' => 2,
        'movable' => 0,
        'status' => 1,
        'open' => 1,
        'closable' => 0,
        'title' => 'Bildergalerien',
        'weight' => -25,
      ),
      'views_jwd_products-block' => 
      array (
        'module' => 'views',
        'delta' => 'jwd_products-block',
        'region' => 3,
        'movable' => 0,
        'status' => 1,
        'open' => 1,
        'closable' => 0,
        'title' => 'Produkte',
        'weight' => -30,
      ),
    ),
    'widths' => 
    array (
    ),
    'title' => 'Homebox',
    'path' => 'admin/homebox',
    'menu' => 0,
    'enabled' => 1,
    'auto_save' => 0,
    'full' => 1,
    'roles' => 
    array (
      0 => 'administrator',
      1 => 'Redaktion',
      2 => 'Redaktion Bestellungen',
    ),
  );


  return $homeboxes;
}
