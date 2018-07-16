<?php
/**
 * @file
 * jwd_user_registration_panels.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jwd_user_registration_panels_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
