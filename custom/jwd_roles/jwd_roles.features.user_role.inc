<?php
/**
 * @file
 * jwd_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function jwd_roles_user_default_roles() {
  $roles = array();

  // Exported role: Bestandskunde.
  $roles['Bestandskunde'] = array(
    'name' => 'Bestandskunde',
    'weight' => '7',
  );

  // Exported role: Gesobau.
  $roles['Gesobau'] = array(
    'name' => 'Gesobau',
    'weight' => '8',
  );

  // Exported role: Nichtauthentifizierter Benutzer.
  $roles['Nichtauthentifizierter Benutzer'] = array(
    'name' => 'Nichtauthentifizierter Benutzer',
    'weight' => '1',
  );

  // Exported role: Redaktion.
  $roles['Redaktion'] = array(
    'name' => 'Redaktion',
    'weight' => '4',
  );

  // Exported role: Redaktion Bestellungen.
  $roles['Redaktion Bestellungen'] = array(
    'name' => 'Redaktion Bestellungen',
    'weight' => '5',
  );

  // Exported role: Redaktion Hilfe.
  $roles['Redaktion Hilfe'] = array(
    'name' => 'Redaktion Hilfe',
    'weight' => '6',
  );

  return $roles;
}
