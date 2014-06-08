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

  $export['bean-speedysito---footer-message'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'speedysito---footer-message',
    'module' => 'bean',
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

  $export['bean-speedysito---ies'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'speedysito---ies',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '<front>
website*',
    'roles' => array(),
    'themes' => array(
      'speedysito_website' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'speedysito_website',
        'weight' => -14,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bean-speedysito---info'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'speedysito---info',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'speedysito_website' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'speedysito_website',
        'weight' => -14,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bean-speedysito---intro'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'speedysito---intro',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'speedysito_website' => array(
        'region' => 'preface',
        'status' => 1,
        'theme' => 'speedysito_website',
        'weight' => -11,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['bean-speedysito---numeroverde'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'speedysito---numeroverde',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'speedysito_website' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'speedysito_website',
        'weight' => -15,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bean-speedysito---services-basic'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'speedysito---services-basic',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'speedysito_website' => array(
        'region' => 'main_bottom',
        'status' => 1,
        'theme' => 'speedysito_website',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['bean-speedysito---services-enterprise'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'speedysito---services-enterprise',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'speedysito_website' => array(
        'region' => 'main_bottom',
        'status' => 1,
        'theme' => 'speedysito_website',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['bean-speedysito---services-profession'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'speedysito---services-profession',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'speedysito_website' => array(
        'region' => 'main_bottom',
        'status' => 1,
        'theme' => 'speedysito_website',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['bean-speedysito---vantaggi'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'speedysito---vantaggi',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'speedysito_website' => array(
        'region' => 'preface',
        'status' => 1,
        'theme' => 'speedysito_website',
        'weight' => -12,
      ),
    ),
    'title' => '',
    'visibility' => 1,
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
        'weight' => 0,
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
        'weight' => -4,
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

  $export['menu-menu-products'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-products',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => 'website*',
    'roles' => array(),
    'themes' => array(
      'speedysito_website' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'speedysito_website',
        'weight' => -15,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
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
    'title' => 'Informazioni',
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
        'region' => 'header_bottom',
        'status' => 1,
        'theme' => 'speedysito_website',
        'weight' => -15,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-slideshow-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'slideshow-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'speedysito_website' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'speedysito_website',
        'weight' => -14,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
