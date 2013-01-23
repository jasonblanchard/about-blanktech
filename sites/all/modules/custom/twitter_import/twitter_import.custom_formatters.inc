<?php
/**
 * @file
 * twitter_import.custom_formatters.inc
 */

/**
 * Implements hook_custom_formatters_defaults().
 */
function twitter_import_custom_formatters_defaults() {
  $export = array();

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'twitter_icon_link';
  $formatter->label = 'Twitter Icon Link';
  $formatter->description = 'Links twitter icon to the tweet';
  $formatter->mode = 'token';
  $formatter->field_types = 'image';
  $formatter->code = '<a href="http://twitter.com/about__blank/status/[node:field_twitter_uid]" target="_blank"><img src=[node:field_twitter_icon]></a>';
  $formatter->fapi = '';
  $export['twitter_icon_link'] = $formatter;

  return $export;
}
