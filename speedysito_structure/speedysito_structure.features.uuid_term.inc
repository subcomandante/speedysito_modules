<?php
/**
 * @file
 * speedysito_structure.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function speedysito_structure_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Sedi',
    'description' => '',
    'format' => 'editor',
    'weight' => 1,
    'uuid' => '10473a99-df16-4c23-ac2f-88c48fc7c055',
    'vocabulary_machine_name' => 'sitemap',
    'url_alias' => array(
      0 => array(
        'alias' => 'sitemap/sedi',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Contatti',
    'description' => '',
    'format' => 'editor',
    'weight' => 2,
    'uuid' => '1a6fab0f-7622-4a64-b221-a9ff452f5f45',
    'vocabulary_machine_name' => 'sitemap',
    'url_alias' => array(
      0 => array(
        'alias' => 'sitemap/contatti',
        'language' => 'und',
      ),
    ),
  );
  $terms[] = array(
    'name' => 'Eventi',
    'description' => '<p>Stai organizzando una festa, ti è nato un figlio, stai per partecipare ad una fiera.</p>
',
    'format' => 'editor',
    'weight' => 0,
    'uuid' => '549b0a12-b221-472f-9bbe-8e3763170227',
    'vocabulary_machine_name' => 'sitemap',
    'url_alias' => array(
      0 => array(
        'alias' => 'sitemap/eventi',
        'language' => 'und',
      ),
    ),
  );
  return $terms;
}
