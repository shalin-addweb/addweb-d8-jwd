<?php
/**
 * Implements hook_default_rules_configuration().
 */
function jwd_product_default_rules_configuration() {
    $rules = array();

    $rule = '{ "jwd_product_automatic_checkout" : {
    "LABEL" : "Automatischer Checkout",
    "PLUGIN" : "reaction rule",
    "REQUIRES" : [ "rules", "commerce_checkout", "jwd_custom", "commerce_cart" ],
    "ON" : [ "commerce_cart_product_add" ],
    "IF" : [
      { "NOT user_has_role" : {
          "account" : [ "site:current-user" ],
          "roles" : { "value" : { "21" : "21" } }
        }
      }
    ],
    "DO" : [
      { "commerce_checkout_complete" : { "commerce_order" : [ "commerce-order" ] } },
      { "drupal_message" : {
          "message" : "Vielen Dank f\u00fcr Ihre Anfrage bei JWD Berlin.",
          "repeat" : 0
        }
      },
      { "jwd_custom_add_ga_order" : [] }
    ]
  }
}';
    $rules['jwd_product_automatic_checkout'] = rules_import($rule);

    $rule = rules_reaction_rule();
    $rule->label = t('Auto create product display');
    //$rule->requires('rules');
    //$rule->requires('entity');
    $rule->event('commerce_product_insert');
    $rule->action('entity_create', array(
        'type'=>'node',
        'param_type'=>'jwd_product_display',
        'param_title:select'=>'commerce-product:title',
        'param_author:select'=>'site:current-user',
        'entity_created:label' => t('Created entity'),
        'entity_created:var' => 'entity_created',
    ))
    ->action('data_set', array(
        'data:select' => 'entity-created:title',
        'value:select' => 'commerce-product:title',
    ))
    ->action('data_set', array(
        'data:select' => 'entity-created:field-product-reference',
        'value:select' => 'commerce-product',
    ))
    ->action('entity_save', array(
        'data:select' => 'entity-created',
        'immediate' => 1,
    ));
    $rule->active = TRUE;
    //$rule->tag('JWD');
    $rules['jwd_product_auto_create_product_display'] = $rule;

    return $rules;
}