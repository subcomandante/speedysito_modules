<?php
/**
 * @file
 * speedysito_blocks_bean.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function speedysito_blocks_bean_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bean_all_blacklist_bean';
  $strongarm->value = TRUE;
  $export['bean_all_blacklist_bean'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bean_all_blacklist_system';
  $strongarm->value = array(
    0 => 'main',
    1 => 'powered-by',
    2 => 'help',
  );
  $export['bean_all_blacklist_system'] = $strongarm;

  return $export;
}
