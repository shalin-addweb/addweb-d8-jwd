<?php
/**
 * @file
 * jwd_customers_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function jwd_customers_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'product_category';
  $page->task = 'page';
  $page->admin_title = 'Produktkategorie';
  $page->admin_description = '';
  $page->path = 'produkte/kategorie';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_product_category_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'product_category';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Produktkategorie',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'plain';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'region' => NULL,
    ),
    'region' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ffc24eb3-bc8b-4e78-bad5-5a548b7ded54';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e82e1fcf-fc8a-4d32-a4d0-132f42eae598';
    $pane->panel = 'region';
    $pane->type = 'views_panes';
    $pane->subtype = 'jwd_products_returning-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e82e1fcf-fc8a-4d32-a4d0-132f42eae598';
    $display->content['new-e82e1fcf-fc8a-4d32-a4d0-132f42eae598'] = $pane;
    $display->panels['region'][0] = 'new-e82e1fcf-fc8a-4d32-a4d0-132f42eae598';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-e82e1fcf-fc8a-4d32-a4d0-132f42eae598';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['product_category'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'products';
  $page->task = 'page';
  $page->admin_title = 'Produkte';
  $page->admin_description = '';
  $page->path = 'produkte';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Produkte',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
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
  $display->uuid = '2f90de8b-ffe1-4bf2-8a49-9c01e4e9ef23';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b67845cf-ca6d-48c8-9491-cc21b20c0bcd';
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
    $pane->uuid = 'b67845cf-ca6d-48c8-9491-cc21b20c0bcd';
    $display->content['new-b67845cf-ca6d-48c8-9491-cc21b20c0bcd'] = $pane;
    $display->panels['middle'][0] = 'new-b67845cf-ca6d-48c8-9491-cc21b20c0bcd';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_products_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'products';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Produkte Gesobau',
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
              0 => 31,
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
  $display->uuid = '116b9e11-7a03-4c9e-9230-3256246a090a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7a157eef-485e-4a7f-b728-a122bbb70f6d';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'jwd_categories_returning-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'machine_name' => 'produktkategorien_gesobau',
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
    $pane->uuid = '7a157eef-485e-4a7f-b728-a122bbb70f6d';
    $display->content['new-7a157eef-485e-4a7f-b728-a122bbb70f6d'] = $pane;
    $display->panels['middle'][0] = 'new-7a157eef-485e-4a7f-b728-a122bbb70f6d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_products_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'products';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Produkte';
  $display->uuid = '8261acad-335e-420f-94e2-2d4063d5bd2a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a7429fb7-ed96-45a2-abec-6c91110e9478';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-jwd_custom-product_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a7429fb7-ed96-45a2-abec-6c91110e9478';
    $display->content['new-a7429fb7-ed96-45a2-abec-6c91110e9478'] = $pane;
    $display->panels['middle'][0] = 'new-a7429fb7-ed96-45a2-abec-6c91110e9478';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['products'] = $page;

  return $pages;

}
