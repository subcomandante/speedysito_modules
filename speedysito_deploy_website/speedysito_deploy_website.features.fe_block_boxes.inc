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
  $fe_block_boxes->body = '<p><span style="font-size:14px">SpeedySito è un prodotto della I.E.S. srl.</span></p>

<p><span style="font-size:14px">Siamo a vostra disposizione per ogni esigenza informatica.</span></p>

<div style="text-align: right;"><span style="font-size:14px"><a href="/about">Scopri chi siamo</a></span></div>
';

  $export['ies_srl'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer message';
  $fe_block_boxes->format = 'editor';
  $fe_block_boxes->machine_name = 'speedysito_footer_message';
  $fe_block_boxes->body = '<div class="footer-message-text-inner inner clearfix" id="footer-message-text-inner">
<span style="font-size:14px">SpeedySito è un prodotto di <a href="http://www.gruppoies.net">I.E.S.</a> SrL<br />
Corso Massimo D\'Azeglio, 38/A<br />
10015 Ivrea (TO)<br />
CF e PI IT05464360014</span>
</div>
';

  $export['speedysito_footer_message'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'SpeedySito - Info';
  $fe_block_boxes->format = 'editor';
  $fe_block_boxes->machine_name = 'speedysito_info';
  $fe_block_boxes->body = '<div id="box-header">
<p class="rteright"><span style="color:rgb(1, 144, 53)">Maggiori Informazioni</span><br />
<strong>Lun-Ven 9:00-13:00/14:00-18:00</strong><br />
Chiamata Gratuita</p>
</div>
';

  $export['speedysito_info'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'SpeedySito - Cos\'è';
  $fe_block_boxes->format = 'editor';
  $fe_block_boxes->machine_name = 'speedysito_intro';
  $fe_block_boxes->body = '<p><span style="color:#FFFFFF">SpeedySito è un sito internet completo e già pronto per le esigenze più diffuse, basta solo sostituire i testi e le immagini precaricate con le vostre. E se vorrete espanderlo o modificarlo in un secondo momento, potrete farlo ogni volta che vorrete, e senza nessun costo aggiuntivo.</span></p>

<p><span style="color:#FFFFFF"><strong>Inoltre, grazie alla licenza di SpeedySito, il risultato rimarrà di vostra proprietà!</strong></span></p>
';

  $export['speedysito_intro'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'SpeedySito - Services Basic';
  $fe_block_boxes->format = 'editor';
  $fe_block_boxes->machine_name = 'speedysito_services_basic';
  $fe_block_boxes->body = '<p>Per il libero professionista e la piccola impresa che vogliono iniziare a muovere i primi passi nella rete.</p>

<div class="altasis-link-moreinfo rteright"><a class="testround basic-moreinfo" href="/prodotto/speedysito-basic">Ulteriori informazioni</a></div>
';

  $export['speedysito_services_basic'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'SpeedySito - Services Enterprise';
  $fe_block_boxes->format = 'editor';
  $fe_block_boxes->machine_name = 'speedysito_services_enterprise';
  $fe_block_boxes->body = '<p>Il pacchetto ENTERPRISE è la soluzione ideale per la media e la grande impresa.</p>

<div class="altasis-link-moreinfo rteright"><a class="testround enterprise-moreinfo" href="/prodotto/speedysito-enterprise">Ulteriori informazioni</a></div>
';

  $export['speedysito_services_enterprise'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'SpeedySito - Services Professional';
  $fe_block_boxes->format = 'editor';
  $fe_block_boxes->machine_name = 'speedysito_services_professional';
  $fe_block_boxes->body = '<p>Il pacchetto PROFESSIONAL è quello che offre il miglio rapporto qualità/prezzo per una presenza web significativa.</p>

<div class="altasis-link-moreinfo rteright"><a class="testround professional-moreinfo" href="/prodotto/speedysito-professional">Ulteriori informazioni</a></div>
';

  $export['speedysito_services_professional'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'SpeedySito - Vantaggi';
  $fe_block_boxes->format = 'editor';
  $fe_block_boxes->machine_name = 'speedysito_vantaggi';
  $fe_block_boxes->body = '<ul>
	<li><span style="color:#FFFFFF">Economico</span></li>
	<li><span style="color:#FFFFFF">Personalizzabile</span></li>
	<li><span style="color:#FFFFFF">Ottimizzato per motori di ricerca</span></li>
</ul>
';

  $export['speedysito_vantaggi'] = $fe_block_boxes;

  return $export;
}
