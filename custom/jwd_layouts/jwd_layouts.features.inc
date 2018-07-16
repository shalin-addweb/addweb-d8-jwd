<?php
/**
 * @file
 * jwd_layouts.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function jwd_layouts_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "ds_extras" && $api == "ds_extras") {
    return array("version" => "1");
  }
}
