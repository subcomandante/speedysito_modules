<?php
/**
 * @file
 * speedysito_content_newsletter.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function speedysito_content_newsletter_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer mailsystem'.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(),
    'module' => 'mailsystem',
  );

  // Exported permission: 'edit mimemail user settings'.
  $permissions['edit mimemail user settings'] = array(
    'name' => 'edit mimemail user settings',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'send arbitrary files'.
  $permissions['send arbitrary files'] = array(
    'name' => 'send arbitrary files',
    'roles' => array(),
    'module' => 'mimemail',
  );

  return $permissions;
}
