<?php
/**
 * @file
 * speedysito_ui.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function speedysito_ui_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(),
    'module' => 'contextual',
  );

  // Exported permission: 'access navbar'.
  $permissions['access navbar'] = array(
    'name' => 'access navbar',
    'roles' => array(),
    'module' => 'navbar',
  );

  // Exported permission: 'administer module filter'.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(),
    'module' => 'module_filter',
  );

  // Exported permission: 'administer skinr'.
  $permissions['administer skinr'] = array(
    'name' => 'administer skinr',
    'roles' => array(),
    'module' => 'skinr_ui',
  );

  // Exported permission: 'edit advanced skin settings'.
  $permissions['edit advanced skin settings'] = array(
    'name' => 'edit advanced skin settings',
    'roles' => array(),
    'module' => 'skinr_ui',
  );

  // Exported permission: 'edit skin settings'.
  $permissions['edit skin settings'] = array(
    'name' => 'edit skin settings',
    'roles' => array(),
    'module' => 'skinr_ui',
  );

  return $permissions;
}
