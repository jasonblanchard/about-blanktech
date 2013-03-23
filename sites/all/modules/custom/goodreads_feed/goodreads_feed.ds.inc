<?php
/**
 * @file
 * goodreads_feed.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function goodreads_feed_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|goodreads_book|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'goodreads_book';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_goodreads_image_url',
      ),
      'right' => array(
        1 => 'field_book_name',
        2 => 'field_goodreads_link',
      ),
    ),
    'fields' => array(
      'field_goodreads_image_url' => 'left',
      'field_book_name' => 'right',
      'field_goodreads_link' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|goodreads_book|default'] = $ds_layout;

  return $export;
}
