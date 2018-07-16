<?php
/**
 * @file
 * jwd_bmw_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function jwd_bmw_panels_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_products_panel_bmw_context';
  $handler->task = 'page';
  $handler->subtask = 'products';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Produkte BMW',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 52,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Produkte';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'product-cats-bmw';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'jwd_categories_returning-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'machine_name' => 'produktkategorien_bmw',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['product-cats-bmw'] = $pane;
    $display->panels['middle'][0] = 'product-cats-bmw';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;

  $export['page_products_panel_bmw_context'] = $handler;
  return $export;
}