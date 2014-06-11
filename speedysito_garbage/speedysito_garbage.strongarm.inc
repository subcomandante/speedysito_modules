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
  $strongarm->value = 'nuWj67YWQQe07HUXwtzQl6IMZpaMAfnbYNwYHENojU4';
  $export['cron_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_last';
  $strongarm->value = 1402528872;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'n712sr';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_private_key';
  $strongarm->value = '-IbNR8H0hjgpHJ-qCqUYXp8cE1_jDZ12fPb1PYd4fIA';
  $export['drupal_private_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_codecache';
  $strongarm->value = array(
    'speedysito_setup' => array(
      'variable' => '6089279e6942bb54a24ab959b6549033',
      'user_permission' => '645a35939d5b23acb9012fda5834b4c3',
      'dependencies' => '97d75bee18ecc30f0a3aa0031417fefb',
    ),
    'speedysito_garbage' => array(
      'variable' => 'd496ea0d51eb3f37f4c853f1b135c7b1',
      'dependencies' => 'e410ca96d90029817c7bb9c7cb1f7ea4',
    ),
    'speedysito_core' => array(
      'variable' => '12b360470358d0d88dd1d7d45bdb1b15',
      'filter' => '687596a4865e419cebdd3b866cbd702c',
      'menu_custom' => 'e14f213b3bdaa95c04cc05a488b30262',
      'user_role' => '3c66792267df51c91c175953297a7ed1',
      'user_permission' => '423d39c73ea79645aac4c657f464e907',
      'dependencies' => '93a3ac7706e7f67ef2a3fa6857f3b29d',
    ),
    'speedysito_content' => array(
      'variable' => 'd5276c49ae4faae4c2a86c9f549ac1a1',
      'field_base' => '7c566aa7bf58e9f7c881d592b9cf6281',
      'field_instance' => '0fd1ce43fd042fba7f213a25722cc5e1',
      'user_permission' => '22c5bbe3aa0a600a3ab7508dae8977cb',
      'dependencies' => '2330c6864b3e9a7296cf353b221919cf',
      'node' => '0be1a2c462ef7391b86f988b0c3b62d4',
    ),
    'speedysito_blocks' => array(
      'user_permission' => '3b9c1fc77369999c24cde95483641361',
      'dependencies' => 'd0899aa34fa7503520d83c35f1bb4cce',
    ),
    'speedysito_blocks_bean' => array(
      'user_permission' => 'fb512e52ac5b68a05862adfa2e49ef55',
      'dependencies' => 'a3847fea6a184cefccfbe023d508c8cc',
    ),
    'speedysito_appearance' => array(
      'dependencies' => '0e7ce021f1784a7dc48ed5b1c4d8eeea',
    ),
    'speedysito_path' => array(
      'variable' => 'ed30cd1f64cbd18f559657c05bb101b7',
      'user_permission' => '49f47a834a49040bc22d6a7eaed5f4e4',
      'dependencies' => '7cddc989e8f406802aa800ccaadb4cdb',
    ),
    'speedysito_ui' => array(
      'user_permission' => '1694b22015f122df57520fd0c13069df',
      'dependencies' => 'ad0fbe6fe6e8b7e3e7347da869b07d0b',
    ),
  );
  $export['features_codecache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_time';
  $strongarm->value = 1402528872;
  $export['install_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 245,
    1 => 125,
    2 => 124,
    3 => 122,
    4 => 121,
    5 => 63,
    6 => 62,
    7 => 61,
    8 => 60,
    9 => 45,
    10 => 44,
    11 => 31,
    12 => 30,
    13 => 29,
    14 => 24,
    15 => 23,
    16 => 22,
    17 => 21,
    18 => 15,
    19 => 14,
    20 => 11,
    21 => 10,
    22 => 7,
    23 => 6,
    24 => 5,
    25 => 3,
    26 => 2,
    27 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_last_check';
  $strongarm->value = 1402528876;
  $export['update_last_check'] = $strongarm;

  return $export;
}
