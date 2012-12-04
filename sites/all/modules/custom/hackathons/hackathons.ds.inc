<?php
/**
 * @file
 * hackathons.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function hackathons_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|hack_project|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'hack_project';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_project_screenshot',
        2 => 'field_project_description',
        3 => 'hackathons_project_info',
        4 => 'field_live_project_link',
        5 => 'field_github_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_project_screenshot' => 'ds_content',
      'field_project_description' => 'ds_content',
      'hackathons_project_info' => 'ds_content',
      'field_live_project_link' => 'ds_content',
      'field_github_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|hack_project|default'] = $ds_layout;

  return $export;
}
