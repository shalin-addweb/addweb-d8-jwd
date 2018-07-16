<?php
/**
 * @file
 * jwd_product_type.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function jwd_product_type_commerce_product_default_types() {
  $items = array(
    'jwd_product' => array(
      'type' => 'jwd_product',
      'name' => 'Produkt',
      'description' => '',
      'help' => '',
      'revision' => '1',
    ),
    'jwd_product_bundle' => array(
      'type' => 'jwd_product_bundle',
      'name' => 'Produktpaket',
      'description' => '',
      'help' => '',
      'revision' => '1',
    ),
  );
  return $items;
}
