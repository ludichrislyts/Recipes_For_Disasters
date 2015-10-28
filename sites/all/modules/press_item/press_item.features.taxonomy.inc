<?php
/**
 * @file
 * press_item.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function press_item_taxonomy_default_vocabularies() {
  return array(
    'wrarora' => array(
      'name' => 'wrarora',
      'machine_name' => 'wrarora',
      'description' => 'description of wrarora',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 2,
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
