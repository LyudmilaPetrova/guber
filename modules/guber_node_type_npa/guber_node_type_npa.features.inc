<?php
/**
 * @file
 * guber_node_type_npa.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function guber_node_type_npa_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function guber_node_type_npa_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function guber_node_type_npa_node_info() {
  $items = array(
    'document' => array(
      'name' => t('Постановления'),
      'base' => 'node_content',
      'description' => t('Используйте этот тип материала для размещения постановлений, распоряжений и других документов.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
