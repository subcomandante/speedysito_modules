<?php
/**
 * @file
 * speedysito_editor.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function speedysito_editor_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format editor'.
  $permissions['use text format editor'] = array(
    'name' => 'use text format editor',
    'roles' => array(
      'Site manager' => 'Site manager',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
