<?php
/**
 * @file
 * isb_standard.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function isb_standard_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function isb_standard_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function isb_standard_node_info() {
  $items = array(
    'standard' => array(
      'name' => t('Standard'),
      'base' => 'node_content',
      'description' => t('A standard defines a set of criteria, rules or guidelines to be used for common and repeated use. Standards are established by consensus and approved by a recognised body.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function isb_standard_default_search_api_index() {
  $items = array();
  $items['standards_library'] = entity_import('search_api_index', '{
    "name" : "Standards library",
    "machine_name" : "standards_library",
    "description" : null,
    "server" : "database_server",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_annexes:value" : { "type" : "text" },
        "field_audience" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_bda_version" : { "type" : "decimal" },
        "field_changes_previous_version:value" : { "type" : "text" },
        "field_controlled_list_labels" : { "type" : "integer", "entity_type" : "field_collection_item" },
        "field_controlled_list_values" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_entities" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_introduction:value" : { "type" : "text" },
        "field_notes:value" : { "type" : "text" },
        "field_references:value" : { "type" : "text" },
        "field_standard_category" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_standard_identifier" : { "type" : "text" },
        "field_standard_status" : { "type" : "integer" },
        "field_standard_type" : { "type" : "string" },
        "field_standard_version" : { "type" : "decimal" },
        "search_api_aggregation_1" : { "type" : "text", "boost" : "3.0" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "url" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "bundles" : { "standard" : "standard" } }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "search_api_aggregation_1" : {
                "name" : "Title - Fulltext",
                "type" : "fulltext",
                "fields" : [
                  "title",
                  "field_standard_identifier",
                  "field_standard_type",
                  "field_bda_version",
                  "body:value",
                  "field_annexes:value",
                  "field_changes_previous_version:value",
                  "field_introduction:value",
                  "field_notes:value",
                  "field_references:value"
                ],
                "description" : "A Fulltext aggregation of the following fields: Title, Standard identifier, Standard Type, BDA Version, The main body text \\u00bb Text, Annexes \\u00bb Text, Changes from previous version \\u00bb Text, Introduction \\u00bb Text, Notes \\u00bb Text, References \\u00bb Text."
              }
            }
          }
        }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true, "field_standard_identifier" : true } }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true, "field_standard_identifier" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : {
            "fields" : { "field_standard_identifier" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 1,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "field_standard_identifier" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}
