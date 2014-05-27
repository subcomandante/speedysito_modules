<?php
/**
 * @file
 * speedysito_structure.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function speedysito_structure_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create main_page content'.
  $permissions['create main_page content'] = array(
    'name' => 'create main_page content',
    'roles' => array(
      'Content editor' => 'Content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any main_page content'.
  $permissions['delete any main_page content'] = array(
    'name' => 'delete any main_page content',
    'roles' => array(
      'Content editor' => 'Content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own main_page content'.
  $permissions['delete own main_page content'] = array(
    'name' => 'delete own main_page content',
    'roles' => array(
      'Content editor' => 'Content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any main_page content'.
  $permissions['edit any main_page content'] = array(
    'name' => 'edit any main_page content',
    'roles' => array(
      'Content editor' => 'Content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own main_page content'.
  $permissions['edit own main_page content'] = array(
    'name' => 'edit own main_page content',
    'roles' => array(
      'Content editor' => 'Content editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
