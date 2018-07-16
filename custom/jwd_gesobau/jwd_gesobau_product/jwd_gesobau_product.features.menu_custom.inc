<?php
/**
 * @file
 * jwd_gesobau_product.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function jwd_gesobau_product_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-gesobau.
  $menus['menu-gesobau'] = array(
    'menu_name' => 'menu-gesobau',
    'title' => 'Gesobau',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Gesobau');


  return $menus;
}
