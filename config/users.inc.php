<?php

function _users_config() {
  
  // Enable user picture support and set the default to a square thumbnail option.
  variable_set('user_pictures', '1');
  variable_set('user_picture_dimensions', '1024x1024');
  variable_set('user_picture_file_size', '800');
  variable_set('user_picture_style', 'thumbnail');

  // Allow account creation for administrators only.
  
  variable_set('user_register', USER_REGISTER_ADMINISTRATORS_ONLY);
  
  // Enable default permissions for system roles.
  $filtered_html_permission = filter_permission_name($filtered_html_format);
 // TODO: next lines causes error during drupal installation
 // user_role_grant_permissions(DRUPAL_ANONYMOUS_RID, array('access content', 'access comments', $filtered_html_permission));
 // user_role_grant_permissions(DRUPAL_AUTHENTICATED_RID, array('access content', 'access comments', 'post comments', 'skip comment approval', $filtered_html_permission));

  // Create a default role for site administrators, with all available permissions assigned.
  $admin_role = new stdClass();
  $admin_role->name = 'administrator';
  $admin_role->weight = 2;
  user_role_save($admin_role);
  user_role_grant_permissions($admin_role->rid, array_keys(module_invoke_all('permission')));
  // Set this as the administrator role.
  variable_set('user_admin_role', $admin_role->rid);

  // Assign user 1 the "administrator" role.
  db_insert('users_roles')
    ->fields(array('uid' => 1, 'rid' => $admin_role->rid))
    ->execute();
}
