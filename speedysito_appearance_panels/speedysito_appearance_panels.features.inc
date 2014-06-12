<?php
/**
 * @file
 * speedysito_appearance_panels.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function speedysito_appearance_panels_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "layout" && $api == "default_layout_breakpoint") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
