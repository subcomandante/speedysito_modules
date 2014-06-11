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

  return $permissions;
}
