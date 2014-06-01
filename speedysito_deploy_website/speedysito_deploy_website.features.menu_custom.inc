<?php
/**
 * @file
 * speedysito_deploy_website.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function speedysito_deploy_website_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-products.
  $menus['menu-products'] = array(
    'menu_name' => 'menu-products',
    'title' => 'Categories',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Categories');


  return $menus;
}
