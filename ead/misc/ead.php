<?php

$xml_file = simplexml_load_file('allead.xml');

foreach ($xml_file->ead as $record) {

  $ead = $record->asXML();

  $xslt = new XSLTProcessor();
  $xsl = new DOMDocument;
  $xsl->load('eadprint-su.xsl');
  $xslt->importStyleSheet($xsl);

  $xml = new DOMDocument;
  $xml->loadXML($ead);
  $result = $xslt->transformToXML($xml);

  echo $result;
  echo "Finding Aid End<br />";
}


?>


