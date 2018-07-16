<?php
/**
 * @file
 * jwd_%machine_name%_pathauto.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jwd_%machine_name%_pathauto_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
