<?php
/**
 * @file
 * twitter_import.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function twitter_import_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "custom_formatters" && $api == "custom_formatters") {
    return array("version" => "2");
  }
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
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
function twitter_import_node_info() {
  $items = array(
    'twitter_message' => array(
      'name' => t('Twitter Message'),
      'base' => 'node_content',
      'description' => t('Twitter message imported from JSON via Feeds'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
