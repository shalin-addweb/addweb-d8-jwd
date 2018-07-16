<?php
/**
 * Implements hook_token_info().
 */
function jwd_user_registration_token_info() {
  $info['tokens']['user']['jwd-validate-url'] = array(
    'name' => t('Validate URL'),
    'description' => t('The URL of the account validation page, provided by JWD user registration.'),
  );

  $info['tokens']['user']['jwd-admin-url'] = array(
    'name' => t('Administrative URL'),
    'description' => t('The URL of the account administration, provided by JWD user registration')
  );
  return $info;
}

/**
 * Implements hook_tokens().
 */
function jwd_user_registration_tokens($type, $tokens, array $data = array(), array $options = array()) {
  $replacements = array();

  $url_options = array('absolute' => TRUE);
  if (isset($options['language'])) {
    $url_options['language'] = $options['language'];
  }

  if ($type == 'user' && !empty($data['user'])) {
    $account = $data['user'];

    foreach ($tokens as $name => $original) {

      switch ($name) {
        // Validating URL.
        case 'jwd-validate-url':
          if (variable_get('user_register', USER_REGISTER_VISITORS_ADMINISTRATIVE_APPROVAL) == USER_REGISTER_VISITORS_ADMINISTRATIVE_APPROVAL) {
            $replacements[$original] = jwd_user_registration_eml_validate_url($account, $url_options);
          }

          break;

        case 'jwd-admin-url':
          $replacements[$original] = jwd_user_registration_eml_admin_url($account, $url_options);

          break;
      }
    }
  }

  return $replacements;
}