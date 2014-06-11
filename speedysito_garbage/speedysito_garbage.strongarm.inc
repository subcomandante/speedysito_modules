<?php
/**
 * @file
 * speedysito_garbage.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function speedysito_garbage_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'n70jup';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_codecache';
  $strongarm->value = array(
    'speedysito_setup' => array(
      'dependencies' => '97d75bee18ecc30f0a3aa0031417fefb',
      'variable' => 'ea28b3c7228fcf9208d6fd3922705ce0',
    ),
    'speedysito_core' => array(
      'variable' => 'b78501263204633d0974382fec5c8762',
      'filter' => '687596a4865e419cebdd3b866cbd702c',
      'user_role' => '3c66792267df51c91c175953297a7ed1',
      'user_permission' => '5eba02cc6fd7b6b3d11383bd0d25197e',
      'dependencies' => '2c5334e8a0145165593ce741263e9674',
    ),
    'speedysito_garbage' => array(
      'variable' => 'c93fb73de77f2b0228584647dd469b4d',
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
    ),
  );
  $export['features_codecache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_last_check';
  $strongarm->value = 1402505406;
  $export['update_last_check'] = $strongarm;

  return $export;
}
