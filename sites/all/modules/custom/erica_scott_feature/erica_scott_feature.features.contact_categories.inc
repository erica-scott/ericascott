<?php
/**
 * @file
 * erica_scott_feature.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function erica_scott_feature_contact_categories_defaults() {
  return array(
    'Website feedback' => array(
      'category' => 'Website feedback',
      'recipients' => 'erica@appnovation.com',
      'reply' => '',
      'weight' => 0,
      'selected' => 1,
      'page_title' => NULL,
      'page_info' => NULL,
    ),
  );
}
