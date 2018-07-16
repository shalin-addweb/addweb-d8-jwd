<?php
/**
 * @file
 * jwd_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function jwd_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access admin theme.
  $permissions['access admin theme'] = array(
    'name' => 'access admin theme',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'Redaktion Hilfe',
      3 => 'administrator',
    ),
    'module' => 'admin_theme',
  );

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: access all webform results.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: access backup and migrate.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access backup files.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: access checkout.
  $permissions['access checkout'] = array(
    'name' => 'access checkout',
    'roles' => array(
      0 => 'Bestandskunde',
      1 => 'Redaktion',
      2 => 'Redaktion Bestellungen',
      3 => 'administrator',
      4 => 'anonymous user',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: access comments.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
      2 => 'anonymous user',
      3 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: access contextual links.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: access own webform results.
  $permissions['access own webform results'] = array(
    'name' => 'access own webform results',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: access own webform submissions.
  $permissions['access own webform submissions'] = array(
    'name' => 'access own webform submissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: access printer-friendly version.
  $permissions['access printer-friendly version'] = array(
    'name' => 'access printer-friendly version',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: access private fields.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: access rules debug.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access the block administration page.
  $permissions['access the block administration page'] = array(
    'name' => 'access the block administration page',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: add content to books.
  $permissions['add content to books'] = array(
    'name' => 'add content to books',
    'roles' => array(
      0 => 'Redaktion Hilfe',
      1 => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: add properties attributes.
  $permissions['add properties attributes'] = array(
    'name' => 'add properties attributes',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'properties',
  );

  // Exported permission: add properties categories.
  $permissions['add properties categories'] = array(
    'name' => 'add properties categories',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'properties',
  );

  // Exported permission: admin_classes.
  $permissions['admin_classes'] = array(
    'name' => 'admin_classes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: admin_display_suite.
  $permissions['admin_display_suite'] = array(
    'name' => 'admin_display_suite',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'ds',
  );

  // Exported permission: admin_fields.
  $permissions['admin_fields'] = array(
    'name' => 'admin_fields',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: admin_view_modes.
  $permissions['admin_view_modes'] = array(
    'name' => 'admin_view_modes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'ds_ui',
  );

  // Exported permission: administer @font-your-face.
  $permissions['administer @font-your-face'] = array(
    'name' => 'administer @font-your-face',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'fontyourface',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer advanced pane settings.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer autoassignrole.
  $permissions['administer autoassignrole'] = array(
    'name' => 'administer autoassignrole',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'autoassignrole',
  );

  // Exported permission: administer backup and migrate.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: administer block access settings.
  $permissions['administer block access settings'] = array(
    'name' => 'administer block access settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: administer book outlines.
  $permissions['administer book outlines'] = array(
    'name' => 'administer book outlines',
    'roles' => array(
      0 => 'Redaktion Hilfe',
      1 => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: administer checkout.
  $permissions['administer checkout'] = array(
    'name' => 'administer checkout',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_checkout',
  );

  // Exported permission: administer comments.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer commerce_customer_profile entities.
  $permissions['administer commerce_customer_profile entities'] = array(
    'name' => 'administer commerce_customer_profile entities',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: administer commerce_order entities.
  $permissions['administer commerce_order entities'] = array(
    'name' => 'administer commerce_order entities',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: administer commerce_product entities.
  $permissions['administer commerce_product entities'] = array(
    'name' => 'administer commerce_product entities',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer customer profile types.
  $permissions['administer customer profile types'] = array(
    'name' => 'administer customer profile types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: administer dependencies.
  $permissions['administer dependencies'] = array(
    'name' => 'administer dependencies',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'conditional_fields',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: administer field collections.
  $permissions['administer field collections'] = array(
    'name' => 'administer field collections',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_collection',
  );

  // Exported permission: administer field permissions.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: administer fieldgroups.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer homebox.
  $permissions['administer homebox'] = array(
    'name' => 'administer homebox',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'homebox',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: administer jwd special customers.
  $permissions['administer jwd special customers'] = array(
    'name' => 'administer jwd special customers',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'jwd_sc',
  );

  // Exported permission: administer jwd user registration.
  $permissions['administer jwd user registration'] = array(
    'name' => 'administer jwd user registration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'jwd_user_registration',
  );

  // Exported permission: administer jwd users.
  $permissions['administer jwd users'] = array(
    'name' => 'administer jwd users',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'jwd_user_registration',
  );

  // Exported permission: administer languages.
  $permissions['administer languages'] = array(
    'name' => 'administer languages',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: administer line item types.
  $permissions['administer line item types'] = array(
    'name' => 'administer line item types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_line_item',
  );

  // Exported permission: administer line items.
  $permissions['administer line items'] = array(
    'name' => 'administer line items',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
    ),
    'module' => 'commerce_line_item',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer menu_token.
  $permissions['administer menu_token'] = array(
    'name' => 'administer menu_token',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'menu_token',
  );

  // Exported permission: administer meta tags.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: administer mini panels.
  $permissions['administer mini panels'] = array(
    'name' => 'administer mini panels',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: administer module filter.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer page manager.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: administer pane access.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panels layouts.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panels styles.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer payment methods.
  $permissions['administer payment methods'] = array(
    'name' => 'administer payment methods',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: administer payments.
  $permissions['administer payments'] = array(
    'name' => 'administer payments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer product pricing.
  $permissions['administer product pricing'] = array(
    'name' => 'administer product pricing',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product_pricing_ui',
  );

  // Exported permission: administer product types.
  $permissions['administer product types'] = array(
    'name' => 'administer product types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: administer properties attributes.
  $permissions['administer properties attributes'] = array(
    'name' => 'administer properties attributes',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'properties',
  );

  // Exported permission: administer properties categories.
  $permissions['administer properties categories'] = array(
    'name' => 'administer properties categories',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'properties',
  );

  // Exported permission: administer redirects.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'redirect',
  );

  // Exported permission: administer rules.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search',
  );

  // Exported permission: administer shipping.
  $permissions['administer shipping'] = array(
    'name' => 'administer shipping',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_shipping',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer smtp module.
  $permissions['administer smtp module'] = array(
    'name' => 'administer smtp module',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'smtp',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer stylizer.
  $permissions['administer stylizer'] = array(
    'name' => 'administer stylizer',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'stylizer',
  );

  // Exported permission: administer system menus.
  $permissions['administer system menus'] = array(
    'name' => 'administer system menus',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'content_menu',
  );

  // Exported permission: administer taxes.
  $permissions['administer taxes'] = array(
    'name' => 'administer taxes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_tax_ui',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer taxonomy display.
  $permissions['administer taxonomy display'] = array(
    'name' => 'administer taxonomy display',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy_display',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: bypass rules access.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: change layouts in place editing.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      0 => 'Bestandskunde',
      1 => 'Redaktion',
      2 => 'Redaktion Bestellungen',
      3 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: configure all block body fields.
  $permissions['configure all block body fields'] = array(
    'name' => 'configure all block body fields',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all block descriptions.
  $permissions['configure all block descriptions'] = array(
    'name' => 'configure all block descriptions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all block titles.
  $permissions['configure all block titles'] = array(
    'name' => 'configure all block titles',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all blocks.
  $permissions['configure all blocks'] = array(
    'name' => 'configure all blocks',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all content type visibility settings.
  $permissions['configure all content type visibility settings'] = array(
    'name' => 'configure all content type visibility settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all language settings.
  $permissions['configure all language settings'] = array(
    'name' => 'configure all language settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all page visibility settings.
  $permissions['configure all page visibility settings'] = array(
    'name' => 'configure all page visibility settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all region settings.
  $permissions['configure all region settings'] = array(
    'name' => 'configure all region settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all role visibility settings.
  $permissions['configure all role visibility settings'] = array(
    'name' => 'configure all role visibility settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all user visibility settings.
  $permissions['configure all user visibility settings'] = array(
    'name' => 'configure all user visibility settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure all visibility settings.
  $permissions['configure all visibility settings'] = array(
    'name' => 'configure all visibility settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: configure order settings.
  $permissions['configure order settings'] = array(
    'name' => 'configure order settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: configure store.
  $permissions['configure store'] = array(
    'name' => 'configure store',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce',
  );

  // Exported permission: control node view.
  $permissions['control node view'] = array(
    'name' => 'control node view',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'panels_createnode',
  );

  // Exported permission: create article content.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create blocks.
  $permissions['create blocks'] = array(
    'name' => 'create blocks',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: create book content.
  $permissions['create book content'] = array(
    'name' => 'create book content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create commerce_customer_profile entities.
  $permissions['create commerce_customer_profile entities'] = array(
    'name' => 'create commerce_customer_profile entities',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: create commerce_customer_profile entities of bundle billing.
  $permissions['create commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'create commerce_customer_profile entities of bundle billing',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: create commerce_customer_profile entities of bundle shipping.
  $permissions['create commerce_customer_profile entities of bundle shipping'] = array(
    'name' => 'create commerce_customer_profile entities of bundle shipping',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: create commerce_order entities.
  $permissions['create commerce_order entities'] = array(
    'name' => 'create commerce_order entities',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: create commerce_order entities of bundle commerce_order.
  $permissions['create commerce_order entities of bundle commerce_order'] = array(
    'name' => 'create commerce_order entities of bundle commerce_order',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: create commerce_product entities.
  $permissions['create commerce_product entities'] = array(
    'name' => 'create commerce_product entities',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: create commerce_product entities of bundle jwd_gesobau_product.
  $permissions['create commerce_product entities of bundle jwd_gesobau_product'] = array(
    'name' => 'create commerce_product entities of bundle jwd_gesobau_product',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: create commerce_product entities of bundle jwd_product.
  $permissions['create commerce_product entities of bundle jwd_product'] = array(
    'name' => 'create commerce_product entities of bundle jwd_product',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: create commerce_product entities of bundle jwd_product_bundle.
  $permissions['create commerce_product entities of bundle jwd_product_bundle'] = array(
    'name' => 'create commerce_product entities of bundle jwd_product_bundle',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: create commerce_product entities of bundle product.
  $permissions['create commerce_product entities of bundle product'] = array(
    'name' => 'create commerce_product entities of bundle product',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: create field_customer_number.
  $permissions['create field_customer_number'] = array(
    'name' => 'create field_customer_number',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create field_order_number.
  $permissions['create field_order_number'] = array(
    'name' => 'create field_order_number',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: create jwd_affiliate content.
  $permissions['create jwd_affiliate content'] = array(
    'name' => 'create jwd_affiliate content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create jwd_blogpost content.
  $permissions['create jwd_blogpost content'] = array(
    'name' => 'create jwd_blogpost content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Hilfe',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create jwd_delivery_returning_customers content.
  $permissions['create jwd_delivery_returning_customers content'] = array(
    'name' => 'create jwd_delivery_returning_customers content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create jwd_faq content.
  $permissions['create jwd_faq content'] = array(
    'name' => 'create jwd_faq content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Hilfe',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create jwd_gallery content.
  $permissions['create jwd_gallery content'] = array(
    'name' => 'create jwd_gallery content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create jwd_gesobau_product_display content.
  $permissions['create jwd_gesobau_product_display content'] = array(
    'name' => 'create jwd_gesobau_product_display content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create jwd_kostenstelle content.
  $permissions['create jwd_kostenstelle content'] = array(
    'name' => 'create jwd_kostenstelle content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create jwd_product_bundle_display content.
  $permissions['create jwd_product_bundle_display content'] = array(
    'name' => 'create jwd_product_bundle_display content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create jwd_product_display content.
  $permissions['create jwd_product_display content'] = array(
    'name' => 'create jwd_product_display content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create jwd_reference content.
  $permissions['create jwd_reference content'] = array(
    'name' => 'create jwd_reference content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create mini panels.
  $permissions['create mini panels'] = array(
    'name' => 'create mini panels',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels_mini',
  );

  // Exported permission: create new books.
  $permissions['create new books'] = array(
    'name' => 'create new books',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'book',
  );

  // Exported permission: create page content.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create payments.
  $permissions['create payments'] = array(
    'name' => 'create payments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: create textblock content.
  $permissions['create textblock content'] = array(
    'name' => 'create textblock content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: create webform content.
  $permissions['create webform content'] = array(
    'name' => 'create webform content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete all blocks.
  $permissions['delete all blocks'] = array(
    'name' => 'delete all blocks',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: delete all webform submissions.
  $permissions['delete all webform submissions'] = array(
    'name' => 'delete all webform submissions',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: delete any article content.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any book content.
  $permissions['delete any book content'] = array(
    'name' => 'delete any book content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any jwd_affiliate content.
  $permissions['delete any jwd_affiliate content'] = array(
    'name' => 'delete any jwd_affiliate content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any jwd_blogpost content.
  $permissions['delete any jwd_blogpost content'] = array(
    'name' => 'delete any jwd_blogpost content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Hilfe',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any jwd_delivery_returning_customers content.
  $permissions['delete any jwd_delivery_returning_customers content'] = array(
    'name' => 'delete any jwd_delivery_returning_customers content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any jwd_faq content.
  $permissions['delete any jwd_faq content'] = array(
    'name' => 'delete any jwd_faq content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any jwd_gallery content.
  $permissions['delete any jwd_gallery content'] = array(
    'name' => 'delete any jwd_gallery content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any jwd_gesobau_product_display content.
  $permissions['delete any jwd_gesobau_product_display content'] = array(
    'name' => 'delete any jwd_gesobau_product_display content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any jwd_kostenstelle content.
  $permissions['delete any jwd_kostenstelle content'] = array(
    'name' => 'delete any jwd_kostenstelle content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any jwd_product_bundle_display content.
  $permissions['delete any jwd_product_bundle_display content'] = array(
    'name' => 'delete any jwd_product_bundle_display content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any jwd_product_display content.
  $permissions['delete any jwd_product_display content'] = array(
    'name' => 'delete any jwd_product_display content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any jwd_reference content.
  $permissions['delete any jwd_reference content'] = array(
    'name' => 'delete any jwd_reference content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any page content.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any textblock content.
  $permissions['delete any textblock content'] = array(
    'name' => 'delete any textblock content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any webform content.
  $permissions['delete any webform content'] = array(
    'name' => 'delete any webform content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete backup files.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: delete jwd users.
  $permissions['delete jwd users'] = array(
    'name' => 'delete jwd users',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'jwd_user_registration',
  );

  // Exported permission: delete own article content.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own book content.
  $permissions['delete own book content'] = array(
    'name' => 'delete own book content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own jwd_affiliate content.
  $permissions['delete own jwd_affiliate content'] = array(
    'name' => 'delete own jwd_affiliate content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own jwd_blogpost content.
  $permissions['delete own jwd_blogpost content'] = array(
    'name' => 'delete own jwd_blogpost content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Hilfe',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own jwd_delivery_returning_customers content.
  $permissions['delete own jwd_delivery_returning_customers content'] = array(
    'name' => 'delete own jwd_delivery_returning_customers content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own jwd_faq content.
  $permissions['delete own jwd_faq content'] = array(
    'name' => 'delete own jwd_faq content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own jwd_gallery content.
  $permissions['delete own jwd_gallery content'] = array(
    'name' => 'delete own jwd_gallery content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own jwd_gesobau_product_display content.
  $permissions['delete own jwd_gesobau_product_display content'] = array(
    'name' => 'delete own jwd_gesobau_product_display content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own jwd_kostenstelle content.
  $permissions['delete own jwd_kostenstelle content'] = array(
    'name' => 'delete own jwd_kostenstelle content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own jwd_product_bundle_display content.
  $permissions['delete own jwd_product_bundle_display content'] = array(
    'name' => 'delete own jwd_product_bundle_display content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own jwd_product_display content.
  $permissions['delete own jwd_product_display content'] = array(
    'name' => 'delete own jwd_product_display content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own jwd_reference content.
  $permissions['delete own jwd_reference content'] = array(
    'name' => 'delete own jwd_reference content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own page content.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own textblock content.
  $permissions['delete own textblock content'] = array(
    'name' => 'delete own textblock content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own webform content.
  $permissions['delete own webform content'] = array(
    'name' => 'delete own webform content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own webform submissions.
  $permissions['delete own webform submissions'] = array(
    'name' => 'delete own webform submissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: delete payments.
  $permissions['delete payments'] = array(
    'name' => 'delete payments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1.
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 11.
  $permissions['delete terms in 11'] = array(
    'name' => 'delete terms in 11',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 2.
  $permissions['delete terms in 2'] = array(
    'name' => 'delete terms in 2',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: delete terms in 3.
  $permissions['delete terms in 3'] = array(
    'name' => 'delete terms in 3',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: disable all blocks.
  $permissions['disable all blocks'] = array(
    'name' => 'disable all blocks',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: display drupal links.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
      2 => 'anonymous user',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: edit all webform submissions.
  $permissions['edit all webform submissions'] = array(
    'name' => 'edit all webform submissions',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: edit any article content.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any book content.
  $permissions['edit any book content'] = array(
    'name' => 'edit any book content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any commerce_customer_profile entity.
  $permissions['edit any commerce_customer_profile entity'] = array(
    'name' => 'edit any commerce_customer_profile entity',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: edit any commerce_customer_profile entity of bundle billing.
  $permissions['edit any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'edit any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: edit any commerce_customer_profile entity of bundle shipping.
  $permissions['edit any commerce_customer_profile entity of bundle shipping'] = array(
    'name' => 'edit any commerce_customer_profile entity of bundle shipping',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: edit any commerce_order entity.
  $permissions['edit any commerce_order entity'] = array(
    'name' => 'edit any commerce_order entity',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: edit any commerce_order entity of bundle commerce_order.
  $permissions['edit any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'edit any commerce_order entity of bundle commerce_order',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: edit any commerce_product entity.
  $permissions['edit any commerce_product entity'] = array(
    'name' => 'edit any commerce_product entity',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: edit any commerce_product entity of bundle jwd_gesobau_product.
  $permissions['edit any commerce_product entity of bundle jwd_gesobau_product'] = array(
    'name' => 'edit any commerce_product entity of bundle jwd_gesobau_product',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: edit any commerce_product entity of bundle jwd_product.
  $permissions['edit any commerce_product entity of bundle jwd_product'] = array(
    'name' => 'edit any commerce_product entity of bundle jwd_product',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: edit any commerce_product entity of bundle jwd_product_bundle.
  $permissions['edit any commerce_product entity of bundle jwd_product_bundle'] = array(
    'name' => 'edit any commerce_product entity of bundle jwd_product_bundle',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: edit any commerce_product entity of bundle product.
  $permissions['edit any commerce_product entity of bundle product'] = array(
    'name' => 'edit any commerce_product entity of bundle product',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: edit any jwd_affiliate content.
  $permissions['edit any jwd_affiliate content'] = array(
    'name' => 'edit any jwd_affiliate content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any jwd_blogpost content.
  $permissions['edit any jwd_blogpost content'] = array(
    'name' => 'edit any jwd_blogpost content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Hilfe',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any jwd_delivery_returning_customers content.
  $permissions['edit any jwd_delivery_returning_customers content'] = array(
    'name' => 'edit any jwd_delivery_returning_customers content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any jwd_faq content.
  $permissions['edit any jwd_faq content'] = array(
    'name' => 'edit any jwd_faq content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any jwd_gallery content.
  $permissions['edit any jwd_gallery content'] = array(
    'name' => 'edit any jwd_gallery content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any jwd_gesobau_product_display content.
  $permissions['edit any jwd_gesobau_product_display content'] = array(
    'name' => 'edit any jwd_gesobau_product_display content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any jwd_kostenstelle content.
  $permissions['edit any jwd_kostenstelle content'] = array(
    'name' => 'edit any jwd_kostenstelle content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any jwd_product_bundle_display content.
  $permissions['edit any jwd_product_bundle_display content'] = array(
    'name' => 'edit any jwd_product_bundle_display content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any jwd_product_display content.
  $permissions['edit any jwd_product_display content'] = array(
    'name' => 'edit any jwd_product_display content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any jwd_reference content.
  $permissions['edit any jwd_reference content'] = array(
    'name' => 'edit any jwd_reference content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any page content.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any textblock content.
  $permissions['edit any textblock content'] = array(
    'name' => 'edit any textblock content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any webform content.
  $permissions['edit any webform content'] = array(
    'name' => 'edit any webform content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit field_customer_number.
  $permissions['edit field_customer_number'] = array(
    'name' => 'edit field_customer_number',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit field_order_number.
  $permissions['edit field_order_number'] = array(
    'name' => 'edit field_order_number',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit meta tags.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: edit own article content.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own book content.
  $permissions['edit own book content'] = array(
    'name' => 'edit own book content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own comments.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: edit own commerce_customer_profile entities.
  $permissions['edit own commerce_customer_profile entities'] = array(
    'name' => 'edit own commerce_customer_profile entities',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: edit own commerce_customer_profile entities of bundle billing.
  $permissions['edit own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'edit own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: edit own commerce_customer_profile entities of bundle shipping.
  $permissions['edit own commerce_customer_profile entities of bundle shipping'] = array(
    'name' => 'edit own commerce_customer_profile entities of bundle shipping',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: edit own commerce_order entities.
  $permissions['edit own commerce_order entities'] = array(
    'name' => 'edit own commerce_order entities',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: edit own commerce_order entities of bundle commerce_order.
  $permissions['edit own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'edit own commerce_order entities of bundle commerce_order',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: edit own commerce_product entities.
  $permissions['edit own commerce_product entities'] = array(
    'name' => 'edit own commerce_product entities',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: edit own commerce_product entities of bundle jwd_gesobau_product.
  $permissions['edit own commerce_product entities of bundle jwd_gesobau_product'] = array(
    'name' => 'edit own commerce_product entities of bundle jwd_gesobau_product',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: edit own commerce_product entities of bundle jwd_product.
  $permissions['edit own commerce_product entities of bundle jwd_product'] = array(
    'name' => 'edit own commerce_product entities of bundle jwd_product',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: edit own commerce_product entities of bundle jwd_product_bundle.
  $permissions['edit own commerce_product entities of bundle jwd_product_bundle'] = array(
    'name' => 'edit own commerce_product entities of bundle jwd_product_bundle',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: edit own commerce_product entities of bundle product.
  $permissions['edit own commerce_product entities of bundle product'] = array(
    'name' => 'edit own commerce_product entities of bundle product',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: edit own field_customer_number.
  $permissions['edit own field_customer_number'] = array(
    'name' => 'edit own field_customer_number',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own field_order_number.
  $permissions['edit own field_order_number'] = array(
    'name' => 'edit own field_order_number',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: edit own jwd_affiliate content.
  $permissions['edit own jwd_affiliate content'] = array(
    'name' => 'edit own jwd_affiliate content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own jwd_blogpost content.
  $permissions['edit own jwd_blogpost content'] = array(
    'name' => 'edit own jwd_blogpost content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Hilfe',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own jwd_delivery_returning_customers content.
  $permissions['edit own jwd_delivery_returning_customers content'] = array(
    'name' => 'edit own jwd_delivery_returning_customers content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own jwd_faq content.
  $permissions['edit own jwd_faq content'] = array(
    'name' => 'edit own jwd_faq content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own jwd_gallery content.
  $permissions['edit own jwd_gallery content'] = array(
    'name' => 'edit own jwd_gallery content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own jwd_gesobau_product_display content.
  $permissions['edit own jwd_gesobau_product_display content'] = array(
    'name' => 'edit own jwd_gesobau_product_display content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own jwd_kostenstelle content.
  $permissions['edit own jwd_kostenstelle content'] = array(
    'name' => 'edit own jwd_kostenstelle content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own jwd_product_bundle_display content.
  $permissions['edit own jwd_product_bundle_display content'] = array(
    'name' => 'edit own jwd_product_bundle_display content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own jwd_product_display content.
  $permissions['edit own jwd_product_display content'] = array(
    'name' => 'edit own jwd_product_display content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own jwd_reference content.
  $permissions['edit own jwd_reference content'] = array(
    'name' => 'edit own jwd_reference content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own page content.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own textblock content.
  $permissions['edit own textblock content'] = array(
    'name' => 'edit own textblock content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own webform content.
  $permissions['edit own webform content'] = array(
    'name' => 'edit own webform content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own webform submissions.
  $permissions['edit own webform submissions'] = array(
    'name' => 'edit own webform submissions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'webform',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 11.
  $permissions['edit terms in 11'] = array(
    'name' => 'edit terms in 11',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 2.
  $permissions['edit terms in 2'] = array(
    'name' => 'edit terms in 2',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: edit terms in 3.
  $permissions['edit terms in 3'] = array(
    'name' => 'edit terms in 3',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: enable all blocks.
  $permissions['enable all blocks'] = array(
    'name' => 'enable all blocks',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: flush caches.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: grant content access.
  $permissions['grant content access'] = array(
    'name' => 'grant content access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'content_access',
  );

  // Exported permission: grant own content access.
  $permissions['grant own content access'] = array(
    'name' => 'grant own content access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'content_access',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: move all blocks.
  $permissions['move all blocks'] = array(
    'name' => 'move all blocks',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: notify of path changes.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: perform backup.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: post comments.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
      2 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: restore from backup.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'backup_migrate',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: search all content.
  $permissions['search all content'] = array(
    'name' => 'search all content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: search article content.
  $permissions['search article content'] = array(
    'name' => 'search article content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: search book content.
  $permissions['search book content'] = array(
    'name' => 'search book content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
      3 => 'anonymous user',
      4 => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: search jwd_affiliate content.
  $permissions['search jwd_affiliate content'] = array(
    'name' => 'search jwd_affiliate content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: search jwd_blogpost content.
  $permissions['search jwd_blogpost content'] = array(
    'name' => 'search jwd_blogpost content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Hilfe',
      2 => 'administrator',
      3 => 'anonymous user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: search jwd_delivery_returning_customers content.
  $permissions['search jwd_delivery_returning_customers content'] = array(
    'name' => 'search jwd_delivery_returning_customers content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: search jwd_faq content.
  $permissions['search jwd_faq content'] = array(
    'name' => 'search jwd_faq content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: search jwd_gallery content.
  $permissions['search jwd_gallery content'] = array(
    'name' => 'search jwd_gallery content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: search jwd_gesobau_product_display content.
  $permissions['search jwd_gesobau_product_display content'] = array(
    'name' => 'search jwd_gesobau_product_display content',
    'roles' => array(
      0 => 'Gesobau',
      1 => 'Redaktion',
      2 => 'Redaktion Bestellungen',
      3 => 'Redaktion Hilfe',
      4 => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: search jwd_kostenstelle content.
  $permissions['search jwd_kostenstelle content'] = array(
    'name' => 'search jwd_kostenstelle content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: search jwd_product_bundle_display content.
  $permissions['search jwd_product_bundle_display content'] = array(
    'name' => 'search jwd_product_bundle_display content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'Redaktion Hilfe',
      3 => 'administrator',
      4 => 'anonymous user',
      5 => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: search jwd_product_display content.
  $permissions['search jwd_product_display content'] = array(
    'name' => 'search jwd_product_display content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'Redaktion Hilfe',
      3 => 'administrator',
      4 => 'anonymous user',
      5 => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: search jwd_reference content.
  $permissions['search jwd_reference content'] = array(
    'name' => 'search jwd_reference content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'Redaktion Hilfe',
      3 => 'administrator',
      4 => 'anonymous user',
      5 => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: search page content.
  $permissions['search page content'] = array(
    'name' => 'search page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: search textblock content.
  $permissions['search textblock content'] = array(
    'name' => 'search textblock content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'Redaktion Hilfe',
      3 => 'administrator',
      4 => 'anonymous user',
      5 => 'authenticated user',
    ),
    'module' => 'search_config',
  );

  // Exported permission: search webform content.
  $permissions['search webform content'] = array(
    'name' => 'search webform content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'search_config',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: skip comment approval.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
      2 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: translate interface.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'locale',
  );

  // Exported permission: update payments.
  $permissions['update payments'] = array(
    'name' => 'update payments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
      3 => 'anonymous user',
      4 => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: use bulk exporter.
  $permissions['use bulk exporter'] = array(
    'name' => 'use bulk exporter',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'bulk_export',
  );

  // Exported permission: use page manager.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: use panels caching features.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels dashboard.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels in place editing.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels locks.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use text format ds_code.
  $permissions['use text format ds_code'] = array(
    'name' => 'use text format ds_code',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format markdown.
  $permissions['use text format markdown'] = array(
    'name' => 'use text format markdown',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
      2 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: view advanced help index.
  $permissions['view advanced help index'] = array(
    'name' => 'view advanced help index',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view advanced help popup.
  $permissions['view advanced help popup'] = array(
    'name' => 'view advanced help popup',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view advanced help topic.
  $permissions['view advanced help topic'] = array(
    'name' => 'view advanced help topic',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'advanced_help',
  );

  // Exported permission: view all blocks.
  $permissions['view all blocks'] = array(
    'name' => 'view all blocks',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'block_access',
  );

  // Exported permission: view any commerce_customer_profile entity.
  $permissions['view any commerce_customer_profile entity'] = array(
    'name' => 'view any commerce_customer_profile entity',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: view any commerce_customer_profile entity of bundle billing.
  $permissions['view any commerce_customer_profile entity of bundle billing'] = array(
    'name' => 'view any commerce_customer_profile entity of bundle billing',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: view any commerce_customer_profile entity of bundle shipping.
  $permissions['view any commerce_customer_profile entity of bundle shipping'] = array(
    'name' => 'view any commerce_customer_profile entity of bundle shipping',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: view any commerce_order entity.
  $permissions['view any commerce_order entity'] = array(
    'name' => 'view any commerce_order entity',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: view any commerce_order entity of bundle commerce_order.
  $permissions['view any commerce_order entity of bundle commerce_order'] = array(
    'name' => 'view any commerce_order entity of bundle commerce_order',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: view any commerce_product entity.
  $permissions['view any commerce_product entity'] = array(
    'name' => 'view any commerce_product entity',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: view any commerce_product entity of bundle jwd_gesobau_product.
  $permissions['view any commerce_product entity of bundle jwd_gesobau_product'] = array(
    'name' => 'view any commerce_product entity of bundle jwd_gesobau_product',
    'roles' => array(
      0 => 'Gesobau',
      1 => 'Redaktion',
      2 => 'Redaktion Bestellungen',
      3 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: view any commerce_product entity of bundle jwd_product.
  $permissions['view any commerce_product entity of bundle jwd_product'] = array(
    'name' => 'view any commerce_product entity of bundle jwd_product',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: view any commerce_product entity of bundle jwd_product_bundle.
  $permissions['view any commerce_product entity of bundle jwd_product_bundle'] = array(
    'name' => 'view any commerce_product entity of bundle jwd_product_bundle',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: view any commerce_product entity of bundle product.
  $permissions['view any commerce_product entity of bundle product'] = array(
    'name' => 'view any commerce_product entity of bundle product',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: view field_customer_number.
  $permissions['view field_customer_number'] = array(
    'name' => 'view field_customer_number',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view field_order_number.
  $permissions['view field_order_number'] = array(
    'name' => 'view field_order_number',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own commerce_customer_profile entities.
  $permissions['view own commerce_customer_profile entities'] = array(
    'name' => 'view own commerce_customer_profile entities',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: view own commerce_customer_profile entities of bundle billing.
  $permissions['view own commerce_customer_profile entities of bundle billing'] = array(
    'name' => 'view own commerce_customer_profile entities of bundle billing',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: view own commerce_customer_profile entities of bundle shipping.
  $permissions['view own commerce_customer_profile entities of bundle shipping'] = array(
    'name' => 'view own commerce_customer_profile entities of bundle shipping',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_customer',
  );

  // Exported permission: view own commerce_order entities.
  $permissions['view own commerce_order entities'] = array(
    'name' => 'view own commerce_order entities',
    'roles' => array(
      0 => 'Bestandskunde',
      1 => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: view own commerce_order entities of bundle commerce_order.
  $permissions['view own commerce_order entities of bundle commerce_order'] = array(
    'name' => 'view own commerce_order entities of bundle commerce_order',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  // Exported permission: view own commerce_product entities.
  $permissions['view own commerce_product entities'] = array(
    'name' => 'view own commerce_product entities',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: view own commerce_product entities of bundle jwd_gesobau_product.
  $permissions['view own commerce_product entities of bundle jwd_gesobau_product'] = array(
    'name' => 'view own commerce_product entities of bundle jwd_gesobau_product',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: view own commerce_product entities of bundle jwd_product.
  $permissions['view own commerce_product entities of bundle jwd_product'] = array(
    'name' => 'view own commerce_product entities of bundle jwd_product',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: view own commerce_product entities of bundle jwd_product_bundle.
  $permissions['view own commerce_product entities of bundle jwd_product_bundle'] = array(
    'name' => 'view own commerce_product entities of bundle jwd_product_bundle',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: view own commerce_product entities of bundle product.
  $permissions['view own commerce_product entities of bundle product'] = array(
    'name' => 'view own commerce_product entities of bundle product',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: view own field_customer_number.
  $permissions['view own field_customer_number'] = array(
    'name' => 'view own field_customer_number',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own field_order_number.
  $permissions['view own field_order_number'] = array(
    'name' => 'view own field_order_number',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: view pane admin links.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: view payments.
  $permissions['view payments'] = array(
    'name' => 'view payments',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
    ),
    'module' => 'commerce_payment',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      0 => 'Redaktion',
      1 => 'Redaktion Bestellungen',
      2 => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
