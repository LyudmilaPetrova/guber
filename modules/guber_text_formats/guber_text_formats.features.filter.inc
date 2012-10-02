<?php
/**
 * @file
 * guber_text_formats.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function guber_text_formats_filter_default_formats() {
  $formats = array();

  // Exported format: Счетчики и коды.
  $formats['codes'] = array(
    'format' => 'codes',
    'name' => 'Счетчики и коды',
    'cache' => '1',
    'status' => '1',
    'weight' => '-8',
    'filters' => array(),
  );

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '-10',
    'filters' => array(
      'pathologic' => array(
        'weight' => '-50',
        'status' => '1',
        'settings' => array(
          'local_paths' => '',
          'protocol_style' => 'full',
        ),
      ),
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '-9',
    'filters' => array(
      'filter_url' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'filter_url_length' => '72',
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
