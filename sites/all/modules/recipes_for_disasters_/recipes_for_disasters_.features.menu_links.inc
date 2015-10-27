<?php
/**
 * @file
 * recipes_for_disasters_.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function recipes_for_disasters__menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_recipes-for-disasters:node/add/recipes-for-disasters-.
  $menu_links['navigation_recipes-for-disasters:node/add/recipes-for-disasters-'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/recipes-for-disasters-',
    'router_path' => 'node/add',
    'link_title' => 'Recipes (for Disasters)',
    'options' => array(
      'attributes' => array(
        'title' => 'Recipes for Disasters',
      ),
      'identifier' => 'navigation_recipes-for-disasters:node/add/recipes-for-disasters-',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Recipes (for Disasters)');

  return $menu_links;
}
