<?php
/**
 * @file
 * delicious_import.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function delicious_import_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|delicious_link|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'delicious_link';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'title',
        1 => 'field_delicious_url',
        2 => 'field_tags',
      ),
      'left' => array(
        3 => 'field_delicious_logo',
      ),
    ),
    'fields' => array(
      'title' => 'right',
      'field_delicious_url' => 'right',
      'field_tags' => 'right',
      'field_delicious_logo' => 'left',
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
  $export['node|delicious_link|default'] = $ds_layout;

  return $export;
}
