<?php
/**
 * @file
 * delicious_import.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function delicious_import_ctools_plugin_api() {
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
function delicious_import_node_info() {
  $items = array(
    'delicious_link' => array(
      'name' => t('Delicious Link'),
      'base' => 'node_content',
      'description' => t('Delicious links imported from Feeds via JSON parser.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
