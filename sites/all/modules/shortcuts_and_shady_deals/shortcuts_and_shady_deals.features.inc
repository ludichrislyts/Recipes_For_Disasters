<?php
/**
 * @file
 * shortcuts_and_shady_deals.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function shortcuts_and_shady_deals_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function shortcuts_and_shady_deals_node_info() {
  $items = array(
    'shortcuts_and_shady_deals' => array(
      'name' => t('Shortcuts and Shady Deals'),
      'base' => 'node_content',
      'description' => t('Your tips and tricks'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
