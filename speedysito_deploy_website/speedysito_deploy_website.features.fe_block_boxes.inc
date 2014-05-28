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

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'SpeedySito - Cos\'è';
  $fe_block_boxes->format = 'editor';
  $fe_block_boxes->machine_name = 'speedysito_intro';
  $fe_block_boxes->body = '<p>SpeedySito è un sito internet completo e già pronto per le esigenze più diffuse, basta solo sostituire i testi e le immagini precaricate con le vostre. E se vorrete espanderlo o modificarlo in un secondo momento, potrete farlo ogni volta che vorrete, e senza nessun costo aggiuntivo.</p>

<p><strong>Inoltre, grazie alla licenza di SpeedySito, il risultato rimarrà di vostra proprietà!</strong></p>
';

  $export['speedysito_intro'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'SpeedySito - Vantaggi';
  $fe_block_boxes->format = 'editor';
  $fe_block_boxes->machine_name = 'speedysito_vantaggi';
  $fe_block_boxes->body = '<ul>
	<li>Economico</li>
	<li>Personalizzabile</li>
	<li>Ottimizzato per motori di ricerca</li>
</ul>
';

  $export['speedysito_vantaggi'] = $fe_block_boxes;

  return $export;
}
