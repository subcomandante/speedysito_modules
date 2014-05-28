<?php
/**
 * @file
 * speedysito_structure.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function speedysito_structure_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function speedysito_structure_node_info() {
  $items = array(
    'main_page' => array(
      'name' => t('Main page'),
      'base' => 'node_content',
      'description' => t('Main page with menu links.'),
      'has_title' => '1',
      'title_label' => t('Titolo'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
