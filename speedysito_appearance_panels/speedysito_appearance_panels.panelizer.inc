<?php
/**
 * @file
 * speedysito_appearance_panels.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function speedysito_appearance_panels_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'ipe';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'responsive';
  $display->layout_settings = array(
    'regions' => array(
      'header_a' => 'header_a',
      'header_b' => 'header_b',
      'header_c' => 'header_c',
      'subheader_a' => 'subheader_a',
      'subheader_b' => 'subheader_b',
      'subheader_c' => 'subheader_c',
      'navigation' => 'navigation',
      'title' => 'title',
      'body' => 'body',
      'sidebar_a' => 'sidebar_a',
      'sidebar_b' => 'sidebar_b',
      'sidebar_c' => 'sidebar_c',
      'footer_a' => 'footer_a',
      'footer_b' => 'footer_b',
      'footer_c' => 'footer_c',
    ),
    'overrides' => array(),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header_a' => NULL,
      'header_b' => NULL,
      'header_c' => NULL,
      'subheader_a' => NULL,
      'subheader_b' => NULL,
      'subheader_c' => NULL,
      'navigation' => NULL,
      'title' => NULL,
      'body' => NULL,
      'sidebar_a' => NULL,
      'sidebar_b' => NULL,
      'sidebar_c' => NULL,
      'footer_a' => NULL,
      'footer_b' => NULL,
      'footer_c' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '10468e43-c6c4-4bf0-8c94-a38467f076d9';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6301e46b-4bac-4b70-a544-65348d657eff';
    $pane->panel = 'header_a';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6301e46b-4bac-4b70-a544-65348d657eff';
    $display->content['new-6301e46b-4bac-4b70-a544-65348d657eff'] = $pane;
    $display->panels['header_a'][0] = 'new-6301e46b-4bac-4b70-a544-65348d657eff';
    $pane = new stdClass();
    $pane->pid = 'new-08624ce2-c454-44e4-87da-7dab1841ca4d';
    $pane->panel = 'header_a';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '08624ce2-c454-44e4-87da-7dab1841ca4d';
    $display->content['new-08624ce2-c454-44e4-87da-7dab1841ca4d'] = $pane;
    $display->panels['header_a'][1] = 'new-08624ce2-c454-44e4-87da-7dab1841ca4d';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = 'new-08624ce2-c454-44e4-87da-7dab1841ca4d';
  $panelizer->display = $display;
  $export['node:page:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '3748559a-419c-41c6-a515-b954991c0643';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7b39bf20-f413-40f8-9435-c5a3b7e68c61';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7b39bf20-f413-40f8-9435-c5a3b7e68c61';
    $display->content['new-7b39bf20-f413-40f8-9435-c5a3b7e68c61'] = $pane;
    $display->panels['center'][0] = 'new-7b39bf20-f413-40f8-9435-c5a3b7e68c61';
    $pane = new stdClass();
    $pane->pid = 'new-0bde98bb-1af6-4f48-9a1b-3623d0cf489b';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'default',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0bde98bb-1af6-4f48-9a1b-3623d0cf489b';
    $display->content['new-0bde98bb-1af6-4f48-9a1b-3623d0cf489b'] = $pane;
    $display->panels['center'][1] = 'new-0bde98bb-1af6-4f48-9a1b-3623d0cf489b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0bde98bb-1af6-4f48-9a1b-3623d0cf489b';
  $panelizer->display = $display;
  $export['node:page:default:default'] = $panelizer;

  return $export;
}
