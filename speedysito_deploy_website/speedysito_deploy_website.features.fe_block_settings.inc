<?php
/**
 * @file
 * speedysito_deploy_website.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function speedysito_deploy_website_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-ies_srl'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'ies_srl',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'about*',
    'roles' => array(),
    'themes' => array(
      'speedysito_website' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'speedysito_website',
        'weight' => 0,
      ),
    ),
    'title' => 'I.E.S. srl',
    'visibility' => 0,
  );

  $export['block-speedysito_info'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'speedysito_info',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'speedysito_website' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'speedysito_website',
        'weight' => -11,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-speedysito_intro'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'speedysito_intro',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'speedysito_website' => array(
        'region' => 'preface',
        'status' => 1,
        'theme' => 'speedysito_website',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-speedysito_services_basic'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'speedysito_services_basic',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'speedysito_website' => array(
        'region' => 'main_bottom',
        'status' => 1,
        'theme' => 'speedysito_website',
        'weight' => -12,
      ),
    ),
    'title' => 'SpeedySito Basic',
    'visibility' => 1,
  );

  $export['block-speedysito_services_enterprise'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'speedysito_services_enterprise',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'speedysito_website' => array(
        'region' => 'main_bottom',
        'status' => 1,
        'theme' => 'speedysito_website',
        'weight' => -11,
      ),
    ),
    'title' => 'SpeedySito Enterprise',
    'visibility' => 1,
  );

  $export['block-speedysito_services_professional'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'speedysito_services_professional',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'speedysito_website' => array(
        'region' => 'main_bottom',
        'status' => 1,
        'theme' => 'speedysito_website',
        'weight' => -12,
      ),
    ),
    'title' => 'SpeedySito Professional',
    'visibility' => 1,
  );

  $export['block-speedysito_vantaggi'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'speedysito_vantaggi',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'speedysito_website' => array(
        'region' => 'preface',
        'status' => 1,
        'theme' => 'speedysito_website',
        'weight' => -9,
      ),
    ),
    'title' => 'Il tuo nuovo sito web',
    'visibility' => 1,
  );

  $export['blockify-blockify-messages'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'blockify-messages',
    'module' => 'blockify',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'speedysito_website' => array(
        'region' => 'header_top',
        'status' => 1,
        'theme' => 'speedysito_website',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['blockify-blockify-page-title'] = array(
    'cache' => 4,
    'custom' => 0,
    'delta' => 'blockify-page-title',
    'module' => 'blockify',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'speedysito_website' => array(
        'region' => 'preface',
        'status' => 1,
        'theme' => 'speedysito_website',
        'weight' => -8,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['blockify-blockify-tabs'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'blockify-tabs',
    'module' => 'blockify',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'speedysito_website' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'speedysito_website',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-footer-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-footer-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'speedysito_website' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'speedysito_website',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-secondary-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-secondary-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'speedysito_website' => array(
        'region' => 'footer_top',
        'status' => 1,
        'theme' => 'speedysito_website',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'speedysito_website' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'speedysito_website',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
