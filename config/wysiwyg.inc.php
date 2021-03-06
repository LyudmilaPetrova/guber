<?php

function _wysiwyg_config() {
  // Enable wysiwyg profile with custom settings.
  // Full html.
  $format = 'filtered_html';
  $editor = 'tinymce';
  $settings = array(
    'default' => 1,
    'user_choose' => 0,
    'show_toggle' => 1,
    'theme' => 'advanced',
    'language' => 'en',
    'buttons' => array(
      'default' => array(
        'bold' => 1,
        'italic' => 1,
        'underline' => 1,
        'justifyleft' => 1,
        'justifycenter' => 1,
        'justifyright' => 1,
        'justifyfull' => 1,
        'bullist' => 1,
        'numlist' => 1,
        'outdent' => 1,
        'indent' => 1,
        'link' => 1,
        'unlink' => 1,
        'anchor' => 1,
        'image' => 1,
        'cleanup' => 1,
        'forecolor' => 1,
        'backcolor' => 1,
        'blockquote' => 1,
        'cut' => 1,
        'copy' => 1,
        'paste' => 1,
        'removeformat' => 1,
      ),
      'directionality' => array(
        'ltr' => 1,
        'rtl' => 1,
      ),
      'font' => array(
        'fontselect' => 1,
        'fontsizeselect' => 1,
        'styleselect' => 1,
      ),
      'insertdatetime' => array(
        'insertdate' => 1,
        'inserttime' => 1,
      ),
      'paste' => array(
        'pastetext' => 1,
        'pasteword' => 1,
      ),
      'searchreplace' => array(
        'search' => 1,
      ),
      'table' => array(
        'tablecontrols' => 1,
      ),
      'imce' => array(
        'imce' => 1,
      ),
      'drupal' => array(
        'break' => 1,
      ),
    ),
    'toolbar_loc' => 'top',
    'toolbar_align' => 'left',
    'path_loc' => 'bottom',
    'resizing' => 1,
    'verify_html' => 1,
    'preformatted' => 0,
    'convert_fonts_to_spans' => 1,
    'remove_linebreaks' => 1,
    'apply_source_formatting' => 0,
    'paste_auto_cleanup_on_paste' => 0,
    'block_formats' => 'p,address,pre,h2,h3,h4,h5,h6,div',
    'css_setting' => 'theme',
    'css_path' => '',
    'css_classes' => '',
  );
  db_insert('wysiwyg')
    ->fields(
      array(
        'format' => $format,
        'editor' => $editor,
        'settings' => serialize($settings),
      )
    )
    ->execute();
}
