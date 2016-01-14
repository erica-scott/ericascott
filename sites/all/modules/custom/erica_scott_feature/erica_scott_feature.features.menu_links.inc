<?php
/**
 * @file
 * erica_scott_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function erica_scott_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_contact-me:http://ericascott.dd:8083/contact.
  $menu_links['main-menu_contact-me:http://ericascott.dd:8083/contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://ericascott.dd:8083/contact',
    'router_path' => '',
    'link_title' => 'Contact Me',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contact-me:http://ericascott.dd:8083/contact',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: navigation_search:search.
  $menu_links['navigation_search:search'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'search',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'identifier' => 'navigation_search:search',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Me');
  t('Home');
  t('Search');

  return $menu_links;
}
