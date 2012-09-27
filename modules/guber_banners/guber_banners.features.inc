<?php
/**
 * @file
 * guber_banners.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function guber_banners_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function guber_banners_node_info() {
  $items = array(
    'banner' => array(
      'name' => t('Баннер'),
      'base' => 'node_content',
      'description' => t('Баннер - это картинка + ссылка. Предусмотрено три баннерных места: Подвал (маленькие баннеры в две строчки), Средние баннеры(4 шт над подвалом главной), большой баннер (1 шт под средними)'),
      'has_title' => '1',
      'title_label' => t('Заголовок'),
      'help' => '',
    ),
  );
  return $items;
}
