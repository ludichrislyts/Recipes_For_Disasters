<?php
/**
 * @file
 * press_item.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function press_item_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function press_item_node_info() {
  $items = array(
    'press' => array(
      'name' => t('Press'),
      'base' => 'node_content',
      'description' => t('Things people say about us. Sometimes mean, sometimes ambivalent.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
