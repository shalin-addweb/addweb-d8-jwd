<?php
/*
 * Implementation of hook_rules_action_info()
 */
function jwd_product_rules_action_info() {
    $actions = array();

    $actions['jwd_product_create_customer_profile'] = array(
        'label' => t('Create a customer profile for order'),
        'parameter' => array(
            'commerce_order' => array(
                'type' => 'commerce_order',
                'label' => t('Order'),
            )
        ),
        'group' => t('JWD Product'),
        'callbacks' => array(
            'execute' => 'jwd_product_rules_create_customer_profile',
        ),
    );

    $actions['jwd_product_set_min_line_item_quantity'] = array(
      'label' => t('Set the quantity of a line item to the minimum allowed quantity of the product.'),
      'parameter' => array(
        'commerce_line_item' => array(
          'type' => 'commerce_line_item',
          'label' => t('Line item')
        ),
        'field_name' => array(
          'type' => 'text',
          'label' => t('Name of the product field containing the minimum quantity.')
        )
      ),
      'group' => t('JWD Product'),
      'callbacks' => array(
        'execute' => 'jwd_product_rules_set_min_line_item_quantity',
      ),
    );
    /*
    $actions['jwd_product_delete_product_displays'] = array(
        'label'=> t('Delete all product displays'),
        'parameter' => array(
            'commerce_product' => array(
                'type' => 'commerce_product',
                'label' => t('Product')
            )
        ),
        'group' => t('JWD Product'),
        'callbacks' => array(
            'execute' => 'jwd_product_rules_delete_product_displays',
        ),
    );
    */

    return $actions;
}

function jwd_product_rules_condition_info()
{
  $conditions = array();

  $conditions['jwd_product_line_item_below_min_quantity'] = array(
    'label' => t('Check wether the quantity the line item is below the products minimum allowed quantity'),
    'parameter' => array(
      'commerce_line_item' => array(
        'type' => 'commerce_line_item',
        'label' => t('Line item'),
      ),
      'field_name' => array(
        'type' => 'text',
        'label' => t('Name of the product field containing the minimum quantity.')
      )
    ),
    'group' => t('JWD Product'),
    'callbacks' => array(
      'execute' => 'jwd_product_rules_line_item_below_min_quantity',
    )
  );

  return $conditions;
}

function jwd_product_rules_line_item_below_min_quantity($line_item,$field_name)
{
  if (isset($line_item->commerce_product) && !empty($line_item->commerce_product)) {

    if (is_array($line_item->commerce_product)) {
      $product = commerce_product_load($line_item->commerce_product['und'][0]['product_id']);
    } else {
      $product = $line_item->commerce_product;
    }

    if($product && isset($product->$field_name) && !empty($product->$field_name)) {
      $field = $product->$field_name;
      $min_quantity = floatval($field['und'][0]['value']);

      $quantity = floatval($line_item->quantity);

      if ($quantity > 0 && $quantity < $min_quantity) {
        return TRUE;
      }
    }
  }
  return FALSE;
}

function jwd_product_rules_set_min_line_item_quantity($line_item,$field_name)
{
  if (jwd_product_rules_line_item_below_min_quantity($line_item,$field_name)) {
    if (is_array($line_item->commerce_product)) {
      $product = commerce_product_load($line_item->commerce_product['und'][0]['product_id']);
    } else {
      $product = $line_item->commerce_product;
    }

    if($product && isset($product->$field_name) && !empty($product->$field_name)) {
      $field = $product->$field_name;
      $min_quantity = floatval($field['und'][0]['value']);

      $line_item->quantity = $min_quantity;
      @commerce_line_item_save($line_item);
    }
  }
}

function jwd_product_rules_create_customer_profile($order, $name)
{
    jwd_product_create_customer_profile($order,$name);
}

function jwd_product_rules_config_defaults_rebuild($configs)
{
    //$configs['commerce_checkout_order_convert']->action('jwd_product_create_customer_profile', array('commerce_order:select' => 'commerce-order'));
    //$configs['commerce_checkout_new_account']->action('jwd_product_create_customer_profile', array('commerce_order:select' => 'commerce-order'));
}