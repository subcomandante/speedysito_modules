<?php
/**
 * @file
 * speedysito_deploy_website.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function speedysito_deploy_website_uuid_default_entities() {
  $entities = array();

  $entities['speedysito_content_export'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/c4e7a1b0-4fae-49e5-847c-a2b55bc749ab',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'editor',
          'summary' => '',
          'value' => '<p>This is the Homepage.</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'language' => 'it',
    'log' => '',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Home',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'home',
        'language' => 'it',
      ),
    ),
    'uuid' => 'c4e7a1b0-4fae-49e5-847c-a2b55bc749ab',
  );
  $entities['speedysito_content_export'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/39443f09-2aaf-4113-9695-12c7900d4b6d',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'editor',
          'summary' => '',
          'value' => '<h2>SpeedySito</h2>

<p>SpeedySito è un sito internet economico, completo e già pronto per le esigenze più diffuse, dovrete solo sostituire i testi e le immagini precaricate con le vostre. E se vorrete espanderlo o modificarlo in un secondo momento, potrete farlo ogni volta che vorrete, e senza nessun costo aggiuntivo.</p>

<h3>Perchè scegliere SpeedySito</h3>

<p>Per avere un sito internet di successo, oltre alla sua creazione bisogna prevedere la manutenzione: infatti, per essere attuale e rispecchiare l\'evoluzione della vostra azienda, deve essere aggiornato periodicamente. E questo in genere richiede costosi interventi di manutenzione da parte della web agency!</p>

<p>Ma con SpeedySito, questo costo sarà solo un ricordo. Grazie all\'utilizzo della tecnologia CMS ed ai template precaricati, è possibile curare direttamente e con estrema semplicità l\'aggiornamento dei contenuti del sito internet (notizie, testi, foto, intere sezioni), in modo da ottenere un sito sempre attuale e senza spese periodiche.</p>

<p><strong>Inoltre, grazie alla licenza di SpeedySito, il risultato rimarrà di vostra proprietà!</strong></p>

<h3>Quale versione è meglio per te</h3>

<p>SpeedySito è disponibile in diverse configurazioni adatte ad ogni esigenza. Verifica nella tabella comparativa la versione adatta per te.</p>

<table border="0" cellpadding="0" cellspacing="0" class="speedysito-table-comparativa">
	<thead>
		<tr>
			<th scope="row">&nbsp;</th>
			<th scope="col">Basic</th>
			<th scope="col">Professional</th>
			<th scope="col">Enterprise</th>
		</tr>
	</thead>
	<tbody>
		<tr>
			<th scope="row">Registrazione dominio</th>
			<td style="text-align:center">INCLUSA</td>
			<td style="text-align:center">INCLUSA</td>
			<td style="text-align:center">INCLUSA</td>
		</tr>
		<tr>
			<th scope="row">Numero caselle email</th>
			<td style="text-align:center">ILLIMITATE</td>
			<td style="text-align:center">ILLIMITATE</td>
			<td style="text-align:center">ILLIMITATE</td>
		</tr>
		<tr>
			<th scope="row">Spazio Sito + Mail</th>
			<td style="text-align:center">1 GB</td>
			<td style="text-align:center">3 GB</td>
			<td style="text-align:center">5 GB (estendibile)</td>
		</tr>
		<tr>
			<th scope="row">Banda disponibile</th>
			<td style="text-align:center">ILLIMITATA</td>
			<td style="text-align:center">ILLIMITATA</td>
			<td style="text-align:center">ILLIMITATA</td>
		</tr>
		<tr>
			<th scope="row">Servizio FTP</th>
			<td style="text-align:center"><img alt="" src="/sites/default/files/images/cancel_24.png" style="height:24px; width:24px" /></td>
			<td style="text-align:center"><img alt="" src="/sites/default/files/images/accepted_24.png" style="height:24px; width:24px" /></td>
			<td style="text-align:center"><img alt="" src="/sites/default/files/images/accepted_24.png" style="height:24px; width:24px" /></td>
		</tr>
		<tr>
			<th scope="row">Personalizzazione Moduli</th>
			<td style="text-align:center"><img alt="" src="/sites/default/files/images/cancel_24.png" style="height:24px; width:24px" /></td>
			<td style="text-align:center"><img alt="" src="/sites/default/files/images/accepted_24.png" style="height:24px; width:24px" /></td>
			<td style="text-align:center"><img alt="" src="/sites/default/files/images/accepted_24.png" style="height:24px; width:24px" /></td>
		</tr>
		<tr>
			<th scope="row">Servizio SSH</th>
			<td style="text-align:center"><img alt="" src="/sites/default/files/images/cancel_24.png" style="height:24px; width:24px" /></td>
			<td style="text-align:center"><img alt="" src="/sites/default/files/images/cancel_24.png" style="height:24px; width:24px" /></td>
			<td style="text-align:center"><img alt="" src="/sites/default/files/images/accepted_24.png" style="height:24px; width:24px" /></td>
		</tr>
		<tr>
			<th scope="row">Supporto tecnico</th>
			<td style="text-align:center">TICKET<br />
			<span style="font-size:9px">risposta via email in 3gg</span></td>
			<td style="text-align:center">TICKET<br />
			<span style="font-size:9px">risposta via email in 2gg</span></td>
			<td style="text-align:center">TICKET<br />
			<span style="font-size:9px">risposta via email/telefono in 1gg</span></td>
		</tr>
		<tr>
			<th scope="row">&nbsp;</th>
			<td style="text-align:center"><a href="prodotto/speedysito-basic">Dettagli &gt;&gt;</a></td>
			<td style="text-align:center"><a href="prodotto/speedysito-professional">Dettagli &gt;&gt;</a></td>
			<td style="text-align:center"><a href="prodotto/speedysito-enterprise">Dettagli &gt;&gt;</a></td>
		</tr>
	</tbody>
</table>

<p>&nbsp;</p>

<table border="1" cellpadding="1" cellspacing="1" class="speedysito-table-descrizioni">
	<tbody>
		<tr>
			<td>
			<p>Il pacchetto BASIC è tutto quello che serve al libero professionista e alla piccola impresa per iniziare a muovere i suoi primi passi nella rete.</p>

			<p>Ha già tutto quello che serve: un dominio a scelta (.it, .com, .net...) compreso nel prezzo, uno spazio web da 1GB per contenere tutti i vostri dati, e una serie di moduli accessori tra i più richiesti.</p>

			<p>Inoltre è semplicissimo da creare e da aggiornare grazie alla struttura precaricata, che dovrete solo completare con le vostre informazioni.</p>
			</td>
			<td>
			<p>Il pacchetto PROFESSIONAL è quello che offre il miglior rapporto qualità / prezzo per una presenza web significativa.</p>

			<p>Ha tutti i servizi previsti dal pacchetto BASIC, più alcuni servizi avanzati, quali l\'utilizzo del protocollo ftp per trasferire i file, e la possibilità di personalizzare i moduli aggiuntivi. Questi ultimi vi permetteranno di personalizzare il sito implementando funzionalità specifiche (ad esempio, forum, blog, news, gallerie di immagini...).</p>
			</td>
			<td>
			<p>Il pacchetto ENTERPRISE è la soluzione ideale, tutto compreso, per la media e la grande impresa.</p>

			<p>La possibilità di personalizzare ogni ambito del sito, il servizio ftp prioritario, la banda illimitata e l0assistenza dedicata, con risposta immediata alle proprie richieste, ne fanno la scelta ottimale per i siti professionali, ad alto volume di traffico e di accesso.</p>

			<p>Mantenendo soprattutto la semplicità operativa che caratterizza tutte le nostre soluzioni.</p>
			</td>
		</tr>
	</tbody>
</table>

<p>&nbsp;</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'language' => 'it',
    'log' => '',
    'page_title' => 'Il prodotto',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Un Prodotto vincente per Aziende vincenti !',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'prodotto',
        'language' => 'it',
      ),
    ),
    'uuid' => '39443f09-2aaf-4113-9695-12c7900d4b6d',
  );
  $entities['speedysito_content_export'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/48e6e018-fff2-4cf8-9f02-6202424c7cc3',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'editor',
          'summary' => '',
          'value' => '<p>Ne abbiamo scelto solo uno per ciascuna categoria (ed è stata dura!), ma alla fine ecco una selezione dei nostri modelli preferiti:</p>

<p><img alt="" class="attr__field_file_image_alt_text[und][0][value]__ attr__field_file_image_title_text[und][0][value]__ attr__format__default img__fid__1 img__view_mode__default media-image" src="http://build.speedysito.it/sites/default/files/Architettura.jpg" /></p>

<p>Puoi scegliere tra molti modelli tematici e personalizzarli nei testi e nella grafica.</p>

<p>Vuoi saperne di più? Contattaci!</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'language' => 'it',
    'log' => '',
    'page_title' => 'Portfolio',
    'promote' => 0,
    'status' => 1,
    'sticky' => 0,
    'title' => 'SpeedySito, il sito giusto per la tua attività!',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'portfolio',
        'language' => 'it',
      ),
    ),
    'uuid' => '48e6e018-fff2-4cf8-9f02-6202424c7cc3',
  );

  return $entities;
}
