<?php
/**
 * @file
 * speedysito_administration.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function speedysito_administration_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'Content editor' => 'Content editor',
      'Site manager' => 'Site manager',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access overlay'.
  $permissions['access overlay'] = array(
    'name' => 'access overlay',
    'roles' => array(
      'Content editor' => 'Content editor',
      'Site manager' => 'Site manager',
    ),
    'module' => 'overlay',
  );

  return $permissions;
}
