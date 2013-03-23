<?php
/**
 * @file
 * goodreads_feed.custom_formatters.inc
 */

/**
 * Implements hook_custom_formatters_defaults().
 */
function goodreads_feed_custom_formatters_defaults() {
  $export = array();

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'goodreads_book_cover';
  $formatter->label = 'Goodreads Book Cover';
  $formatter->description = '';
  $formatter->mode = 'token';
  $formatter->field_types = 'text';
  $formatter->code = '<img src=\'[node:field_goodreads_image_url]\'>';
  $formatter->fapi = '';
  $export['goodreads_book_cover'] = $formatter;

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'goodreads_title_with_link';
  $formatter->label = 'Goodreads Title';
  $formatter->description = '';
  $formatter->mode = 'token';
  $formatter->field_types = 'text';
  $formatter->code = '<h3>[node:field_book_name]</h3>';
  $formatter->fapi = '';
  $export['goodreads_title_with_link'] = $formatter;

  return $export;
}
