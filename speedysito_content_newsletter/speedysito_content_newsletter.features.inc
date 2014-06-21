<?php
/**
 * @file
 * speedysito_content_newsletter.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function speedysito_content_newsletter_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
