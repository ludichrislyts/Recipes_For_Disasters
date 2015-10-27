<?php
/**
 * @file
 * recipes_for_disasters_.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function recipes_for_disasters__ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function recipes_for_disasters__node_info() {
  $items = array(
    'recipes_for_disasters_' => array(
      'name' => t('Recipes (for Disasters)'),
      'base' => 'node_content',
      'description' => t('Recipes for Disasters'),
      'has_title' => '1',
      'title_label' => t('Recipes'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
