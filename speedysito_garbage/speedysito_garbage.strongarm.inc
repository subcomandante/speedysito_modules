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
  $strongarm->name = 'cron_key';
  $strongarm->value = 'QqyksswolYbGZPWgd4WUQ5NooNSP8PgFdQ0KyZoq0FY';
  $export['cron_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_last';
  $strongarm->value = 1402509535;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'n70nc6';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_private_key';
  $strongarm->value = 'e-tt9n7uW9WCs5s74r7HoMe0vixrh5VGlH4QrTZzhj4';
  $export['drupal_private_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_codecache';
  $strongarm->value = array(
    'speedysito_setup' => array(
      'variable' => 'ea28b3c7228fcf9208d6fd3922705ce0',
      'dependencies' => '97d75bee18ecc30f0a3aa0031417fefb',
    ),
    'speedysito_garbage' => array(
      'variable' => 'c342b261a154201e00dfe74f6fc96fbf',
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
    ),
    'speedysito_core' => array(
      'variable' => '330a7e66b51bed897f22a78620dfe8db',
      'filter' => '687596a4865e419cebdd3b866cbd702c',
      'user_role' => '3c66792267df51c91c175953297a7ed1',
      'user_permission' => '5eba02cc6fd7b6b3d11383bd0d25197e',
      'dependencies' => '2c5334e8a0145165593ce741263e9674',
    ),
  );
  $export['features_codecache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_time';
  $strongarm->value = 1402509535;
  $export['install_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_last_check';
  $strongarm->value = 1402509539;
  $export['update_last_check'] = $strongarm;

  return $export;
}
