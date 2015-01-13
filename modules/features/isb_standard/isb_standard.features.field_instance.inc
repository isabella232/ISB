<?php
/**
 * @file
 * isb_standard.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function isb_standard_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'comment-comment_node_standard-comment_body'
  $field_instances['comment-comment_node_standard-comment_body'] = array(
    'bundle' => 'comment_node_standard',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_labels-field_label_1'
  $field_instances['field_collection_item-field_controlled_list_labels-field_label_1'] = array(
    'bundle' => 'field_controlled_list_labels',
    'default_value' => array(
      0 => array(
        'value' => 'Value',
      ),
    ),
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_1',
    'label' => 'Label for column #1',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '1',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_labels-field_label_10'
  $field_instances['field_collection_item-field_controlled_list_labels-field_label_10'] = array(
    'bundle' => 'field_controlled_list_labels',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_10',
    'label' => 'Label for column #10',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '10',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_labels-field_label_11'
  $field_instances['field_collection_item-field_controlled_list_labels-field_label_11'] = array(
    'bundle' => 'field_controlled_list_labels',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_11',
    'label' => 'Label for column #11',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '11',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_labels-field_label_12'
  $field_instances['field_collection_item-field_controlled_list_labels-field_label_12'] = array(
    'bundle' => 'field_controlled_list_labels',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_12',
    'label' => 'Label for column #12',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '12',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_labels-field_label_13'
  $field_instances['field_collection_item-field_controlled_list_labels-field_label_13'] = array(
    'bundle' => 'field_controlled_list_labels',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_13',
    'label' => 'Label for column #13',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '13',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_labels-field_label_14'
  $field_instances['field_collection_item-field_controlled_list_labels-field_label_14'] = array(
    'bundle' => 'field_controlled_list_labels',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_14',
    'label' => 'Label for column #14',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '14',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_labels-field_label_15'
  $field_instances['field_collection_item-field_controlled_list_labels-field_label_15'] = array(
    'bundle' => 'field_controlled_list_labels',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_15',
    'label' => 'Label for column #15',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '15',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_labels-field_label_2'
  $field_instances['field_collection_item-field_controlled_list_labels-field_label_2'] = array(
    'bundle' => 'field_controlled_list_labels',
    'default_value' => array(
      0 => array(
        'value' => 'Description',
      ),
    ),
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_2',
    'label' => 'Label for column #2',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '2',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_labels-field_label_3'
  $field_instances['field_collection_item-field_controlled_list_labels-field_label_3'] = array(
    'bundle' => 'field_controlled_list_labels',
    'default_value' => array(
      0 => array(
        'value' => 'Source',
      ),
    ),
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_3',
    'label' => 'Label for column #3',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '3',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_labels-field_label_4'
  $field_instances['field_collection_item-field_controlled_list_labels-field_label_4'] = array(
    'bundle' => 'field_controlled_list_labels',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_4',
    'label' => 'Label for column #4',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '4',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_labels-field_label_5'
  $field_instances['field_collection_item-field_controlled_list_labels-field_label_5'] = array(
    'bundle' => 'field_controlled_list_labels',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_5',
    'label' => 'Label for column #5',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '5',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_labels-field_label_6'
  $field_instances['field_collection_item-field_controlled_list_labels-field_label_6'] = array(
    'bundle' => 'field_controlled_list_labels',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_6',
    'label' => 'Label for column #6',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '6',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_labels-field_label_7'
  $field_instances['field_collection_item-field_controlled_list_labels-field_label_7'] = array(
    'bundle' => 'field_controlled_list_labels',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_7',
    'label' => 'Label for column #7',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '7',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_labels-field_label_8'
  $field_instances['field_collection_item-field_controlled_list_labels-field_label_8'] = array(
    'bundle' => 'field_controlled_list_labels',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_8',
    'label' => 'Label for column #8',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '8',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_labels-field_label_9'
  $field_instances['field_collection_item-field_controlled_list_labels-field_label_9'] = array(
    'bundle' => 'field_controlled_list_labels',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_9',
    'label' => 'Label for column #9',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '9',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_values-field_column_1'
  $field_instances['field_collection_item-field_controlled_list_values-field_column_1'] = array(
    'bundle' => 'field_controlled_list_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_1',
    'label' => 'Column #1',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '31',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_values-field_column_10'
  $field_instances['field_collection_item-field_controlled_list_values-field_column_10'] = array(
    'bundle' => 'field_controlled_list_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_10',
    'label' => 'Column #10',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '44',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_values-field_column_11'
  $field_instances['field_collection_item-field_controlled_list_values-field_column_11'] = array(
    'bundle' => 'field_controlled_list_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_11',
    'label' => 'Column #11',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '46',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_values-field_column_12'
  $field_instances['field_collection_item-field_controlled_list_values-field_column_12'] = array(
    'bundle' => 'field_controlled_list_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_12',
    'label' => 'Column #12',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '48',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_values-field_column_13'
  $field_instances['field_collection_item-field_controlled_list_values-field_column_13'] = array(
    'bundle' => 'field_controlled_list_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_13',
    'label' => 'Column #13',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '50',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_values-field_column_14'
  $field_instances['field_collection_item-field_controlled_list_values-field_column_14'] = array(
    'bundle' => 'field_controlled_list_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_14',
    'label' => 'Column #14',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '52',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_values-field_column_15'
  $field_instances['field_collection_item-field_controlled_list_values-field_column_15'] = array(
    'bundle' => 'field_controlled_list_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_15',
    'label' => 'Column #15',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '54',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_values-field_column_2'
  $field_instances['field_collection_item-field_controlled_list_values-field_column_2'] = array(
    'bundle' => 'field_controlled_list_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_2',
    'label' => 'Column #2',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '32',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_values-field_column_3'
  $field_instances['field_collection_item-field_controlled_list_values-field_column_3'] = array(
    'bundle' => 'field_controlled_list_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_3',
    'label' => 'Column #3',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '33',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_values-field_column_4'
  $field_instances['field_collection_item-field_controlled_list_values-field_column_4'] = array(
    'bundle' => 'field_controlled_list_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_4',
    'label' => 'Column #4',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '34',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_values-field_column_5'
  $field_instances['field_collection_item-field_controlled_list_values-field_column_5'] = array(
    'bundle' => 'field_controlled_list_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_5',
    'label' => 'Column #5',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '35',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_values-field_column_6'
  $field_instances['field_collection_item-field_controlled_list_values-field_column_6'] = array(
    'bundle' => 'field_controlled_list_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_6',
    'label' => 'Column #6',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '36',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_values-field_column_7'
  $field_instances['field_collection_item-field_controlled_list_values-field_column_7'] = array(
    'bundle' => 'field_controlled_list_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_7',
    'label' => 'Column #7',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '38',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_values-field_column_8'
  $field_instances['field_collection_item-field_controlled_list_values-field_column_8'] = array(
    'bundle' => 'field_controlled_list_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_8',
    'label' => 'Column #8',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '40',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_controlled_list_values-field_column_9'
  $field_instances['field_collection_item-field_controlled_list_values-field_column_9'] = array(
    'bundle' => 'field_controlled_list_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_9',
    'label' => 'Column #9',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '42',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_labels-field_label_1'
  $field_instances['field_collection_item-field_data_definitions_labels-field_label_1'] = array(
    'bundle' => 'field_data_definitions_labels',
    'default_value' => array(
      0 => array(
        'value' => 'Attribute Name',
      ),
    ),
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_1',
    'label' => 'Label for column #1',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '32',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_labels-field_label_10'
  $field_instances['field_collection_item-field_data_definitions_labels-field_label_10'] = array(
    'bundle' => 'field_data_definitions_labels',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_10',
    'label' => 'Label for column #10',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '46',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_labels-field_label_11'
  $field_instances['field_collection_item-field_data_definitions_labels-field_label_11'] = array(
    'bundle' => 'field_data_definitions_labels',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_11',
    'label' => 'Label for column #11',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '47',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_labels-field_label_12'
  $field_instances['field_collection_item-field_data_definitions_labels-field_label_12'] = array(
    'bundle' => 'field_data_definitions_labels',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_12',
    'label' => 'Label for column #12',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '48',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_labels-field_label_13'
  $field_instances['field_collection_item-field_data_definitions_labels-field_label_13'] = array(
    'bundle' => 'field_data_definitions_labels',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_13',
    'label' => 'Label for column #13',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '49',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_labels-field_label_14'
  $field_instances['field_collection_item-field_data_definitions_labels-field_label_14'] = array(
    'bundle' => 'field_data_definitions_labels',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_14',
    'label' => 'Label for column #14',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '50',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_labels-field_label_15'
  $field_instances['field_collection_item-field_data_definitions_labels-field_label_15'] = array(
    'bundle' => 'field_data_definitions_labels',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_15',
    'label' => 'Label for column #15',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '51',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_labels-field_label_2'
  $field_instances['field_collection_item-field_data_definitions_labels-field_label_2'] = array(
    'bundle' => 'field_data_definitions_labels',
    'default_value' => array(
      0 => array(
        'value' => 'Attribute Definition',
      ),
    ),
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_2',
    'label' => 'Label for column #2',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '34',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_labels-field_label_3'
  $field_instances['field_collection_item-field_data_definitions_labels-field_label_3'] = array(
    'bundle' => 'field_data_definitions_labels',
    'default_value' => array(
      0 => array(
        'value' => 'PK',
      ),
    ),
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_3',
    'label' => 'Label for column #3',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '36',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_labels-field_label_4'
  $field_instances['field_collection_item-field_data_definitions_labels-field_label_4'] = array(
    'bundle' => 'field_data_definitions_labels',
    'default_value' => array(
      0 => array(
        'value' => 'FK',
      ),
    ),
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_4',
    'label' => 'Label for column #4',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '38',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_labels-field_label_5'
  $field_instances['field_collection_item-field_data_definitions_labels-field_label_5'] = array(
    'bundle' => 'field_data_definitions_labels',
    'default_value' => array(
      0 => array(
        'value' => 'M',
      ),
    ),
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_5',
    'label' => 'Label for column #5',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '40',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_labels-field_label_6'
  $field_instances['field_collection_item-field_data_definitions_labels-field_label_6'] = array(
    'bundle' => 'field_data_definitions_labels',
    'default_value' => array(
      0 => array(
        'value' => 'Datatype',
      ),
    ),
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_6',
    'label' => 'Label for column #6',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '42',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_labels-field_label_7'
  $field_instances['field_collection_item-field_data_definitions_labels-field_label_7'] = array(
    'bundle' => 'field_data_definitions_labels',
    'default_value' => array(
      0 => array(
        'value' => 'FK Source Entity',
      ),
    ),
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_7',
    'label' => 'Label for column #7',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '43',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_labels-field_label_8'
  $field_instances['field_collection_item-field_data_definitions_labels-field_label_8'] = array(
    'bundle' => 'field_data_definitions_labels',
    'default_value' => array(
      0 => array(
        'value' => 'FK Source Attribute',
      ),
    ),
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_8',
    'label' => 'Label for column #8',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '44',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_labels-field_label_9'
  $field_instances['field_collection_item-field_data_definitions_labels-field_label_9'] = array(
    'bundle' => 'field_data_definitions_labels',
    'default_value' => array(
      0 => array(
        'value' => 'Controlled List',
      ),
    ),
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_label_9',
    'label' => 'Label for column #9',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '45',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_values-field_column_1'
  $field_instances['field_collection_item-field_data_definitions_values-field_column_1'] = array(
    'bundle' => 'field_data_definitions_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_1',
    'label' => 'Column #1',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '32',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_values-field_column_10'
  $field_instances['field_collection_item-field_data_definitions_values-field_column_10'] = array(
    'bundle' => 'field_data_definitions_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_10',
    'label' => 'Column #10',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '46',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_values-field_column_11'
  $field_instances['field_collection_item-field_data_definitions_values-field_column_11'] = array(
    'bundle' => 'field_data_definitions_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_11',
    'label' => 'Column #11',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '47',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_values-field_column_12'
  $field_instances['field_collection_item-field_data_definitions_values-field_column_12'] = array(
    'bundle' => 'field_data_definitions_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_12',
    'label' => 'Column #12',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '48',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_values-field_column_13'
  $field_instances['field_collection_item-field_data_definitions_values-field_column_13'] = array(
    'bundle' => 'field_data_definitions_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_13',
    'label' => 'Column #13',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '49',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_values-field_column_14'
  $field_instances['field_collection_item-field_data_definitions_values-field_column_14'] = array(
    'bundle' => 'field_data_definitions_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_14',
    'label' => 'Column #14',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '50',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_values-field_column_15'
  $field_instances['field_collection_item-field_data_definitions_values-field_column_15'] = array(
    'bundle' => 'field_data_definitions_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_15',
    'label' => 'Column #15',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '51',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_values-field_column_2'
  $field_instances['field_collection_item-field_data_definitions_values-field_column_2'] = array(
    'bundle' => 'field_data_definitions_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_2',
    'label' => 'Column #2',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '34',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_values-field_column_3'
  $field_instances['field_collection_item-field_data_definitions_values-field_column_3'] = array(
    'bundle' => 'field_data_definitions_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_3',
    'label' => 'Column #3',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '36',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_values-field_column_4'
  $field_instances['field_collection_item-field_data_definitions_values-field_column_4'] = array(
    'bundle' => 'field_data_definitions_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_4',
    'label' => 'Column #4',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '38',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_values-field_column_5'
  $field_instances['field_collection_item-field_data_definitions_values-field_column_5'] = array(
    'bundle' => 'field_data_definitions_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_5',
    'label' => 'Column #5',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '40',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_values-field_column_6'
  $field_instances['field_collection_item-field_data_definitions_values-field_column_6'] = array(
    'bundle' => 'field_data_definitions_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_6',
    'label' => 'Column #6',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '42',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_values-field_column_7'
  $field_instances['field_collection_item-field_data_definitions_values-field_column_7'] = array(
    'bundle' => 'field_data_definitions_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_7',
    'label' => 'Column #7',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '43',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_values-field_column_8'
  $field_instances['field_collection_item-field_data_definitions_values-field_column_8'] = array(
    'bundle' => 'field_data_definitions_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_8',
    'label' => 'Column #8',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '44',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_data_definitions_values-field_column_9'
  $field_instances['field_collection_item-field_data_definitions_values-field_column_9'] = array(
    'bundle' => 'field_data_definitions_values',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_column_9',
    'label' => 'Column #9',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '45',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_entities-field_data_definitions_labels'
  $field_instances['field_collection_item-field_entities-field_data_definitions_labels'] = array(
    'bundle' => 'field_entities',
    'default_value' => array(
      0 => array(
        'field_label_1' => array(
          'und' => array(
            0 => array(
              'value' => 'Attribute Name',
            ),
          ),
        ),
        'field_label_10' => array(
          'und' => array(
            0 => array(
              'value' => '',
            ),
          ),
        ),
        'field_label_11' => array(
          'und' => array(
            0 => array(
              'value' => '',
            ),
          ),
        ),
        'field_label_12' => array(
          'und' => array(
            0 => array(
              'value' => '',
            ),
          ),
        ),
        'field_label_13' => array(
          'und' => array(
            0 => array(
              'value' => '',
            ),
          ),
        ),
        'field_label_14' => array(
          'und' => array(
            0 => array(
              'value' => '',
            ),
          ),
        ),
        'field_label_15' => array(
          'und' => array(
            0 => array(
              'value' => '',
            ),
          ),
        ),
        'field_label_2' => array(
          'und' => array(
            0 => array(
              'value' => 'Attribute Definition',
            ),
          ),
        ),
        'field_label_3' => array(
          'und' => array(
            0 => array(
              'value' => 'PK',
            ),
          ),
        ),
        'field_label_4' => array(
          'und' => array(
            0 => array(
              'value' => 'FK',
            ),
          ),
        ),
        'field_label_5' => array(
          'und' => array(
            0 => array(
              'value' => 'M',
            ),
          ),
        ),
        'field_label_6' => array(
          'und' => array(
            0 => array(
              'value' => 'Datatype',
            ),
          ),
        ),
        'field_label_7' => array(
          'und' => array(
            0 => array(
              'value' => 'FK Source Entity',
            ),
          ),
        ),
        'field_label_8' => array(
          'und' => array(
            0 => array(
              'value' => 'FK Source Attribute',
            ),
          ),
        ),
        'field_label_9' => array(
          'und' => array(
            0 => array(
              'value' => 'Controlled List',
            ),
          ),
        ),
        'entity' => entity_import('field_collection_item', '{
          "item_id" : null,
          "revision_id" : null,
          "field_name" : "field_data_definitions_labels",
          "default_revision" : true,
          "archived" : false,
          "field_label_1" : { "und" : [ { "value" : "Attribute Name" } ] },
          "field_label_10" : { "und" : [] },
          "field_label_11" : { "und" : [] },
          "field_label_12" : { "und" : [] },
          "field_label_13" : { "und" : [] },
          "field_label_14" : { "und" : [] },
          "field_label_15" : { "und" : [] },
          "field_label_2" : { "und" : [ { "value" : "Attribute Definition" } ] },
          "field_label_3" : { "und" : [ { "value" : "PK" } ] },
          "field_label_4" : { "und" : [ { "value" : "FK" } ] },
          "field_label_5" : { "und" : [ { "value" : "M" } ] },
          "field_label_6" : { "und" : [ { "value" : "Datatype" } ] },
          "field_label_7" : { "und" : [ { "value" : "FK Source Entity" } ] },
          "field_label_8" : { "und" : [ { "value" : "FK Source Attribute" } ] },
          "field_label_9" : { "und" : [ { "value" : "Controlled List" } ] }
        }'),
      ),
    ),
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '5',
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_data_definitions_labels',
    'label' => 'Data definitions labels',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection_table',
      'settings' => array(),
      'type' => 'field_collection_table',
      'weight' => '4',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_entities-field_data_definitions_notes'
  $field_instances['field_collection_item-field_entities-field_data_definitions_notes'] = array(
    'bundle' => 'field_entities',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => '4',
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_data_definitions_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => '5',
      ),
      'type' => 'text_textarea',
      'weight' => '6',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_entities-field_data_definitions_values'
  $field_instances['field_collection_item-field_entities-field_data_definitions_values'] = array(
    'bundle' => 'field_entities',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'field_collection_table',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 1,
          'edit' => '',
          'empty' => 1,
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_table_view',
        'weight' => '3',
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_data_definitions_values',
    'label' => 'Data definitions',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection_table',
      'settings' => array(),
      'type' => 'field_collection_table',
      'weight' => '5',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_entities-field_entity_description'
  $field_instances['field_collection_item-field_entities-field_entity_description'] = array(
    'bundle' => 'field_entities',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => '2',
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_entity_description',
    'label' => 'Entity description',
    'required' => 0,
    'settings' => array(
      'text_processing' => '1',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => '3',
      ),
      'type' => 'text_textarea',
      'weight' => '3',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_entities-field_entity_name'
  $field_instances['field_collection_item-field_entities-field_entity_name'] = array(
    'bundle' => 'field_entities',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => '1',
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_entity_name',
    'label' => 'Entity name',
    'required' => 0,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '60',
      ),
      'type' => 'text_textfield',
      'weight' => '2',
    ),
  );

  // Exported field_instance: 'field_collection_item-field_entities-field_entity_type'
  $field_instances['field_collection_item-field_entities-field_entity_type'] = array(
    'bundle' => 'field_entities',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'list_default',
        'weight' => '0',
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_entity_type',
    'label' => 'Entity type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => '1',
    ),
  );

  // Exported field_instance: 'node-standard-body'
  $field_instances['node-standard-body'] = array(
    'bundle' => 'standard',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => '10',
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => '10',
    ),
  );

  // Exported field_instance: 'node-standard-field_annexes'
  $field_instances['node-standard-field_annexes'] = array(
    'bundle' => 'standard',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => '17',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_annexes',
    'label' => 'Annexes',
    'required' => 0,
    'settings' => array(
      'text_processing' => '1',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => '5',
      ),
      'type' => 'text_textarea',
      'weight' => '21',
    ),
  );

  // Exported field_instance: 'node-standard-field_audience'
  $field_instances['node-standard-field_audience'] = array(
    'bundle' => 'standard',
    'default_value' => array(
      0 => array(
        'value' => '1',
      ),
      1 => array(
        'value' => '2',
      ),
      2 => array(
        'value' => '3',
      ),
      3 => array(
        'value' => '4',
      ),
    ),
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'list_default',
        'weight' => '7',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_audience',
    'label' => 'Target audience',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => '7',
    ),
  );

  // Exported field_instance: 'node-standard-field_bda_version'
  $field_instances['node-standard-field_bda_version'] = array(
    'bundle' => 'standard',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'edit' => array(
            'editor' => 'form',
          ),
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => '3',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_bda_version',
    'label' => 'BDA Version',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '1',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => '4',
    ),
  );

  // Exported field_instance: 'node-standard-field_changes_previous_version'
  $field_instances['node-standard-field_changes_previous_version'] = array(
    'bundle' => 'standard',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => '14',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_changes_previous_version',
    'label' => 'Changes from previous version',
    'required' => 0,
    'settings' => array(
      'text_processing' => '1',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => '3',
      ),
      'type' => 'text_textarea',
      'weight' => '18',
    ),
  );

  // Exported field_instance: 'node-standard-field_controlled_list_desc'
  $field_instances['node-standard-field_controlled_list_desc'] = array(
    'bundle' => 'standard',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => '11',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_controlled_list_desc',
    'label' => 'Controlled list description',
    'required' => 0,
    'settings' => array(
      'text_processing' => '1',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => '5',
      ),
      'type' => 'text_textarea',
      'weight' => '12',
    ),
  );

  // Exported field_instance: 'node-standard-field_controlled_list_labels'
  $field_instances['node-standard-field_controlled_list_labels'] = array(
    'bundle' => 'standard',
    'default_value' => array(
      0 => array(
        'field_label_1' => array(
          'und' => array(
            0 => array(
              'value' => 'Value',
            ),
          ),
        ),
        'field_label_10' => array(
          'und' => array(
            0 => array(
              'value' => '',
            ),
          ),
        ),
        'field_label_11' => array(
          'und' => array(
            0 => array(
              'value' => '',
            ),
          ),
        ),
        'field_label_12' => array(
          'und' => array(
            0 => array(
              'value' => '',
            ),
          ),
        ),
        'field_label_13' => array(
          'und' => array(
            0 => array(
              'value' => '',
            ),
          ),
        ),
        'field_label_14' => array(
          'und' => array(
            0 => array(
              'value' => '',
            ),
          ),
        ),
        'field_label_15' => array(
          'und' => array(
            0 => array(
              'value' => '',
            ),
          ),
        ),
        'field_label_2' => array(
          'und' => array(
            0 => array(
              'value' => 'Description',
            ),
          ),
        ),
        'field_label_3' => array(
          'und' => array(
            0 => array(
              'value' => 'Source',
            ),
          ),
        ),
        'field_label_4' => array(
          'und' => array(
            0 => array(
              'value' => '',
            ),
          ),
        ),
        'field_label_5' => array(
          'und' => array(
            0 => array(
              'value' => '',
            ),
          ),
        ),
        'field_label_6' => array(
          'und' => array(
            0 => array(
              'value' => '',
            ),
          ),
        ),
        'field_label_7' => array(
          'und' => array(
            0 => array(
              'value' => '',
            ),
          ),
        ),
        'field_label_8' => array(
          'und' => array(
            0 => array(
              'value' => '',
            ),
          ),
        ),
        'field_label_9' => array(
          'und' => array(
            0 => array(
              'value' => '',
            ),
          ),
        ),
        'entity' => entity_import('field_collection_item', '{
          "item_id" : null,
          "revision_id" : null,
          "field_name" : "field_controlled_list_labels",
          "default_revision" : true,
          "archived" : false,
          "field_label_1" : { "und" : [ { "value" : "Value" } ] },
          "field_label_10" : { "und" : [] },
          "field_label_11" : { "und" : [] },
          "field_label_12" : { "und" : [] },
          "field_label_13" : { "und" : [] },
          "field_label_14" : { "und" : [] },
          "field_label_15" : { "und" : [] },
          "field_label_2" : { "und" : [ { "value" : "Description" } ] },
          "field_label_3" : { "und" : [ { "value" : "Source" } ] },
          "field_label_4" : { "und" : [] },
          "field_label_5" : { "und" : [] },
          "field_label_6" : { "und" : [] },
          "field_label_7" : { "und" : [] },
          "field_label_8" : { "und" : [] },
          "field_label_9" : { "und" : [] }
        }'),
      ),
    ),
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => '20',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_controlled_list_labels',
    'label' => 'Controlled list labels',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection_table',
      'settings' => array(),
      'type' => 'field_collection_table',
      'weight' => '13',
    ),
  );

  // Exported field_instance: 'node-standard-field_controlled_list_values'
  $field_instances['node-standard-field_controlled_list_values'] = array(
    'bundle' => 'standard',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection_table',
        'settings' => array(
          'add' => '',
          'delete' => '',
          'description' => 1,
          'edit' => '',
          'empty' => 1,
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_table_view',
        'weight' => '12',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_controlled_list_values',
    'label' => 'Controlled list',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection_table',
      'settings' => array(),
      'type' => 'field_collection_table',
      'weight' => '14',
    ),
  );

  // Exported field_instance: 'node-standard-field_entities'
  $field_instances['node-standard-field_entities'] = array(
    'bundle' => 'standard',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => array(
            'editor' => 'form',
          ),
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => '13',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_entities',
    'label' => 'Data definitions',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => '15',
    ),
  );

  // Exported field_instance: 'node-standard-field_introduction'
  $field_instances['node-standard-field_introduction'] = array(
    'bundle' => 'standard',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => '9',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_introduction',
    'label' => 'Introduction',
    'required' => 0,
    'settings' => array(
      'text_processing' => '1',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => '5',
      ),
      'type' => 'text_textarea',
      'weight' => '9',
    ),
  );

  // Exported field_instance: 'node-standard-field_notes'
  $field_instances['node-standard-field_notes'] = array(
    'bundle' => 'standard',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => '16',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_notes',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'text_processing' => '1',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => '5',
      ),
      'type' => 'text_textarea',
      'weight' => '20',
    ),
  );

  // Exported field_instance: 'node-standard-field_references'
  $field_instances['node-standard-field_references'] = array(
    'bundle' => 'standard',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => '15',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_references',
    'label' => 'References',
    'required' => 0,
    'settings' => array(
      'text_processing' => '1',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => '3',
      ),
      'type' => 'text_textarea',
      'weight' => '19',
    ),
  );

  // Exported field_instance: 'node-standard-field_related_standards'
  $field_instances['node-standard-field_related_standards'] = array(
    'bundle' => 'standard',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => '18',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related_standards',
    'label' => 'Related standards',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => '60',
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => '16',
    ),
  );

  // Exported field_instance: 'node-standard-field_replaced_by'
  $field_instances['node-standard-field_replaced_by'] = array(
    'bundle' => 'standard',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => '8',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_replaced_by',
    'label' => 'Replaced by',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => '60',
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => '17',
    ),
  );

  // Exported field_instance: 'node-standard-field_standard_category'
  $field_instances['node-standard-field_standard_category'] = array(
    'bundle' => 'standard',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'list_default',
        'weight' => '6',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_standard_category',
    'label' => 'Category',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => '6',
    ),
  );

  // Exported field_instance: 'node-standard-field_standard_date'
  $field_instances['node-standard-field_standard_date'] = array(
    'bundle' => 'standard',
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => '5',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_standard_date',
    'label' => 'Date of Standard',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => '15',
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => '8',
    ),
  );

  // Exported field_instance: 'node-standard-field_standard_identifier'
  $field_instances['node-standard-field_standard_identifier'] = array(
    'bundle' => 'standard',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => '0',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_standard_identifier',
    'label' => 'Standard identifier',
    'required' => 1,
    'settings' => array(
      'text_processing' => '0',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => '30',
      ),
      'type' => 'text_textfield',
      'weight' => '1',
    ),
  );

  // Exported field_instance: 'node-standard-field_standard_status'
  $field_instances['node-standard-field_standard_status'] = array(
    'bundle' => 'standard',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'list_default',
        'weight' => '4',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_standard_status',
    'label' => 'Status',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => '5',
    ),
  );

  // Exported field_instance: 'node-standard-field_standard_type'
  $field_instances['node-standard-field_standard_type'] = array(
    'bundle' => 'standard',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'list_default',
        'weight' => '1',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_standard_type',
    'label' => 'Standard Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => '2',
    ),
  );

  // Exported field_instance: 'node-standard-field_standard_version'
  $field_instances['node-standard-field_standard_version'] = array(
    'bundle' => 'standard',
    'default_value' => NULL,
    'deleted' => '0',
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'edit' => array(
            'editor' => 'form',
          ),
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => '2',
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_standard_version',
    'label' => 'Version',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '1',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => '3',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Annexes');
  t('BDA Version');
  t('Body');
  t('Category');
  t('Changes from previous version');
  t('Column #1');
  t('Column #10');
  t('Column #11');
  t('Column #12');
  t('Column #13');
  t('Column #14');
  t('Column #15');
  t('Column #2');
  t('Column #3');
  t('Column #4');
  t('Column #5');
  t('Column #6');
  t('Column #7');
  t('Column #8');
  t('Column #9');
  t('Comment');
  t('Controlled list');
  t('Controlled list description');
  t('Controlled list labels');
  t('Data definitions');
  t('Data definitions labels');
  t('Date of Standard');
  t('Entity description');
  t('Entity name');
  t('Entity type');
  t('Introduction');
  t('Label for column #1');
  t('Label for column #10');
  t('Label for column #11');
  t('Label for column #12');
  t('Label for column #13');
  t('Label for column #14');
  t('Label for column #15');
  t('Label for column #2');
  t('Label for column #3');
  t('Label for column #4');
  t('Label for column #5');
  t('Label for column #6');
  t('Label for column #7');
  t('Label for column #8');
  t('Label for column #9');
  t('Notes');
  t('References');
  t('Related standards');
  t('Replaced by');
  t('Standard Type');
  t('Standard identifier');
  t('Status');
  t('Target audience');
  t('Version');

  return $field_instances;
}
