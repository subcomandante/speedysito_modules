<?php
/**
 * @file
 * speedysito_export.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function speedysito_export_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer deployments'.
  $permissions['administer deployments'] = array(
    'name' => 'administer deployments',
    'roles' => array(),
    'module' => 'deploy',
  );

  return $permissions;
}
