<?php
function jwd_user_registration_rules_event_info() {
  return array(
    'jwd_user_registration_validated' => array(
      'label' => t("When a user account was validated."),
      'group' => 'JWD',
      'variables' => array(
        'account' => array(
          'type' => 'user',
          'label' => t("The validated user's account"),
        ),
      ),
      'group' => t('JWD'),
    ),
  );
}
