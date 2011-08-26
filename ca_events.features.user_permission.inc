<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function ca_events_user_default_permissions() {
  $permissions = array();

  // Exported permission: create ca_event content
  $permissions['create ca_event content'] = array(
    'name' => 'create ca_event content',
    'roles' => array(
      '0' => 'event adminsitrator',
      '1' => 'event creator',
    ),
  );

  // Exported permission: delete any ca_event content
  $permissions['delete any ca_event content'] = array(
    'name' => 'delete any ca_event content',
    'roles' => array(
      '0' => 'event adminsitrator',
      '1' => 'event creator',
    ),
  );

  // Exported permission: delete own ca_event content
  $permissions['delete own ca_event content'] = array(
    'name' => 'delete own ca_event content',
    'roles' => array(
      '0' => 'event adminsitrator',
      '1' => 'event creator',
    ),
  );

  // Exported permission: edit any ca_event content
  $permissions['edit any ca_event content'] = array(
    'name' => 'edit any ca_event content',
    'roles' => array(
      '0' => 'event adminsitrator',
      '1' => 'event creator',
    ),
  );

  // Exported permission: edit own ca_event content
  $permissions['edit own ca_event content'] = array(
    'name' => 'edit own ca_event content',
    'roles' => array(
      '0' => 'event adminsitrator',
      '1' => 'event creator',
    ),
  );

  return $permissions;
}
