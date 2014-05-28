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
      'uri' => 'node/b40c4441-a007-45ef-bf08-e7df7669396c',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'editor',
          'summary' => '',
          'value' => '<p>Home page</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'language' => 'it',
    'log' => '',
    'page_title' => 'homet',
    'promote' => 1,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Home',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'main_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'home',
        'language' => 'it',
      ),
    ),
    'uuid' => 'b40c4441-a007-45ef-bf08-e7df7669396c',
  );
  $entities['speedysito_content_export'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/6acf65f9-1d23-405e-9e13-cd083455fc9c',
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
			<th scope="row">Spazio Web</th>
			<td style="text-align:center">1 GB</td>
			<td style="text-align:center">2 GB</td>
			<td style="text-align:center">3 GB*</td>
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
    'promote' => 1,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Il prodotto',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'main_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'prodotto',
        'language' => 'it',
      ),
    ),
    'uuid' => '6acf65f9-1d23-405e-9e13-cd083455fc9c',
  );
  $entities['speedysito_content_export'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/2f65c920-7a27-4610-bb16-a5472fdcd5c3',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'editor',
          'summary' => '',
          'value' => '<p>I migliori!</p>
',
        ),
      ),
    ),
    'comment' => 0,
    'language' => 'it',
    'log' => '',
    'page_title' => 'Portfolio',
    'promote' => 1,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Siti di esempio',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'main_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'portfolio',
        'language' => 'it',
      ),
    ),
    'uuid' => '2f65c920-7a27-4610-bb16-a5472fdcd5c3',
  );

  return $entities;
}
