<?php
/**
 * @file
 * speedysito_appearance_panels.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function speedysito_appearance_panels_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'administer gridbuilder'.
  $permissions['administer gridbuilder'] = array(
    'name' => 'administer gridbuilder',
    'roles' => array(),
    'module' => 'gridbuilder',
  );

  // Exported permission: 'administer layouts'.
  $permissions['administer layouts'] = array(
    'name' => 'administer layouts',
    'roles' => array(),
    'module' => 'layout',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'administer panelizer'.
  $permissions['administer panelizer'] = array(
    'name' => 'administer panelizer',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page content'.
  $permissions['administer panelizer node page content'] = array(
    'name' => 'administer panelizer node page content',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page context'.
  $permissions['administer panelizer node page context'] = array(
    'name' => 'administer panelizer node page context',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page defaults'.
  $permissions['administer panelizer node page defaults'] = array(
    'name' => 'administer panelizer node page defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page layout'.
  $permissions['administer panelizer node page layout'] = array(
    'name' => 'administer panelizer node page layout',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page overview'.
  $permissions['administer panelizer node page overview'] = array(
    'name' => 'administer panelizer node page overview',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node page settings'.
  $permissions['administer panelizer node page settings'] = array(
    'name' => 'administer panelizer node page settings',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node webform defaults'.
  $permissions['administer panelizer node webform defaults'] = array(
    'name' => 'administer panelizer node webform defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer user user defaults'.
  $permissions['administer panelizer user user defaults'] = array(
    'name' => 'administer panelizer user user defaults',
    'roles' => array(),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(),
    'module' => 'panels',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(),
    'module' => 'panels',
  );

  return $permissions;
}
