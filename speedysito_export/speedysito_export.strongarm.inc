<?php
/**
 * @file
 * speedysito_export.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function speedysito_export_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_menu_links_menus';
  $strongarm->value = array(
    'main-menu' => 'main-menu',
    'management' => 0,
    'navigation' => 0,
    'user-menu' => 0,
  );
  $export['features_admin_menu_links_menus'] = $strongarm;

  return $export;
}
