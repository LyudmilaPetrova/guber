<?php

function _theme_config() {
  
  // Enable the admin theme.
  db_update('system')
    ->fields(array('status' => 1))
    ->condition('type', 'theme')
    ->condition('name', 'seven')
    ->execute();
  variable_set('admin_theme', 'seven');
  variable_set('node_admin_theme', '1');
  
  // Enable custom front end theme
  theme_enable(array('base3'));
  variable_set('theme_default', 'base3');

}
