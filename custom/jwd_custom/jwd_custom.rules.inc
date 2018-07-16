<?php
/*
 * Implementation of hook_rules_action_info()
 */
function jwd_custom_rules_action_info() {
    $actions = array();

    $actions['jwd_custom_add_ga_order'] = array(
        'label' => t('Add google analytics code to track an order to the page. Only add directly after order was finished.'),
        'group' => t('JWD Custom'),
        'callbacks' => array(
            'execute' => 'jwd_custom_rules_add_ga_order',
        ),
    );

    return $actions;
}

function jwd_custom_rules_add_ga_order()
{
  if(strpos($_SERVER['SERVER_NAME'],'jwdberlin.de')) {
    $_SESSION['jwd_ga_order_added'] = TRUE;

    // Mark this page as being uncacheable.
    drupal_page_is_cacheable(FALSE);
    //drupal_set_message("<script type='text/javascript'>var _gaq = _gaq || []; _gaq.push(['_trackPageview', '/formular/anfrage.html']);</script>");
  }
}