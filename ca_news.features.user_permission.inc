<?php
/**
 * @file
 * ca_news.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ca_news_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ca_news content.
  $permissions['create ca_news content'] = array(
    'name' => 'create ca_news content',
    'roles' => array(
      0 => 'news admin',
      1 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any ca_news content.
  $permissions['delete any ca_news content'] = array(
    'name' => 'delete any ca_news content',
    'roles' => array(
      0 => 'news admin',
      1 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own ca_news content.
  $permissions['delete own ca_news content'] = array(
    'name' => 'delete own ca_news content',
    'roles' => array(
      0 => 'news admin',
      1 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any ca_news content.
  $permissions['edit any ca_news content'] = array(
    'name' => 'edit any ca_news content',
    'roles' => array(
      0 => 'news admin',
      1 => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own ca_news content.
  $permissions['edit own ca_news content'] = array(
    'name' => 'edit own ca_news content',
    'roles' => array(
      0 => 'news admin',
      1 => 'webmaster',
    ),
    'module' => 'node',
  );

  return $permissions;
}
