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
  $strongarm->value = 1402561686;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'n71skg';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ctools_last_cron';
  $strongarm->value = 1402561687;
  $export['ctools_last_cron'] = $strongarm;

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
      'user_permission' => '1a0a050b6b60339b4cd4724206cf7311',
      'dependencies' => '4cf0fd71cab88b1fa212de432cc0a7cf',
    ),
    'speedysito_garbage' => array(
      'variable' => 'e7ad1acf28ae131ba70d7b3df0087e0e',
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
      'user_permission' => '00c1089238827a3b7a7ba27e45b11ed4',
      'dependencies' => 'c00a0a07217e0bab6d2682aadcb0cdef',
      'variable' => '6dc4bf7720e71f0eed8681ea1f927829',
    ),
    'speedysito_appearance_panels' => array(
      'variable' => 'e0f25b850cd9d92828224f6db09823ac',
      'dependencies' => 'f283a6dfc908cf0198a19adc5ab26f06',
      'user_permission' => 'e5d16d8a9878a35d97132791b4ccd868',
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
    0 => 493,
    1 => 485,
    2 => 253,
    3 => 247,
    4 => 246,
    5 => 245,
    6 => 243,
    7 => 242,
    8 => 127,
    9 => 126,
    10 => 125,
    11 => 124,
    12 => 123,
    13 => 122,
    14 => 121,
    15 => 63,
    16 => 62,
    17 => 61,
    18 => 60,
    19 => 58,
    20 => 45,
    21 => 44,
    22 => 31,
    23 => 30,
    24 => 29,
    25 => 24,
    26 => 23,
    27 => 22,
    28 => 21,
    29 => 15,
    30 => 14,
    31 => 11,
    32 => 10,
    33 => 7,
    34 => 6,
    35 => 5,
    36 => 3,
    37 => 2,
    38 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'module_filter_recent_modules';
  $strongarm->value = array(
    'uuid' => 1402530942,
    'uuid_path' => 1402530942,
    'panelizer' => 1402563037,
  );
  $export['module_filter_recent_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_last_check';
  $strongarm->value = 1402561712;
  $export['update_last_check'] = $strongarm;

  return $export;
}
