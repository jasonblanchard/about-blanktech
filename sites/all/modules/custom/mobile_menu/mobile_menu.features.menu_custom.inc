<?php
/**
 * @file
 * mobile_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function mobile_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-mobile-main-menu.
  $menus['menu-mobile-main-menu'] = array(
    'menu_name' => 'menu-mobile-main-menu',
    'title' => 'Mobile Main Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Mobile Main Menu');


  return $menus;
}
