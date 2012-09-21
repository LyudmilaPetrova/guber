<?php
/**
 * @file
 * guber_content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function guber_content_types_node_info() {
  $items = array(
    'auction' => array(
      'name' => t('Аукционы и конкурсы'),
      'base' => 'node_content',
      'description' => t('Используйте для создания страниц с информацией об открытии аукциона или конкурса и публикации справок о результатах торгов.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'auction_lot' => array(
      'name' => t('Лот'),
      'base' => 'node_content',
      'description' => t('Не используйте!'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'banner' => array(
      'name' => t('Баннер'),
      'base' => 'node_content',
      'description' => t('Баннер - это картинка + ссылка. Предусмотрено три баннерных места: Подвал (маленькие баннеры в две строчки), Средние баннеры(4 шт над подвалом главной), большой баннер (1 шт под средними)'),
      'has_title' => '1',
      'title_label' => t('Заголовок'),
      'help' => '',
    ),
    'document' => array(
      'name' => t('Постановления'),
      'base' => 'node_content',
      'description' => t('Используйте этот тип материала для размещения постановлений, распоряжений и других документов.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('Новости'),
      'base' => 'node_content',
      'description' => t('Автоматически формируется лента новостей и страница со списком новостей'),
      'has_title' => '1',
      'title_label' => t('Заголовок'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
