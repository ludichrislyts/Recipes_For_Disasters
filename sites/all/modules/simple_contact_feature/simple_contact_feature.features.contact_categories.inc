<?php
/**
 * @file
 * simple_contact_feature.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function simple_contact_feature_contact_categories_defaults() {
  return array(
    'Complaints' => array(
      'category' => 'Complaints',
      'recipients' => 'admin@recipesfordisasters.com',
      'reply' => 'Thanks for nothing. We will get back to you at some point.',
      'weight' => 0,
      'selected' => 0,
    ),
    'Website feedback' => array(
      'category' => 'Website feedback',
      'recipients' => 'admin@recipesfordisasters.com',
      'reply' => '',
      'weight' => 0,
      'selected' => 1,
    ),
  );
}
