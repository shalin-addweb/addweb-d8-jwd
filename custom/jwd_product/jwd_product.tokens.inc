<?php
/*
* Implements hook_token_info().
*/
function jwd_product_token_info() {
  // Tokens for orders
  $order_type = array(
    'name' => t('JWD Orders'),
    'description' => t('Tokens related to individual JWD orders.'),
    'needs-data' => 'commerce-order',
  );

  $order = array();

  $order['jwd-order-rendered'] = array(
    'name' => t('Rendered order'),
    'description' => t('The order rendered as HTML.'),
  );
  $order['jwd-order-rendered-plain-text'] = array(
    'name' => t('Rendered order plain text'),
    'description' => t('The order rendered as plain text.'),
  );

  $order['jwd-order-number'] = array(
    'name' => t('Order number'),
    'description' => t('A automaticly generated order number.')
  );

  // Tokens for users
  $account_type = array(
    'name' => t('JWD Customers'),
    'description' => t('Tokens related to JWD customers.'),
    'needs-data' => 'user'
  );
  $account = array();

  $account['jwd-customer-number'] = array(
    'name' => t('Customer number'),
    'description' => t('A automaticly generated customer number.')
  );

  return array(
    'types' => array(
      'commerce-order' => $order_type,
      'user' => $account_type,
    ),
    'tokens' => array(
      'commerce-order' => $order,
      'user' => $account,
    ),
  );
}

/**
 * Implements hook_tokens().
 */
function jwd_product_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $url_options = array('absolute' => TRUE);

  if (isset($options['language'])) {
    $url_options['language'] = $options['language'];
    $language_code = $options['language']->language;
  }
  else {
    $language_code = NULL;
  }

  $sanitize = !empty($options['sanitize']);

  $replacements = array();

  if ($type == 'commerce-order' && !empty($data['commerce-order'])) {
    $order = $data['commerce-order'];
    $line_items = array();

    if (isset($order->commerce_line_items['und'])) {
      foreach($order->commerce_line_items['und'] as $_line_item) {
        $line_item = commerce_line_item_load($_line_item['line_item_id']);
        if (!empty($line_item)) {

          // load product
          if (isset($line_item->commerce_product) && is_array($line_item->commerce_product) && isset($line_item->commerce_product['und'])) {
            foreach($line_item->commerce_product['und'] as $_product) {
              $product = commerce_product_load($_product['product_id']);

              if (!empty($product)) {
                $line_item->commerce_product = $product;
              }
            }
          }
          $line_items[$_line_item['line_item_id']] = $line_item;
        }
      }
    }

    foreach ($tokens as $name => $original) {
      switch ($name) {
        // Simple key values on the line item.
        case 'jwd-order-rendered':
          $replacements[$original] = theme('jwd_product_commerce_order',array('commerce_order'=>$order,'commerce_line_items'=>$line_items));
          break;

        case 'jwd-order-rendered-plain-text':
          $replacements[$original] = theme('jwd_product_commerce_order_plain_text',array('commerce_order'=>$order,'commerce_line_items'=>$line_items));
          break;

        case 'jwd-order-number':
          $replacements[$original] = jwd_product_generate_order_number($order);
          break;
      }
    }
  } elseif ($type == 'user' && !empty($data['user'])) {
    $account = $data['user'];

    foreach ($tokens as $name => $original) {
      switch ($name) {
        case 'jwd-customer-number':
          $replacements[$original] = jwd_product_generate_customer_number($account);
          break;
      }
    }
  }

  return $replacements;
}