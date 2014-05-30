<?php
/**
 * @file
 * speedysito_deploy_website.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function speedysito_deploy_website_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_basic:node/5
  $menu_links['main-menu_basic:node/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Basic',
    'options' => array(
      'identifier' => 'main-menu_basic:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_il-prodotto:node/2',
  );
  // Exported menu link: main-menu_enterprise:node/7
  $menu_links['main-menu_enterprise:node/7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'Enterprise',
    'options' => array(
      'identifier' => 'main-menu_enterprise:node/7',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_il-prodotto:node/2',
  );
  // Exported menu link: main-menu_home:node/1
  $menu_links['main-menu_home:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_il-prodotto:node/2
  $menu_links['main-menu_il-prodotto:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Il prodotto',
    'options' => array(
      'identifier' => 'main-menu_il-prodotto:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_professional:node/6
  $menu_links['main-menu_professional:node/6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'Professional',
    'options' => array(
      'identifier' => 'main-menu_professional:node/6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_il-prodotto:node/2',
  );
  // Exported menu link: main-menu_rivenditori:node/4
  $menu_links['main-menu_rivenditori:node/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Rivenditori',
    'options' => array(
      'identifier' => 'main-menu_rivenditori:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_siti-di-esempio:node/3
  $menu_links['main-menu_siti-di-esempio:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Siti di esempio',
    'options' => array(
      'identifier' => 'main-menu_siti-di-esempio:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_il-prodotto:node/2
  $menu_links['menu-footer-menu_il-prodotto:node/2'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Il Prodotto',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_il-prodotto:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_chi-siamo:node/8
  $menu_links['menu-secondary-menu_chi-siamo:node/8'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'Chi siamo',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-secondary-menu_chi-siamo:node/8',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_lavora-con-noi:node/4
  $menu_links['menu-secondary-menu_lavora-con-noi:node/4'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Lavora con noi',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-secondary-menu_lavora-con-noi:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Basic');
  t('Chi siamo');
  t('Enterprise');
  t('Home');
  t('Il Prodotto');
  t('Il prodotto');
  t('Lavora con noi');
  t('Professional');
  t('Rivenditori');
  t('Siti di esempio');


  return $menu_links;
}
