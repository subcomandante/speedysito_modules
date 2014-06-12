<?php
/**
 * @file
 * speedysito_appearance_panels.default_layout_region.inc
 */

/**
 * Implements hook_default_layout_region().
 */
function speedysito_appearance_panels_default_layout_region() {
  $export = array();

  $layout_region = new stdClass();
  $layout_region->disabled = FALSE; /* Edit this to true to make a default layout_region disabled initially */
  $layout_region->api_version = 1;
  $layout_region->name = 'content';
  $layout_region->admin_title = 'Content';
  $export['content'] = $layout_region;

  $layout_region = new stdClass();
  $layout_region->disabled = FALSE; /* Edit this to true to make a default layout_region disabled initially */
  $layout_region->api_version = 1;
  $layout_region->name = 'header';
  $layout_region->admin_title = 'Header';
  $export['header'] = $layout_region;

  $layout_region = new stdClass();
  $layout_region->disabled = FALSE; /* Edit this to true to make a default layout_region disabled initially */
  $layout_region->api_version = 1;
  $layout_region->name = 'header_bottom';
  $layout_region->admin_title = 'Header bottom';
  $export['header_bottom'] = $layout_region;

  $layout_region = new stdClass();
  $layout_region->disabled = FALSE; /* Edit this to true to make a default layout_region disabled initially */
  $layout_region->api_version = 1;
  $layout_region->name = 'header_top';
  $layout_region->admin_title = 'Header top';
  $export['header_top'] = $layout_region;

  $layout_region = new stdClass();
  $layout_region->disabled = FALSE; /* Edit this to true to make a default layout_region disabled initially */
  $layout_region->api_version = 1;
  $layout_region->name = 'preface';
  $layout_region->admin_title = 'Preface';
  $export['preface'] = $layout_region;

  $layout_region = new stdClass();
  $layout_region->disabled = FALSE; /* Edit this to true to make a default layout_region disabled initially */
  $layout_region->api_version = 1;
  $layout_region->name = 'sidebar_left';
  $layout_region->admin_title = 'Sidebar left';
  $export['sidebar_left'] = $layout_region;

  $layout_region = new stdClass();
  $layout_region->disabled = FALSE; /* Edit this to true to make a default layout_region disabled initially */
  $layout_region->api_version = 1;
  $layout_region->name = 'sidebar_right';
  $layout_region->admin_title = 'Sidebar right';
  $export['sidebar_right'] = $layout_region;

  return $export;
}
