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
    'uuid' => 'b40c4441-a007-45ef-bf08-e7df7669396c',
  );

  return $entities;
}
