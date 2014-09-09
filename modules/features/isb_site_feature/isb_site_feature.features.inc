<?php
/**
 * @file
 * isb_site_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function isb_site_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if (($module == 'panels' && $api == 'layouts') ||
    ($module == 'page_manager' && $api == 'pages_default')) {
    return array('version' => 1);
  }
}
