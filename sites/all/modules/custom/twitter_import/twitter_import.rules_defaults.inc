<?php
/**
 * @file
 * twitter_import.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function twitter_import_default_rules_configuration() {
  $items = array();
  $items['rules_saving_twitter_messages'] = entity_import('rules_config', '{ "rules_saving_twitter_messages" : {
      "LABEL" : "Saving Twitter Messages",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules" ],
      "ON" : [ "node_presave" ],
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "twitter_message" : "twitter_message" } }
          }
        },
        { "text_matches" : {
            "text" : [ "node:field-twitter-body:value" ],
            "match" : "@",
            "operation" : "starts"
          }
        }
      ],
      "DO" : [ { "node_unpublish" : { "node" : [ "node" ] } } ]
    }
  }');
  return $items;
}
