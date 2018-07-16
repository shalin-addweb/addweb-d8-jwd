<?php
/**
 * @file
 * jwd_%machine_name%_product_display.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function jwd_%machine_name%_product_display_taxonomy_default_vocabularies() {
  return array(
    'produktkategorien_%machine_name%' => array(
      'name' => 'Produktkategorien %name%',
      'machine_name' => 'produktkategorien_%machine_name%',
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
