<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ca_events_user_default_roles() {
  $roles = array();

  // Exported role: event adminsitrator
  $roles['event adminsitrator'] = array(
    'name' => 'event adminsitrator',
  );

  // Exported role: event creator
  $roles['event creator'] = array(
    'name' => 'event creator',
  );

  return $roles;
}
