<?php
/**
 * @file
 * speedysito_setup.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function speedysito_setup_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
