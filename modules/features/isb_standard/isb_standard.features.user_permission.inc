<?php
/**
 * @file
 * isb_standard.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function isb_standard_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create standard content'.
  $permissions['create standard content'] = array(
    'name' => 'create standard content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any standard content'.
  $permissions['delete any standard content'] = array(
    'name' => 'delete any standard content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own standard content'.
  $permissions['delete own standard content'] = array(
    'name' => 'delete own standard content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any standard content'.
  $permissions['edit any standard content'] = array(
    'name' => 'edit any standard content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own standard content'.
  $permissions['edit own standard content'] = array(
    'name' => 'edit own standard content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
