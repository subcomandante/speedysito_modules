<?php
/**
 * @file
 * speedysito_deploy_website.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function speedysito_deploy_website_uuid_default_entities() {
  $entities = array();

  $entities['speedysito_content_export'][] = (object) array(
    '__metadata' => array(
      'type' => 'menu_link',
      'uri' => 'menu_link/66771e7f-c783-4159-b381-6bf6248ab24c',
      'cause' => FALSE,
    ),
    'access' => TRUE,
    'access_arguments' => 'a:2:{i:0;s:4:"view";i:1;i:1;}',
    'access_callback' => 'node_access',
    'context' => 0,
    'customized' => 0,
    'default_revision' => 1,
    'delivery_callback' => '',
    'depth' => 1,
    'description' => '',
    'expanded' => 0,
    'external' => 0,
    'fit' => 2,
    'has_children' => 0,
    'hidden' => 0,
    'href' => 'node/1',
    'include_file' => '',
    'link_path' => 'node/1',
    'link_title' => 'Home',
    'load_functions' => array(
      1 => 'node_load',
    ),
    'localized_options' => array(),
    'menu_name' => 'main-menu',
    'module' => 'menu',
    'number_parts' => 2,
    'options' => array(),
    'p1' => 426,
    'p2' => 0,
    'p3' => 0,
    'p4' => 0,
    'p5' => 0,
    'p6' => 0,
    'p7' => 0,
    'p8' => 0,
    'p9' => 0,
    'page_arguments' => 'a:1:{i:0;i:1;}',
    'page_callback' => 'node_page_view',
    'path' => 'node/%',
    'plid' => 0,
    'position' => '',
    'router_path' => 'node/%',
    'tab_parent' => '',
    'tab_root' => 'node/%',
    'theme_arguments' => 'a:0:{}',
    'theme_callback' => '',
    'title' => 'Home',
    'title_arguments' => 'a:1:{i:0;i:1;}',
    'title_callback' => 'node_page_title',
    'to_arg_functions' => '',
    'type' => 6,
    'url_alias' => array(
      0 => array(
        'alias' => 'homep',
        'language' => 'it',
      ),
    ),
    'uuid' => '66771e7f-c783-4159-b381-6bf6248ab24c',
    'weight' => 0,
  );
  $entities['speedysito_content_export'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/b40c4441-a007-45ef-bf08-e7df7669396c',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'editor',
          'summary' => '',
          'value' => '<p>Home page</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'language' => 'it',
    'log' => '',
    'page_title' => 'homet',
    'promote' => 1,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Home',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'main_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'homep',
        'language' => 'it',
      ),
    ),
    'uuid' => 'b40c4441-a007-45ef-bf08-e7df7669396c',
  );

  return $entities;
}
