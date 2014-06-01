<?php
/**
 * @file
 * speedysito_structure.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function speedysito_structure_taxonomy_default_vocabularies() {
  return array(
    'sedi' => array(
      'name' => 'Sedi',
      'machine_name' => 'sedi',
      'description' => 'Sedi',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'sitemap' => array(
      'name' => 'Sitemap',
      'machine_name' => 'sitemap',
      'description' => 'Site map',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
