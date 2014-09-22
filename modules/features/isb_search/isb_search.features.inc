<?php
/**
 * @file
 * isb_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function isb_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_search_api_index().
 */
function isb_search_default_search_api_index() {
  $items = array();
  $items['default_node_index'] = entity_import('search_api_index', '{
    "name" : "Default node index",
    "machine_name" : "default_node_index",
    "description" : "An automatically created search index for indexing node data. Might be configured to specific needs.",
    "server" : null,
    "item_type" : "node",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "data_alter_callbacks" : { "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] } },
      "processors" : {
        "search_api_case_ignore" : { "status" : 1, "weight" : "0", "settings" : { "strings" : 0 } },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\nh2 = 3\\nh3 = 2\\nstrong = 2\\nb = 2\\nem = 1.5\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 1,
          "weight" : "20",
          "settings" : { "spaces" : "[^\\\\p{L}\\\\p{N}]", "ignorable" : "[-]" }
        }
      },
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "body:value" : { "type" : "text" },
        "changed" : { "type" : "date" },
        "comment_count" : { "type" : "integer" },
        "created" : { "type" : "date" },
        "promote" : { "type" : "boolean" },
        "search_api_language" : { "type" : "string" },
        "sticky" : { "type" : "boolean" },
        "title" : { "type" : "text", "boost" : "5.0" },
        "type" : { "type" : "string" }
      }
    },
    "enabled" : "0",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function isb_search_default_search_api_server() {
  $items = array();
  $items['database_server'] = entity_import('search_api_server', '{
    "name" : "Database server",
    "machine_name" : "database_server",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "2",
      "partial_matches" : 0,
      "indexes" : { "standards_library" : {
          "title" : {
            "table" : "search_api_db_standards_library_text",
            "type" : "text",
            "boost" : "5.0",
            "column" : "title"
          },
          "field_controlled_list_labels" : {
            "table" : "search_api_db_standards_library",
            "column" : "field_controlled_list_labels",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_controlled_list_values" : {
            "table" : "search_api_db_standards_library_field_controlled_list_values",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_standard_category" : {
            "table" : "search_api_db_standards_library_field_standard_category",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_standard_identifier" : {
            "table" : "search_api_db_standards_library_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_standard_status" : {
            "table" : "search_api_db_standards_library",
            "column" : "field_standard_status",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_standard_type" : {
            "table" : "search_api_db_standards_library",
            "column" : "field_standard_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_audience" : {
            "table" : "search_api_db_standards_library_field_audience",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_standard_version" : {
            "table" : "search_api_db_standards_library",
            "column" : "field_standard_version",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "field_entities" : {
            "table" : "search_api_db_standards_library_field_entities",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_bda_version" : {
            "table" : "search_api_db_standards_library",
            "column" : "field_bda_version",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_standards_library",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_standards_library_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_annexes:value" : {
            "table" : "search_api_db_standards_library_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_changes_previous_version:value" : {
            "table" : "search_api_db_standards_library_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_introduction:value" : {
            "table" : "search_api_db_standards_library_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_notes:value" : {
            "table" : "search_api_db_standards_library_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_references:value" : {
            "table" : "search_api_db_standards_library_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_standards_library",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_standards_library",
            "column" : "changed",
            "type" : "date",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_standards_library",
            "column" : "author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "url" : {
            "table" : "search_api_db_standards_library",
            "column" : "url",
            "type" : "string",
            "boost" : "1.0"
          },
          "search_api_aggregation_1" : {
            "table" : "search_api_db_standards_library_text",
            "type" : "text",
            "boost" : "3.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
