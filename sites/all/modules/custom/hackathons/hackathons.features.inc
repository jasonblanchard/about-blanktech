<?php
/**
 * @file
 * hackathons.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function hackathons_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function hackathons_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function hackathons_node_info() {
  $items = array(
    'hack_project' => array(
      'name' => t('Hack Project'),
      'base' => 'node_content',
      'description' => t('Hacks, hackathon projects, and other hack-ey things'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
