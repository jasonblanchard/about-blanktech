<?php
/**
 * @file
 * goodreads_feed.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function goodreads_feed_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function goodreads_feed_node_info() {
  $items = array(
    'goodreads_book' => array(
      'name' => t('Goodreads Book'),
      'base' => 'node_content',
      'description' => t('Book imported from goodreads'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
