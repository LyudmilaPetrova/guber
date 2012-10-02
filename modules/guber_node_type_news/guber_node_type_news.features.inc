<?php
/**
 * @file
 * guber_node_type_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function guber_node_type_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function guber_node_type_news_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function guber_node_type_news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('Новости'),
      'base' => 'node_content',
      'description' => t('Автоматически формируется лента новостей и страница со списком новостей'),
      'has_title' => '1',
      'title_label' => t('Заголовок'),
      'help' => '',
    ),
  );
  return $items;
}
