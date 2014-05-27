<?php
/**
 * @file
 * speedysito_editor.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function speedysito_editor_filter_default_formats() {
  $formats = array();

  // Exported format: Editor.
  $formats['editor'] = array(
    'format' => 'editor',
    'name' => 'Editor',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
