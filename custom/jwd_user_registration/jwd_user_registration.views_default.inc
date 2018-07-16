<?php
 /**
  * Implements hook_views_default_views().
  */
function jwd_user_registration_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'jwd_users';
  $view->description = 'Administrative list of users for JWD editors';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'JWD Nutzer';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'JWD Nutzer';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mehr';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer jwd users';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Anwenden';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Zurücksetzen';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortieren nach';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Aufsteigend';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Absteigend';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elemente pro Seite';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« erste Seite';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorherige Seite';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'nächste Seite ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'letzte Seite »';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Feld: Benutzer: Adresse */
  $handler->display->display_options['fields']['field_user_address']['id'] = 'field_user_address';
  $handler->display->display_options['fields']['field_user_address']['table'] = 'field_data_field_user_address';
  $handler->display->display_options['fields']['field_user_address']['field'] = 'field_user_address';
  $handler->display->display_options['fields']['field_user_address']['label'] = '';
  $handler->display->display_options['fields']['field_user_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_address']['element_type'] = '0';
  $handler->display->display_options['fields']['field_user_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_address']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_user_address']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_user_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_user_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_user_address']['field_api_classes'] = TRUE;
  /* Feld: Benutzer: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'uid';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Feld: Benutzer: Kundennummer */
  $handler->display->display_options['fields']['field_customer_number']['id'] = 'field_customer_number';
  $handler->display->display_options['fields']['field_customer_number']['table'] = 'field_data_field_customer_number';
  $handler->display->display_options['fields']['field_customer_number']['field'] = 'field_customer_number';
  $handler->display->display_options['fields']['field_customer_number']['empty'] = '<a href="/admin/jwd-user-registration/users/[uid]/generate-customer-number">generieren</a>';
  /* Feld: Benutzer: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'admin/jwd-user-registration/users/[uid]';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Feld: Benutzer: E-Mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Feld: Benutzer: Aktiv */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'users';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Feld: Benutzer: Rollen */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Feld: Benutzer: Uid */
  $handler->display->display_options['fields']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['fields']['uid_1']['table'] = 'users';
  $handler->display->display_options['fields']['uid_1']['field'] = 'uid';
  $handler->display->display_options['fields']['uid_1']['label'] = '';
  $handler->display->display_options['fields']['uid_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['uid_1']['alter']['text'] = 'Bestellungen des Benutzers';
  $handler->display->display_options['fields']['uid_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['uid_1']['alter']['path'] = 'admin/commerce/user/[uid]/orders';
  $handler->display->display_options['fields']['uid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid_1']['link_to_user'] = FALSE;
  /* Sortierkriterien: Benutzer: Aktiv */
  $handler->display->display_options['sorts']['status']['id'] = 'status';
  $handler->display->display_options['sorts']['status']['table'] = 'users';
  $handler->display->display_options['sorts']['status']['field'] = 'status';
  $handler->display->display_options['sorts']['status']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['status']['expose']['label'] = 'Aktiv';
  /* Sortierkriterien: Benutzer: Kundennummer (field_customer_number) */
  $handler->display->display_options['sorts']['field_customer_number_value']['id'] = 'field_customer_number_value';
  $handler->display->display_options['sorts']['field_customer_number_value']['table'] = 'field_data_field_customer_number';
  $handler->display->display_options['sorts']['field_customer_number_value']['field'] = 'field_customer_number_value';
  $handler->display->display_options['sorts']['field_customer_number_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_customer_number_value']['expose']['label'] = 'Kundennummer';
  /* Filterkriterium: Benutzer: Rollen */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    21 => '21',
    31 => '31',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'admin/jwd-users';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'JWD Nutzer';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['jwd_users'] = array(
    t('Master'),
    t('JWD Nutzer'),
    t('mehr'),
    t('Anwenden'),
    t('Zurücksetzen'),
    t('Sortieren nach'),
    t('Aufsteigend'),
    t('Absteigend'),
    t('Elemente pro Seite'),
    t('- Alle -'),
    t('Offset'),
    t('« erste Seite'),
    t('‹ vorherige Seite'),
    t('nächste Seite ›'),
    t('letzte Seite »'),
    t('uid'),
    t('Kundennummer'),
    t('<a href="/admin/jwd-user-registration/users/[uid]/generate-customer-number">generieren</a>'),
    t('Name'),
    t('E-Mail'),
    t('Aktiv'),
    t('Rollen'),
    t('Bestellungen des Benutzers'),
    t('Page'),
  );

  $export['jwd_users'] = $view;

  return $export;
}