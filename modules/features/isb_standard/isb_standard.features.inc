<?php
/**
 * @file
 * isb_standard.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function isb_standard_ctools_plugin_api($module = NULL, $api = NULL) {
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
