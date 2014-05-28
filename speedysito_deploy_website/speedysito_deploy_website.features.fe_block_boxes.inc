<?php
/**
 * @file
 * speedysito_deploy_website.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function speedysito_deploy_website_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'I.E.S. srl';
  $fe_block_boxes->format = 'editor';
  $fe_block_boxes->machine_name = 'ies_srl';
  $fe_block_boxes->body = '<p>SpeedySito è un prodotto della I.E.S. srl.</p>

<p>Siamo a vostra disposizione per ogni esigenza informatica.</p>

<div style="text-align: right;"><a href="/about">Scopri chi siamo</a></div>
';

  $export['ies_srl'] = $fe_block_boxes;

  return $export;
}
