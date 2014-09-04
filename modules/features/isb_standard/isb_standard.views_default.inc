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

  return $export;
}
