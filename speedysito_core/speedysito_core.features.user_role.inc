<?php
/**
 * @file
 * speedysito_core.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function speedysito_core_user_default_roles() {
  $roles = array();

  // Exported role: Content editor.
  $roles['Content editor'] = array(
    'name' => 'Content editor',
    'weight' => 3,
  );

  // Exported role: Site manager.
  $roles['Site manager'] = array(
    'name' => 'Site manager',
    'weight' => 2,
  );

  return $roles;
}
