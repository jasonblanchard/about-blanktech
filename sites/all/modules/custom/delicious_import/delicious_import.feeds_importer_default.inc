<?php
/**
 * @file
 * delicious_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function delicious_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'delicious_links';
  $feeds_importer->config = array(
    'name' => 'Delicious Links',
    'description' => 'Imports delicious links from JSON REST API',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsJSONPathParser',
      'config' => array(
        'context' => '$.*',
        'sources' => array(
          'jsonpath_parser:0' => 'd',
          'jsonpath_parser:2' => 'u',
          'jsonpath_parser:3' => 't[*]',
          'jsonpath_parser:4' => 'dt',
        ),
        'debug' => array(
          'options' => array(
            'context' => 'context',
            'jsonpath_parser:0' => 'jsonpath_parser:0',
            'jsonpath_parser:2' => 'jsonpath_parser:2',
            'jsonpath_parser:3' => 0,
            'jsonpath_parser:4' => 0,
          ),
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'delicious_link',
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'jsonpath_parser:0',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'jsonpath_parser:2',
            'target' => 'field_delicious_url:url',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'jsonpath_parser:3',
            'target' => 'field_tags',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'jsonpath_parser:4',
            'target' => 'created',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['delicious_links'] = $feeds_importer;

  return $export;
}
