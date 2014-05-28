<?php
/**
 * @file
 * speedysito_deploy_website.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function speedysito_deploy_website_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "deploy" && $api == "deploy_plans") {
    return array("version" => "1");
  }
}
