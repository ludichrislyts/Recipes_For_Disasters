<?php
/**
 * @file
 * news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('Read about how Recipes for Disasters saves lives'),
      'has_title' => '1',
      'title_label' => t('Latest Accountings'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
