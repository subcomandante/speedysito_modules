<?php
/**
 * @file
 * speedysito_deploy_website.features.uuid_bean.inc
 */

/**
 * Implements hook_uuid_features_default_beans().
 */
function speedysito_deploy_website_uuid_features_default_beans() {
  $beans = array();

  $beans[] = array(
    'label' => 'Test bean block',
    'description' => NULL,
    'title' => 'Test bean title',
    'type' => 'block',
    'data' => array(
      'view_mode' => 'default',
    ),
    'delta' => 'test-bean-block',
    'view_mode' => 'default',
    'created' => 1401542068,
    'log' => '',
    'uid' => 1,
    'default_revision' => 1,
    'revisions' => array(),
    'vuuid' => '6aa8050a-58e7-4e92-8ce0-97b5cd718d80',
    'uuid' => 'd5eae970-afcf-40e5-9866-2118c4d5b784',
    'field_body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Hello mate!</p>
',
          'format' => 'editor',
          'safe_value' => '<p>Hello mate!</p>
',
        ),
      ),
    ),
    'url_alias' => array(),
  );
  return $beans;
}
