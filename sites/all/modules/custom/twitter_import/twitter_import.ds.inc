<?php
/**
 * @file
 * twitter_import.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function twitter_import_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|twitter_message|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'twitter_message';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_twitter_icon',
      ),
      'right' => array(
        1 => 'post_date',
        2 => 'field_twitter_body',
      ),
    ),
    'fields' => array(
      'field_twitter_icon' => 'left',
      'post_date' => 'right',
      'field_twitter_body' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
  );
  $export['node|twitter_message|default'] = $ds_layout;

  return $export;
}
