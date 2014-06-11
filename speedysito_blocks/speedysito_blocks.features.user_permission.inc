<?php
/**
 * @file
 * speedysito_blocks.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function speedysito_blocks_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(),
    'module' => 'block',
  );

  return $permissions;
}
