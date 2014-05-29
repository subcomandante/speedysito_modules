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
    'promote' => 1,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Un Prodotto vincente per Aziende vincenti !',
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
          'value' => '<p>Ne abbiamo scelto solo uno per ciascuna categoria (ed è stata dura!), ma alla fine ecco una selezione dei nostri modelli preferiti:</p>

<p><img alt="" class="attr__field_file_image_alt_text[und][0][value]__ attr__field_file_image_title_text[und][0][value]__ attr__format__default img__fid__1 img__view_mode__default media-image" src="http://test.speedysito.it/sites/default/files/Architettura.jpg" /></p>

<p>&nbsp;</p>

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
    'promote' => 1,
    'status' => 1,
    'sticky' => 0,
    'title' => 'SpeedySito, il sito giusto per la tua attività!',
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
  $entities['speedysito_content_export'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/d2e802ea-58d1-454b-90d1-e6a10c34f9e4',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'editor',
          'summary' => '',
          'value' => '<h2>Diventa rivenditore</h2>

<p>Siamo sempre alla ricerca di referenti commerciali di zona con i quali sviluppare rapporti di lavoro.</p>

<p><strong>E\' possibile distribuire il nostro prodotto in diversi modi:</strong></p>

<ul>
	<li>Liberi professionisti che hanno o vogliono sviluppare un portafoglio clienti</li>
	<li>Punti vendita prodotti e servizi per aziende distribuzione dedicata ai negozi tradizionali</li>
	<li>Convenzioni dedicate a grandi gruppi di acquisto</li>
</ul>

<p><em>Qualunque sia la tecnica distributiva scelta, garantiamo alte percentuali e bonus.</em></p>

<p>&nbsp;</p>

<h3>Per maggiori informazioni compila il seguente modulo</h3>
',
        ),
      ),
    ),
    'comment' => 0,
    'language' => 'it',
    'log' => '',
    'page_title' => 'Rivenditori',
    'promote' => 1,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Entra nel nostro team e lavora con noi!',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'webform',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'entra-nel-nostro-team-e-lavora-con-noi',
        'language' => 'it',
      ),
    ),
    'uuid' => 'd2e802ea-58d1-454b-90d1-e6a10c34f9e4',
    'webform' => array(
      'nid' => 4,
      'confirmation' => '',
      'confirmation_format' => NULL,
      'redirect_url' => '<confirmation>',
      'status' => 1,
      'block' => 0,
      'teaser' => 0,
      'allow_draft' => 0,
      'auto_save' => 0,
      'submit_notice' => 1,
      'submit_text' => '',
      'submit_limit' => -1,
      'submit_interval' => -1,
      'total_submit_limit' => -1,
      'total_submit_interval' => -1,
      'record_exists' => TRUE,
      'roles' => array(
        0 => 1,
        1 => 2,
      ),
      'emails' => array(),
      'components' => array(
        1 => array(
          'nid' => 4,
          'cid' => 1,
          'pid' => 0,
          'form_key' => 'nome_e_cognome',
          'name' => 'Nome e Cognome',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => 1,
          'weight' => 0,
          'page_num' => 1,
        ),
        2 => array(
          'nid' => 4,
          'cid' => 2,
          'pid' => 0,
          'form_key' => 'email',
          'name' => 'Email',
          'type' => 'email',
          'value' => '%useremail',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => 1,
          'weight' => 1,
          'page_num' => 1,
        ),
        3 => array(
          'nid' => 4,
          'cid' => 3,
          'pid' => 0,
          'form_key' => 'ragione_sociale',
          'name' => 'Ragione Sociale',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 2,
          'page_num' => 1,
        ),
        4 => array(
          'nid' => 4,
          'cid' => 4,
          'pid' => 0,
          'form_key' => 'testo',
          'name' => 'Testo',
          'type' => 'textarea',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'private' => 0,
            'resizable' => 1,
            'disabled' => 0,
            'conditional_operator' => '=',
            'cols' => '',
            'rows' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 3,
          'page_num' => 1,
        ),
        7 => array(
          'nid' => 4,
          'cid' => 7,
          'pid' => 0,
          'form_key' => 'curriculum_o_presentazione_aziendale',
          'name' => 'Curriculum o presentazione aziendale',
          'type' => 'file',
          'value' => '',
          'extra' => array(
            'scheme' => 'public',
            'title_display' => 'before',
            'private' => 0,
            'progress_indicator' => 'throbber',
            'filtering' => array(
              'size' => '2 MB',
              'types' => array(
                0 => 'txt',
                1 => 'rtf',
                2 => 'odf',
                3 => 'pdf',
                4 => 'doc',
                5 => 'docx',
                6 => 'ppt',
                7 => 'pptx',
                8 => 'xls',
                9 => 'xlsx',
                10 => 'xml',
              ),
              'addextensions' => '',
            ),
            'conditional_operator' => '=',
            'directory' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 4,
          'page_num' => 1,
        ),
        5 => array(
          'nid' => 4,
          'cid' => 5,
          'pid' => 0,
          'form_key' => 'testo_privacy',
          'name' => 'Testo privacy',
          'type' => 'markup',
          'value' => '<p>Ai sensi dell’art. 13, D.Lgs. n. 193/2003, Vi informiamo che i dati personali che verranno raccolti da I.E.S. Srl, così come quelli eventualmente già acquisiti in quanto pubblici o resi liberamente disponibili al pubblico, verranno trattati allo scopo precipuo di verificare la possibilità di un rapporto commerciale e di predisporre, ove di Vostro interesse, un’offerta economica. Naturalmente, essi verranno utilizzati anche qualora, accettata la nostra offerta, si instaurasse un rapporto contrattuale.</p>

<p>I dati raccolti saranno gestiti sia in forma cartacea che informatica / telematica.<br />
Indipendentemente dall’esito dell’attuale contatto, informiamo che i dati verranno conservati per mesi 12 (dodici), anche al fine di verificare future possibilità di reciproco interesse.<br />
All’interno della Società, i soggetti che, incaricati del trattamento, possono venire a conoscenza dei dati che Vi riguardano, in quanto preposti all’esecuzione delle operazioni per le finalità suddette, sono principalmente gli addetti dell’area commerciale della Società.<br />
Il diritto di accedere ai propri dati personali, di chiederne la rettifica, l’aggiornamento e la cancellazione, se incompleti o erronei, nonché di opporsi al loro trattamento, ai sensi degli artt. 7-10 del Codice Privacy, potrà essere esercitato rivolgendosi al Responsabile Aziendale del Trattamento, reperibile presso la sede I.E.S. Srl.<br />
Il rifiuto del trattamento dei Vostri dati purtroppo preclude la predisposizione dell’offerta.</p>
',
          'extra' => array(
            'conditional_operator' => '=',
            'format' => 'editor',
            'private' => 0,
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => 0,
          'weight' => 5,
          'page_num' => 1,
        ),
        6 => array(
          'nid' => 4,
          'cid' => 6,
          'pid' => 0,
          'form_key' => 'informativa_privacy',
          'name' => 'Informativa privacy',
          'type' => 'select',
          'value' => '',
          'extra' => array(
            'items' => '1|Acconsento',
            'multiple' => 0,
            'title_display' => 'before',
            'private' => 0,
            'aslist' => 0,
            'optrand' => 0,
            'conditional_operator' => '=',
            'other_option' => NULL,
            'other_text' => 'Other...',
            'description' => '',
            'custom_keys' => FALSE,
            'options_source' => '',
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => 1,
          'weight' => 6,
          'page_num' => 1,
        ),
      ),
    ),
  );
  $entities['speedysito_content_export'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/37ed9268-6a86-47f7-bc35-d730d746c883',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'editor',
          'summary' => '',
          'value' => '<h2>SpeedySito Basic</h2>

<p>Il pacchetto BASIC è tutto quello che serve al libero professionista e alla piccola impresa per iniziare a muovere i suoi primi passi nella rete.</p>

<p>Ha già tutto quello che serve: un dominio a scelta (.it, .com, .net...) compreso nel prezzo, uno spazio web e mail da 1GB per contenere tutti i vostri dati, e una serie di moduli accessori tra i più richiesti.</p>

<p>Inoltre è semplicissimo da creare e da aggiornare grazie alla struttura precaricata, che dovrete solo completare con le vostre informazioni.</p>

<h3>Funzionalità incluse</h3>

<ul>
	<li>Registrazione del dominio</li>
	<li>Mail illimitate</li>
	<li>Spazio Web+Mail 1 GB</li>
	<li>Gestione menù completamente personalizzata</li>
	<li>Gestione dei contenuti avanzata con editor grafico (aggiungi/rimuovi/modifica le pagine del sito senza limiti)</li>
	<li>Gestione degli allegati</li>
	<li>Disposizione dei contenuti personalizzabile</li>
	<li>Aspetto grafico personalizzabile</li>
	<li>Backup, Restore e Migrazione del sito</li>
</ul>

<h3>Servizi opzionali</h3>

<ul>
	<li>Creazione Logo ed immagine coordinata</li>
	<li>Ottimizzazione foto e video</li>
	<li>Creazione testi</li>
	<li>Piano di visibilità web</li>
	<li>Creazione, gestione ed animazione di pagine dedicata sui Social Network (Facebook, You Tube etc.)</li>
</ul>
',
        ),
      ),
    ),
    'comment' => 0,
    'language' => 'it',
    'log' => '',
    'page_title' => 'SpeedySito Basic',
    'promote' => 1,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Muovi i primi passi nella rete con la versione BASIC',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'main_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'prodotto/speedysito-basic',
        'language' => 'it',
      ),
    ),
    'uuid' => '37ed9268-6a86-47f7-bc35-d730d746c883',
  );
  $entities['speedysito_content_export'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/39a2637e-5c2d-4359-9e82-a7d8bc57577c',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'editor',
          'summary' => '',
          'value' => '<h2>SpeedySito Professional</h2>

<p>Il pacchetto PROFESSIONAL è quello che offre il miglior rapporto qualità / prezzo per una presenza web significativa.</p>

<p>Ha tutti i servizi previsti dal pacchetto BASIC, più alcuni servizi avanzati, quali l\'utilizzo del protocollo ftp per trasferire i file, e la possibilità di personalizzare i moduli aggiuntivi. Questi ultimi vi permetteranno di personalizzare il sito implementando funzionalità specifiche (ad esempio, forum, blog, news, gallerie di immagini...).</p>

<h3>Funzionalità incluse</h3>

<ul>
	<li>Registrazione del dominio</li>
	<li>Mail illimitate</li>
	<li>Spazio Web+Mail 3 GB</li>
	<li>Servizio FTP</li>
	<li>Personalizzazione su misura dei moduli</li>
	<li>Gestione menù completamente personalizzata</li>
	<li>Gestione dei contenuti avanzata con editor grafico (aggiungi/rimuovi/modifica le pagine del sito senza limiti)</li>
	<li>Gestione degli allegati</li>
	<li>Disposizione dei contenuti personalizzabile</li>
	<li>Aspetto grafico personalizzabile</li>
	<li>Backup, Restore e Migrazione del sito</li>
</ul>

<h3>Servizi Opzionali</h3>

<ul>
	<li>Creazione Logo ed immagine coordinata</li>
	<li>Ottimizzazione foto e video</li>
	<li>Creazione testi</li>
	<li>Piano di visibilità web</li>
	<li>Creazione, gestione ed animazione di pagine dedicata sui Social Network (Facebook, You Tube etc.)</li>
</ul>
',
        ),
      ),
    ),
    'comment' => 0,
    'language' => 'it',
    'log' => '',
    'page_title' => 'SpeedySito Professional',
    'promote' => 1,
    'status' => 1,
    'sticky' => 0,
    'title' => 'SpeedySito Professional',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'main_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'prodotto/speedysito-professional',
        'language' => 'it',
      ),
    ),
    'uuid' => '39a2637e-5c2d-4359-9e82-a7d8bc57577c',
  );
  $entities['speedysito_content_export'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/cc6e7d9e-3697-4f2b-aa1e-84f0fbd6ff1f',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'editor',
          'summary' => '',
          'value' => '<h2>SpeedySito Enterprise</h2>

<p>Il pacchetto ENTERPRISE è la soluzione ideale, tutto compreso, per la media e la grande impresa.</p>

<p>La possibilità di personalizzare ogni ambito del sito, il servizio ftp prioritario, la banda illimitata e l\'assistenza dedicata, con risposta immediata alle proprie richieste, ne fanno la scelta ottimale per i siti professionali, ad alto volume di traffico e di accesso.</p>

<p>Mantenendo soprattutto la semplicità operativa che caratterizza tutte le nostre soluzioni.</p>

<h3><br />
Funzionalità incluse</h3>

<ul>
	<li>Registrazione del dominio</li>
	<li>Mail illimitate</li>
	<li>Spazio Web+Mail 6 GB</li>
	<li>Servizio FTP</li>
	<li>Personalizzazione su misura dei moduli</li>
	<li>Gestione menù completamente personalizzata</li>
	<li>Gestione dei contenuti avanzata con editor grafico (aggiungi/rimuovi/modifica le pagine del sito senza limiti)</li>
	<li>Gestione degli allegati</li>
	<li>Disposizione dei contenuti personalizzabile</li>
	<li>Aspetto grafico personalizzabile</li>
	<li>Backup, Restore e Migrazione del sito</li>
	<li>Servizio SSH per accesso da terminale</li>
</ul>

<h3>Servizi Opzionali</h3>

<ul>
	<li>Creazione Logo ed immagine coordinata</li>
	<li>Ottimizzazione foto e video</li>
	<li>Creazione testi</li>
	<li>Piano di visibilità web</li>
	<li>Creazione, gestione ed animazione di pagine dedicata sui Social Network (Facebook, You Tube etc.)</li>
</ul>
',
        ),
      ),
    ),
    'comment' => 0,
    'language' => 'it',
    'log' => '',
    'page_title' => 'SpeedySito Enterprise',
    'promote' => 1,
    'status' => 1,
    'sticky' => 0,
    'title' => 'Nessun limite alle potenzialità del tuo sito',
    'tnid' => 0,
    'translate' => 0,
    'type' => 'main_page',
    'uid' => 1,
    'url_alias' => array(
      0 => array(
        'alias' => 'prodotto/speedysito-enterprise',
        'language' => 'it',
      ),
    ),
    'uuid' => 'cc6e7d9e-3697-4f2b-aa1e-84f0fbd6ff1f',
  );

  return $entities;
}
