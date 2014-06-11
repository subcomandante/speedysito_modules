<?php
/**
 * @file
 * speedysito_setup.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function speedysito_setup_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_semaphore';
  $strongarm->value = array();
  $export['features_semaphore'] = $strongarm;

  return $export;
}
