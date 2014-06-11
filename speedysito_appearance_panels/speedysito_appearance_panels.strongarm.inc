<?php
/**
 * @file
 * speedysito_appearance_panels.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function speedysito_appearance_panels_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panels_renderer_default';
  $strongarm->value = 'ipe';
  $export['panels_renderer_default'] = $strongarm;

  return $export;
}
