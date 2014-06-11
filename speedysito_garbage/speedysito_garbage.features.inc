<?php
/**
 * @file
 * speedysito_garbage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function speedysito_garbage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
