<?php
/**
 * @file
 * jwd_bmw_product_display.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function jwd_bmw_product_display_taxonomy_default_vocabularies() {
  return array(
    'produktkategorien_bmw' => array(
      'name' => 'Produktkategorien BMW',
      'machine_name' => 'produktkategorien_bmw',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
