<?php
/**
 * @file
 * isb_standard.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function isb_standard_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'standards';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Standards';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Standards';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Standard Type */
  $handler->display->display_options['fields']['field_standard_type']['id'] = 'field_standard_type';
  $handler->display->display_options['fields']['field_standard_type']['table'] = 'field_data_field_standard_type';
  $handler->display->display_options['fields']['field_standard_type']['field'] = 'field_standard_type';
  /* Field: Content: Standard identifier */
  $handler->display->display_options['fields']['field_standard_identifier']['id'] = 'field_standard_identifier';
  $handler->display->display_options['fields']['field_standard_identifier']['table'] = 'field_data_field_standard_identifier';
  $handler->display->display_options['fields']['field_standard_identifier']['field'] = 'field_standard_identifier';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_standard_status']['id'] = 'field_standard_status';
  $handler->display->display_options['fields']['field_standard_status']['table'] = 'field_data_field_standard_status';
  $handler->display->display_options['fields']['field_standard_status']['field'] = 'field_standard_status';
  /* Field: Content: Version */
  $handler->display->display_options['fields']['field_standard_version']['id'] = 'field_standard_version';
  $handler->display->display_options['fields']['field_standard_version']['table'] = 'field_data_field_standard_version';
  $handler->display->display_options['fields']['field_standard_version']['field'] = 'field_standard_version';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_standard_category']['id'] = 'field_standard_category';
  $handler->display->display_options['fields']['field_standard_category']['table'] = 'field_data_field_standard_category';
  $handler->display->display_options['fields']['field_standard_category']['field'] = 'field_standard_category';
  $handler->display->display_options['fields']['field_standard_category']['delta_offset'] = '0';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'standard' => 'standard',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Category (field_standard_category) */
  $handler->display->display_options['filters']['field_standard_category_value']['id'] = 'field_standard_category_value';
  $handler->display->display_options['filters']['field_standard_category_value']['table'] = 'field_data_field_standard_category';
  $handler->display->display_options['filters']['field_standard_category_value']['field'] = 'field_standard_category_value';
  $handler->display->display_options['filters']['field_standard_category_value']['group'] = 1;
  $handler->display->display_options['filters']['field_standard_category_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_standard_category_value']['expose']['operator_id'] = 'field_standard_category_value_op';
  $handler->display->display_options['filters']['field_standard_category_value']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_standard_category_value']['expose']['operator'] = 'field_standard_category_value_op';
  $handler->display->display_options['filters']['field_standard_category_value']['expose']['identifier'] = 'field_standard_category_value';
  $handler->display->display_options['filters']['field_standard_category_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Standard Type (field_standard_type) */
  $handler->display->display_options['filters']['field_standard_type_value']['id'] = 'field_standard_type_value';
  $handler->display->display_options['filters']['field_standard_type_value']['table'] = 'field_data_field_standard_type';
  $handler->display->display_options['filters']['field_standard_type_value']['field'] = 'field_standard_type_value';
  $handler->display->display_options['filters']['field_standard_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_standard_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_standard_type_value']['expose']['operator_id'] = 'field_standard_type_value_op';
  $handler->display->display_options['filters']['field_standard_type_value']['expose']['label'] = 'Standard Type';
  $handler->display->display_options['filters']['field_standard_type_value']['expose']['operator'] = 'field_standard_type_value_op';
  $handler->display->display_options['filters']['field_standard_type_value']['expose']['identifier'] = 'field_standard_type_value';
  $handler->display->display_options['filters']['field_standard_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Status (field_standard_status) */
  $handler->display->display_options['filters']['field_standard_status_value']['id'] = 'field_standard_status_value';
  $handler->display->display_options['filters']['field_standard_status_value']['table'] = 'field_data_field_standard_status';
  $handler->display->display_options['filters']['field_standard_status_value']['field'] = 'field_standard_status_value';
  $handler->display->display_options['filters']['field_standard_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_standard_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_standard_status_value']['expose']['operator_id'] = 'field_standard_status_value_op';
  $handler->display->display_options['filters']['field_standard_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_standard_status_value']['expose']['operator'] = 'field_standard_status_value_op';
  $handler->display->display_options['filters']['field_standard_status_value']['expose']['identifier'] = 'field_standard_status_value';
  $handler->display->display_options['filters']['field_standard_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['standards'] = $view;

  $view = new view();
  $view->name = 'standards_library';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_standards_library';
  $view->human_name = 'Standards library';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Standards library';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_standards_library';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Standard identifier */
  $handler->display->display_options['fields']['field_standard_identifier']['id'] = 'field_standard_identifier';
  $handler->display->display_options['fields']['field_standard_identifier']['table'] = 'search_api_index_standards_library';
  $handler->display->display_options['fields']['field_standard_identifier']['field'] = 'field_standard_identifier';
  $handler->display->display_options['fields']['field_standard_identifier']['label'] = 'Identifier';
  /* Field: Indexed Node: Standard Type */
  $handler->display->display_options['fields']['field_standard_type']['id'] = 'field_standard_type';
  $handler->display->display_options['fields']['field_standard_type']['table'] = 'search_api_index_standards_library';
  $handler->display->display_options['fields']['field_standard_type']['field'] = 'field_standard_type';
  $handler->display->display_options['fields']['field_standard_type']['label'] = 'Type';
  /* Field: Indexed Node: Status */
  $handler->display->display_options['fields']['field_standard_status']['id'] = 'field_standard_status';
  $handler->display->display_options['fields']['field_standard_status']['table'] = 'search_api_index_standards_library';
  $handler->display->display_options['fields']['field_standard_status']['field'] = 'field_standard_status';
  /* Field: Indexed Node: Version */
  $handler->display->display_options['fields']['field_standard_version']['id'] = 'field_standard_version';
  $handler->display->display_options['fields']['field_standard_version']['table'] = 'search_api_index_standards_library';
  $handler->display->display_options['fields']['field_standard_version']['field'] = 'field_standard_version';
  $handler->display->display_options['fields']['field_standard_version']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '1',
    'prefix_suffix' => 1,
  );
  /* Field: Indexed Node: Introduction */
  $handler->display->display_options['fields']['field_introduction']['id'] = 'field_introduction';
  $handler->display->display_options['fields']['field_introduction']['table'] = 'search_api_index_standards_library';
  $handler->display->display_options['fields']['field_introduction']['field'] = 'field_introduction';
  $handler->display->display_options['fields']['field_introduction']['label'] = '';
  $handler->display->display_options['fields']['field_introduction']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_introduction']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_introduction']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['field_introduction']['settings'] = array(
    'trim_length' => '300',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'trim_options' => array(
      'text' => 'text',
    ),
  );
  /* Field: Search: Excerpt */
  $handler->display->display_options['fields']['search_api_excerpt']['id'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['table'] = 'search_api_index_standards_library';
  $handler->display->display_options['fields']['search_api_excerpt']['field'] = 'search_api_excerpt';
  $handler->display->display_options['fields']['search_api_excerpt']['label'] = '';
  $handler->display->display_options['fields']['search_api_excerpt']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['search_api_excerpt']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['search_api_excerpt']['empty'] = '[field_introduction]';
  $handler->display->display_options['fields']['search_api_excerpt']['link_to_entity'] = 0;
  /* Sort criterion: Indexed Node: BDA Version */
  $handler->display->display_options['sorts']['field_bda_version']['id'] = 'field_bda_version';
  $handler->display->display_options['sorts']['field_bda_version']['table'] = 'search_api_index_standards_library';
  $handler->display->display_options['sorts']['field_bda_version']['field'] = 'field_bda_version';
  $handler->display->display_options['sorts']['field_bda_version']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_bda_version']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_bda_version']['expose']['label'] = 'BDA Version';
  /* Sort criterion: Indexed Node: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_standards_library';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['sorts']['changed']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['changed']['expose']['label'] = 'Date changed';
  /* Sort criterion: Indexed Node: Date created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'search_api_index_standards_library';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['created']['expose']['label'] = 'Date created';
  /* Sort criterion: Indexed Node: Standard Type */
  $handler->display->display_options['sorts']['field_standard_type']['id'] = 'field_standard_type';
  $handler->display->display_options['sorts']['field_standard_type']['table'] = 'search_api_index_standards_library';
  $handler->display->display_options['sorts']['field_standard_type']['field'] = 'field_standard_type';
  $handler->display->display_options['sorts']['field_standard_type']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_standard_type']['expose']['label'] = 'Standard Type';
  /* Sort criterion: Indexed Node: Status */
  $handler->display->display_options['sorts']['field_standard_status']['id'] = 'field_standard_status';
  $handler->display->display_options['sorts']['field_standard_status']['table'] = 'search_api_index_standards_library';
  $handler->display->display_options['sorts']['field_standard_status']['field'] = 'field_standard_status';
  $handler->display->display_options['sorts']['field_standard_status']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_standard_status']['expose']['label'] = 'Status';
  /* Sort criterion: Indexed Node: Version */
  $handler->display->display_options['sorts']['field_standard_version']['id'] = 'field_standard_version';
  $handler->display->display_options['sorts']['field_standard_version']['table'] = 'search_api_index_standards_library';
  $handler->display->display_options['sorts']['field_standard_version']['field'] = 'field_standard_version';
  $handler->display->display_options['sorts']['field_standard_version']['order'] = 'DESC';
  $handler->display->display_options['sorts']['field_standard_version']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_standard_version']['expose']['label'] = 'Version';
  /* Sort criterion: Search: Relevance */
  $handler->display->display_options['sorts']['search_api_relevance']['id'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['table'] = 'search_api_index_standards_library';
  $handler->display->display_options['sorts']['search_api_relevance']['field'] = 'search_api_relevance';
  $handler->display->display_options['sorts']['search_api_relevance']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['search_api_relevance']['expose']['label'] = 'Relevance';
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_standards_library';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Keywords';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'standards';
  $export['standards_library'] = $view;

  return $export;
}
