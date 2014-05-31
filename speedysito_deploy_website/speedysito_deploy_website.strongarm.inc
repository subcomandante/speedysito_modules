<?php
/**
 * @file
 * speedysito_deploy_website.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function speedysito_deploy_website_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'SpeedySito';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'speedysito_website';
  $export['theme_default'] = $strongarm;

  return $export;
}
