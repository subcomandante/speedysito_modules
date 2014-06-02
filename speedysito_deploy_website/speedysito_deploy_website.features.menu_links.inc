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

  // Exported menu link: main-menu_architetti-e-decoratori:node/12
  $menu_links['main-menu_architetti-e-decoratori:node/12'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/12',
    'router_path' => 'node/%',
    'link_title' => 'Architetti e decoratori',
    'options' => array(
      'identifier' => 'main-menu_architetti-e-decoratori:node/12',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_siti-di-esempio:node/3',
  );
  // Exported menu link: main-menu_auto-e-moto:node/19
  $menu_links['main-menu_auto-e-moto:node/19'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/19',
    'router_path' => 'node/%',
    'link_title' => 'Auto e Moto',
    'options' => array(
      'identifier' => 'main-menu_auto-e-moto:node/19',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_siti-di-esempio:node/3',
  );
  // Exported menu link: main-menu_basic:node/7
  $menu_links['main-menu_basic:node/7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'Basic',
    'options' => array(
      'identifier' => 'main-menu_basic:node/7',
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
  // Exported menu link: main-menu_enterprise:node/9
  $menu_links['main-menu_enterprise:node/9'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/9',
    'router_path' => 'node/%',
    'link_title' => 'Enterprise',
    'options' => array(
      'identifier' => 'main-menu_enterprise:node/9',
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
  // Exported menu link: main-menu_intrattenimento:node/23
  $menu_links['main-menu_intrattenimento:node/23'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/23',
    'router_path' => 'node/%',
    'link_title' => 'Intrattenimento',
    'options' => array(
      'identifier' => 'main-menu_intrattenimento:node/23',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_siti-di-esempio:node/3',
  );
  // Exported menu link: main-menu_musica:node/22
  $menu_links['main-menu_musica:node/22'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/22',
    'router_path' => 'node/%',
    'link_title' => 'Musica',
    'options' => array(
      'identifier' => 'main-menu_musica:node/22',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_siti-di-esempio:node/3',
  );
  // Exported menu link: main-menu_negozi:node/20
  $menu_links['main-menu_negozi:node/20'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/20',
    'router_path' => 'node/%',
    'link_title' => 'Negozi',
    'options' => array(
      'identifier' => 'main-menu_negozi:node/20',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_siti-di-esempio:node/3',
  );
  // Exported menu link: main-menu_professional:node/8
  $menu_links['main-menu_professional:node/8'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'Professional',
    'options' => array(
      'identifier' => 'main-menu_professional:node/8',
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
  // Exported menu link: main-menu_ristorazione-e-alberghi:node/17
  $menu_links['main-menu_ristorazione-e-alberghi:node/17'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'Ristorazione e Alberghi',
    'options' => array(
      'identifier' => 'main-menu_ristorazione-e-alberghi:node/17',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_siti-di-esempio:node/3',
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
  // Exported menu link: main-menu_salute-e-bellezza:node/13
  $menu_links['main-menu_salute-e-bellezza:node/13'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'Salute e Bellezza',
    'options' => array(
      'identifier' => 'main-menu_salute-e-bellezza:node/13',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_siti-di-esempio:node/3',
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
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_sito-personale:node/18
  $menu_links['main-menu_sito-personale:node/18'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/18',
    'router_path' => 'node/%',
    'link_title' => 'Sito personale',
    'options' => array(
      'identifier' => 'main-menu_sito-personale:node/18',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_siti-di-esempio:node/3',
  );
  // Exported menu link: main-menu_sport-e-tempo-libero:node/15
  $menu_links['main-menu_sport-e-tempo-libero:node/15'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'Sport e tempo libero',
    'options' => array(
      'identifier' => 'main-menu_sport-e-tempo-libero:node/15',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_siti-di-esempio:node/3',
  );
  // Exported menu link: menu-footer-menu_contattaci:node/6
  $menu_links['menu-footer-menu_contattaci:node/6'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'Contattaci',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_contattaci:node/6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_informazioni:node/5',
  );
  // Exported menu link: menu-footer-menu_diventa-rivenditore:node/4
  $menu_links['menu-footer-menu_diventa-rivenditore:node/4'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/4',
    'router_path' => 'node/%',
    'link_title' => 'Diventa rivenditore',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_diventa-rivenditore:node/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_informazioni:node/5',
  );
  // Exported menu link: menu-footer-menu_esempi:node/3
  $menu_links['menu-footer-menu_esempi:node/3'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Esempi',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_esempi:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_portfolio:node/3',
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
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_informazioni:node/5
  $menu_links['menu-footer-menu_informazioni:node/5'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Informazioni',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_informazioni:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_portfolio:node/3
  $menu_links['menu-footer-menu_portfolio:node/3'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Portfolio',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_portfolio:node/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_speedysito-basic:node/7
  $menu_links['menu-footer-menu_speedysito-basic:node/7'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/7',
    'router_path' => 'node/%',
    'link_title' => 'SpeedySito Basic',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_speedysito-basic:node/7',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_il-prodotto:node/2',
  );
  // Exported menu link: menu-footer-menu_speedysito-enterprise:node/9
  $menu_links['menu-footer-menu_speedysito-enterprise:node/9'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/9',
    'router_path' => 'node/%',
    'link_title' => 'SpeedySito Enterprise',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_speedysito-enterprise:node/9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_il-prodotto:node/2',
  );
  // Exported menu link: menu-footer-menu_speedysito-professional:node/8
  $menu_links['menu-footer-menu_speedysito-professional:node/8'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'node/8',
    'router_path' => 'node/%',
    'link_title' => 'SpeedySito Professional',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_speedysito-professional:node/8',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-footer-menu_il-prodotto:node/2',
  );
  // Exported menu link: menu-products_architetti-e-decoratori:node/12
  $menu_links['menu-products_architetti-e-decoratori:node/12'] = array(
    'menu_name' => 'menu-products',
    'link_path' => 'node/12',
    'router_path' => 'node/%',
    'link_title' => 'Architetti e decoratori',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-products_architetti-e-decoratori:node/12',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-products_auto-e-moto:node/19
  $menu_links['menu-products_auto-e-moto:node/19'] = array(
    'menu_name' => 'menu-products',
    'link_path' => 'node/19',
    'router_path' => 'node/%',
    'link_title' => 'Auto e Moto',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-products_auto-e-moto:node/19',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-products_intrattenimento:node/23
  $menu_links['menu-products_intrattenimento:node/23'] = array(
    'menu_name' => 'menu-products',
    'link_path' => 'node/23',
    'router_path' => 'node/%',
    'link_title' => 'Intrattenimento',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-products_intrattenimento:node/23',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-products_musica:node/22
  $menu_links['menu-products_musica:node/22'] = array(
    'menu_name' => 'menu-products',
    'link_path' => 'node/22',
    'router_path' => 'node/%',
    'link_title' => 'Musica',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-products_musica:node/22',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-products_negozi:node/20
  $menu_links['menu-products_negozi:node/20'] = array(
    'menu_name' => 'menu-products',
    'link_path' => 'node/20',
    'router_path' => 'node/%',
    'link_title' => 'Negozi',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-products_negozi:node/20',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-products_ristorazione-e-alberghi:node/17
  $menu_links['menu-products_ristorazione-e-alberghi:node/17'] = array(
    'menu_name' => 'menu-products',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'Ristorazione e Alberghi',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-products_ristorazione-e-alberghi:node/17',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-products_salute-e-bellezza:node/13
  $menu_links['menu-products_salute-e-bellezza:node/13'] = array(
    'menu_name' => 'menu-products',
    'link_path' => 'node/13',
    'router_path' => 'node/%',
    'link_title' => 'Salute e Bellezza',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-products_salute-e-bellezza:node/13',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-products_sito-personale:node/18
  $menu_links['menu-products_sito-personale:node/18'] = array(
    'menu_name' => 'menu-products',
    'link_path' => 'node/18',
    'router_path' => 'node/%',
    'link_title' => 'Sito personale',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-products_sito-personale:node/18',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-products_sport-e-tempo-libero:node/15
  $menu_links['menu-products_sport-e-tempo-libero:node/15'] = array(
    'menu_name' => 'menu-products',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'Sport e tempo libero',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-products_sport-e-tempo-libero:node/15',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_chi-siamo:node/10
  $menu_links['menu-secondary-menu_chi-siamo:node/10'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'node/10',
    'router_path' => 'node/%',
    'link_title' => 'Chi siamo',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-secondary-menu_chi-siamo:node/10',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_contattaci:node/6
  $menu_links['menu-secondary-menu_contattaci:node/6'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'node/6',
    'router_path' => 'node/%',
    'link_title' => 'Contattaci',
    'options' => array(
      'identifier' => 'menu-secondary-menu_contattaci:node/6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
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
    'weight' => -49,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Architetti e decoratori');
  t('Auto e Moto');
  t('Basic');
  t('Chi siamo');
  t('Contattaci');
  t('Diventa rivenditore');
  t('Enterprise');
  t('Esempi');
  t('Home');
  t('Il Prodotto');
  t('Il prodotto');
  t('Informazioni');
  t('Intrattenimento');
  t('Lavora con noi');
  t('Musica');
  t('Negozi');
  t('Portfolio');
  t('Professional');
  t('Ristorazione e Alberghi');
  t('Rivenditori');
  t('Salute e Bellezza');
  t('Siti di esempio');
  t('Sito personale');
  t('SpeedySito Basic');
  t('SpeedySito Enterprise');
  t('SpeedySito Professional');
  t('Sport e tempo libero');


  return $menu_links;
}
