<?php
/**
 * @file
 * jwd_user.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function jwd_user_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autoassignrole_user_active';
  $strongarm->value = '1';
  $export['autoassignrole_user_active'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autoassignrole_user_description';
  $strongarm->value = 'Dann wählen Sie bitte hier das Unternehmen aus, für das Sie tätig sind.';
  $export['autoassignrole_user_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autoassignrole_user_fieldset_title';
  $strongarm->value = 'Sie sind bereits ein Bestandskunde?';
  $export['autoassignrole_user_fieldset_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autoassignrole_user_multiple';
  $strongarm->value = '0';
  $export['autoassignrole_user_multiple'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autoassignrole_user_required';
  $strongarm->value = '1';
  $export['autoassignrole_user_required'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autoassignrole_user_roles';
  $strongarm->value = array(
    31 => '31',
    3 => 0,
    4 => 0,
    5 => 0,
    11 => 0,
    21 => 0,
    41 => 0,
  );
  $export['autoassignrole_user_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autoassignrole_user_selection';
  $strongarm->value = '1';
  $export['autoassignrole_user_selection'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autoassignrole_user_sort';
  $strongarm->value = 'SORT_ASC';
  $export['autoassignrole_user_sort'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'autoassignrole_user_title';
  $strongarm->value = 'Unternehmen';
  $export['autoassignrole_user_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jwd_product_bestandskunden_roles';
  $strongarm->value = array(
    0 => 31,
  );
  $export['jwd_product_bestandskunden_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jwd_user_registration_authorized_roles';
  $strongarm->value = array(
    0 => 21,
    1 => 31,
  );
  $export['jwd_user_registration_authorized_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jwd_user_registration_unauthorized_role';
  $strongarm->value = '51';
  $export['jwd_user_registration_unauthorized_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jwd_user_registration_user_view_mode';
  $strongarm->value = 'full';
  $export['jwd_user_registration_user_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jwd_user_registration_validate_redirect';
  $strongarm->value = 'user-validate';
  $export['jwd_user_registration_validate_redirect'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jwd_user_registration_validate_timeout';
  $strongarm->value = '86400';
  $export['jwd_user_registration_validate_timeout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '3';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_cancel_method';
  $strongarm->value = 'user_cancel_block_unpublish';
  $export['user_cancel_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_default_timezone';
  $strongarm->value = '0';
  $export['user_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_email_verification';
  $strongarm->value = 1;
  $export['user_email_verification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_cancel_confirm_body';
  $strongarm->value = 'Sehr geehrte/r [user:field-user-title] [user:field-user-address:first-name] [user:field-user-address:last-name],

Ihr Benutzerkonto auf [site:name] soll gelöscht werden.

Bestätigen Sie den Löschvorgang, indem Sie den folgenden Link anklicken oder den gesamten Link kopieren und in die Adresszeile Ihres Browsers einfügen:

[user:cancel-url]

ACHTUNG: Das Löschen Ihres Benutzerkontos kann nicht rückgängig gemacht werden.

Der Link läuft nach einem Tag ab und kann dann nicht mehr verwendet werden.

Ihr Nutzername: [user:name]


Mit freundlichen Grüßen,

Ihr Team von [site:name]';
  $export['user_mail_cancel_confirm_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_cancel_confirm_subject';
  $strongarm->value = 'Löschen Ihres Benutzerkontos auf [site:name]';
  $export['user_mail_cancel_confirm_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_password_reset_body';
  $strongarm->value = 'Sehr geehrte/r [user:field-user-title] [user:field-user-address:first-name] [user:field-user-address:last-name],

Sie haben das Wiederherstellen Ihres Passworts auf [site:name] angefordert.

Sie können sich nun auf [site:name] einloggen, indem Sie den folgenden Link anklicken oder den gesamten Link kopieren und in die Adresszeile Ihres Browsers einfügen:

[user:one-time-login-url]

Dieser Link kann nur einmal verwendet werden und bringt Sie auf eine Seite, auf der Sie Ihr neues Passwort setzen müssen. Der Link läuft nach einem Tag ab und kann dann nicht mehr verwendet werden.

Ihr Nutzername: [user:name]


Mit freundlichen Grüßen,

Ihr Team von [site:name]';
  $export['user_mail_password_reset_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_password_reset_subject';
  $strongarm->value = 'Passwort-Wiederherstellung auf [site:name]';
  $export['user_mail_password_reset_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_admin_created_body';
  $strongarm->value = 'Sehr geehrte/r [user:field-user-title] [user:field-user-address:first-name] [user:field-user-address:last-name],

auf [site:name] wurde ein Benutzerkonto für Sie erstellt. Sie können sich nun auf [site:name] einloggen, indem Sie den folgenden Link anklicken oder den gesamten Link kopieren und in die Adresszeile Ihres Browsers einfügen:

[user:one-time-login-url]

Dieser Link kann nur einmal verwendet werden und bringt Sie auf eine Seite, auf der Sie Ihr Passwort setzen müssen. Der Link läuft nach einem Tag ab und kann dann nicht mehr verwendet werden.

Anschileßend können Sie sich jederzeit über den Link [site:login-url] mit Ihrem Nutzernamen und Passwort anmelden.

Ihr Nutzername: [user:name]


Mit freundlichen Grüßen,

Ihr Team von [site:name]';
  $export['user_mail_register_admin_created_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_admin_created_subject';
  $strongarm->value = 'Für Sie wurde ein neues Benutzerkonto auf [site:name] erstellt';
  $export['user_mail_register_admin_created_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_body';
  $strongarm->value = 'Sehr geehrte/r [user:field-user-title] [user:field-user-address:first-name] [user:field-user-address:last-name],

vielen Dank für die Registrierung bei [site:name]. Sie können sich nun auf [site:name] einloggen, indem Sie den folgenden Link anklicken oder den gesamten Link kopieren und in die Adresszeile Ihres Browsers einfügen:

[user:one-time-login-url]

Dieser Link kann nur einmal verwendet werden und bringt Sie auf eine Seite, auf der Sie Ihr Passwort setzen müssen. Der Link läuft nach einem Tag ab und kann dann nicht mehr verwendet werden.

Anschließend können Sie sich jederzeit über den Link [site:login-url] mit Ihrem Nutzernamen und Passwort anmelden.

Ihr Nutzername: [user:name]


Mit freundlichen Grüßen,

Ihr Team von [site:name]';
  $export['user_mail_register_no_approval_required_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_subject';
  $strongarm->value = 'Registrierung Ihres Benutzerkontos auf [site:name]';
  $export['user_mail_register_no_approval_required_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_pending_approval_body';
  $strongarm->value = 'Sehr geehrte/r [user:field-user-title] [user:field-user-address:first-name] [user:field-user-address:last-name],

Sie haben auf www.jwdberlin.de ein Benutzerkonto angefordert. Sollte dies korrekt sein und um vor Missbrauch zu schützen, bestätigen Sie bitte Ihre Anfrage durch einen klick auf folgenden Link:

[user:jwd-validate-url]

Sollten Sie kein Benutzerkonto angefordert haben, ignorien Sie einfach diese E-Mail und löschen Sie sie.
Nach erfolgreicher Bestätigung erfolgt eine Untersuchung Ihrer Daten, woraufhin Ihr Benutzerkonto von uns freigeschalten wird. Sie bekommen daraufhin eine E-Mail mit Ihrem Zugang zu [site:url].

Mit freundlichen Grüßen,

Ihr Team von [site:name]';
  $export['user_mail_register_pending_approval_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_pending_approval_subject';
  $strongarm->value = 'Anforderung eines Benutzerkontos auf [site:name]';
  $export['user_mail_register_pending_approval_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_body';
  $strongarm->value = 'Sehr geehrte/r [user:field-user-title] [user:field-user-address:first-name] [user:field-user-address:last-name],

Ihr Benutzerkonto auf [site:name] wurde aktiviert.

Sie können sich nun auf [site:name] einloggen, indem Sie den folgenden Link anklicken oder den gesamten Link kopieren und in die Adresszeile Ihres Browsers einfügen:

[user:one-time-login-url]

Dieser Link kann nur einmal verwendet werden und bringt Sie auf eine Seite, auf der Sie Ihr Passwort setzen müssen. Der Link läuft nach einem Tag ab und kann dann nicht mehr verwendet werden.

Anschließend können Sie sich jederzeit über den Link [site:login-url] mit Ihrem Nutzernamen und Passwort anmelden.

Ihr Nutzername: [user:name]


Mit freundlichen Grüßen,

Ihr Team von [site:name]';
  $export['user_mail_status_activated_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_notify';
  $strongarm->value = 1;
  $export['user_mail_status_activated_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_subject';
  $strongarm->value = 'Aktivierung Ihres Benutzerkontos auf [site:name]';
  $export['user_mail_status_activated_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_body';
  $strongarm->value = '[user:name],

Your account on [site:name] has been blocked.

--  [site:name] team';
  $export['user_mail_status_blocked_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_notify';
  $strongarm->value = 0;
  $export['user_mail_status_blocked_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_subject';
  $strongarm->value = 'Account details for [user:name] at [site:name] (blocked)';
  $export['user_mail_status_blocked_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_canceled_body';
  $strongarm->value = '[user:name],

Your account on [site:name] has been canceled.

--  [site:name] team';
  $export['user_mail_status_canceled_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_canceled_notify';
  $strongarm->value = 0;
  $export['user_mail_status_canceled_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_canceled_subject';
  $strongarm->value = 'Account details for [user:name] at [site:name] (canceled)';
  $export['user_mail_status_canceled_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = 0;
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_default';
  $strongarm->value = '';
  $export['user_picture_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '1024x1024';
  $export['user_picture_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '800';
  $export['user_picture_file_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_guidelines';
  $strongarm->value = '';
  $export['user_picture_guidelines'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_path';
  $strongarm->value = 'pictures';
  $export['user_picture_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_style';
  $strongarm->value = 'thumbnail';
  $export['user_picture_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = '2';
  $export['user_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_signatures';
  $strongarm->value = 0;
  $export['user_signatures'] = $strongarm;

  return $export;
}
