<?php
/**
 * @file
 * jwd_layouts.ds_extras.inc
 */

/**
 * Implements hook_ds_vd_info().
 */
function jwd_layouts_ds_vd_info() {
  $export = array();

  $ds_vd = new stdClass();
  $ds_vd->api_version = 1;
  $ds_vd->vd = 'jwd_blog-page';
  $ds_vd->label = 'Jwd_blog: Seite - letzte Artikel (Views template)';
  $export['jwd_blog-page'] = $ds_vd;

  return $export;
}
