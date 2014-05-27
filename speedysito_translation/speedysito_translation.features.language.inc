<?php
/**
 * @file
 * speedysito_translation.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function speedysito_translation_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => -10,
  );
  // Exported language: it.
  $languages['it'] = array(
    'language' => 'it',
    'name' => 'Italian',
    'native' => 'Italiano',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => '',
    'weight' => 0,
  );
  return $languages;
}
