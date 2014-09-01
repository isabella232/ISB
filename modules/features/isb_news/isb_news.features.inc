<?php
/**
 * @file
 * featured_news.features.inc
 */

/**
 * Implementation of hook_views_api().
 */
function isb_news_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implementation of hook_node_info().
 */
function isb_news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News post'),
      'base' => 'node_content',
      'description' => t('News item'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
