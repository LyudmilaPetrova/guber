<?php
/**
 * @file
 * guber_user_roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function guber_user_roles_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => '2',
  );

  // Exported role: moderator.
  $roles['moderator'] = array(
    'name' => 'moderator',
    'weight' => '3',
  );

  // Exported role: redaktor.
  $roles['redaktor'] = array(
    'name' => 'redaktor',
    'weight' => '4',
  );

  return $roles;
}
