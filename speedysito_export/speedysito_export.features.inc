<?php
/**
 * @file
 * speedysito_export.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function speedysito_export_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
