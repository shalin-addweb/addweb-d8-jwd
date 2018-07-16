<?php
/**
 * @file
 * jwd_eu_cookie_compliance.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function jwd_eu_cookie_compliance_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_de';
  $strongarm->value = array(
    'popup_enabled' => 1,
    'popup_clicking_confirmation' => 1,
    'popup_position' => 0,
    'popup_agree_button_message' => 'OK',
    'popup_disagree_button_message' => 'Mehr Informationen',
    'popup_info' => array(
      'value' => 'Cookies erleichtern uns die Bereitstellung einiger Dienste. Mit der Nutzung unserer Dienste erklären Sie sich damit einverstanden, dass wir Cookies verwenden.',
      'format' => 'markdown',
    ),
    'popup_agreed_enabled' => 1,
    'popup_hide_agreed' => 0,
    'popup_find_more_button_message' => 'Mehr Informationen',
    'popup_hide_button_message' => 'Ausblenden',
    'popup_agreed' => array(
      'value' => 'Vielen Dank für Ihre Zustimmung.',
      'format' => 'markdown',
    ),
    'popup_link' => 'cookies',
    'popup_link_new_window' => 1,
    'popup_height' => '',
    'popup_width' => '100%',
    'popup_delay' => '1',
    'popup_bg_hex' => '0779BF',
    'popup_text_hex' => 'ffffff',
    'domains_option' => '1',
    'domains_list' => '',
    'exclude_paths' => 'admin/*',
  );
  $export['eu_cookie_compliance_de'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'eu_cookie_compliance_domain';
  $strongarm->value = '';
  $export['eu_cookie_compliance_domain'] = $strongarm;

  return $export;
}
