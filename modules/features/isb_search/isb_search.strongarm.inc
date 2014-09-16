<?php
/**
 * @file
 * isb_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function isb_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_facets_search_ids';
  $strongarm->value = array(
    'standards_library' => array(
      'search_api_views:standards_library:page' => 'search_api_views:standards_library:page',
      'search_api_views:standards_library:block' => 'search_api_views:standards_library:block',
    ),
  );
  $export['search_api_facets_search_ids'] = $strongarm;

  return $export;
}
