<?php
/**
 * @file
 * content_feed_view.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function content_feed_view_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-feed-filter.
  $menus['menu-feed-filter'] = array(
    'menu_name' => 'menu-feed-filter',
    'title' => 'Feed Filter',
    'description' => 'Links to filter what is shown on the feed',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Feed Filter');
  t('Links to filter what is shown on the feed');


  return $menus;
}
