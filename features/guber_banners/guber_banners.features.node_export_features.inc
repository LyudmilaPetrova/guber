<?php
/**
 * @file
 * guber_banners.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function guber_banners_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'2\',
      \'uid\' => \'1\',
      \'title\' => \'Правительство Российской Федерации\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'68df0105-05b9-422e-ad65-186389e48df1\',
      \'nid\' => \'2\',
      \'type\' => \'banner\',
      \'language\' => \'en\',
      \'created\' => \'1348558730\',
      \'changed\' => \'1348558730\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'00385555-e96a-4430-a6d2-a6e5bcede6eb\',
      \'revision_timestamp\' => \'1348558730\',
      \'revision_uid\' => \'1\',
      \'field_banner_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'2\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'100\',
            \'height\' => \'50\',
            \'uid\' => \'1\',
            \'filename\' => \'government.ru_.jpg\',
            \'uri\' => \'public://government.ru_.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'3243\',
            \'status\' => \'1\',
            \'timestamp\' => \'1348558730\',
            \'type\' => \'image\',
            \'uuid\' => \'d7d56374-0dd7-4ebd-92eb-e4b2be606403\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'100\',
              \'height\' => \'50\',
            ),
          ),
        ),
      ),
      \'field_banner_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.government.ru/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_banner_place\' => array(
        \'und\' => array(
          array(
            \'value\' => \'footer\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1348558730\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 0,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'3\',
        \'source\' => \'node/2\',
        \'alias\' => \'content/правительство-российской-федерации\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'7\',
      \'uid\' => \'1\',
      \'title\' => \'Законодательное Собрание Челябинской области\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'27cc7446-a7c6-47f9-a978-fd55fcd16b36\',
      \'nid\' => \'7\',
      \'type\' => \'banner\',
      \'language\' => \'en\',
      \'created\' => \'1348559097\',
      \'changed\' => \'1348559097\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'07d32e76-05b2-4f8b-b572-c11a2f4175ee\',
      \'revision_timestamp\' => \'1348559097\',
      \'revision_uid\' => \'1\',
      \'field_banner_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'7\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'100\',
            \'height\' => \'50\',
            \'uid\' => \'1\',
            \'filename\' => \'zs74.ru_.jpg\',
            \'uri\' => \'public://zs74.ru_.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'4397\',
            \'status\' => \'1\',
            \'timestamp\' => \'1348559097\',
            \'type\' => \'image\',
            \'uuid\' => \'e1e074c0-e8df-460b-988f-ea681cbd80f9\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'100\',
              \'height\' => \'50\',
            ),
          ),
        ),
      ),
      \'field_banner_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.zs74.ru/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_banner_place\' => array(
        \'und\' => array(
          array(
            \'value\' => \'footer\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1348559097\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 0,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'8\',
        \'source\' => \'node/7\',
        \'alias\' => \'content/законодательное-собрание-челябинской-области\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'4\',
      \'uid\' => \'1\',
      \'title\' => \'Совет Федерации\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'500a3df7-3c9c-459c-9f6f-445790b805f2\',
      \'nid\' => \'4\',
      \'type\' => \'banner\',
      \'language\' => \'en\',
      \'created\' => \'1348558903\',
      \'changed\' => \'1348558903\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'1b45537e-23c8-498b-8b49-14b146fc0f6f\',
      \'revision_timestamp\' => \'1348558903\',
      \'revision_uid\' => \'1\',
      \'field_banner_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'4\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'100\',
            \'height\' => \'50\',
            \'uid\' => \'1\',
            \'filename\' => \'council.gov_.ru_.jpg\',
            \'uri\' => \'public://council.gov_.ru_.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'2632\',
            \'status\' => \'1\',
            \'timestamp\' => \'1348558903\',
            \'type\' => \'image\',
            \'uuid\' => \'54931f9e-998d-4710-9d58-474300e1b5d0\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'100\',
              \'height\' => \'50\',
            ),
          ),
        ),
      ),
      \'field_banner_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.council.gov.ru/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_banner_place\' => array(
        \'und\' => array(
          array(
            \'value\' => \'footer\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1348558903\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 0,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'5\',
        \'source\' => \'node/4\',
        \'alias\' => \'content/совет-федерации\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'10\',
      \'uid\' => \'1\',
      \'title\' => \'ГУВД по Челябинской области\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'8498cbb6-2247-4116-bbd4-35ca168ffe6b\',
      \'nid\' => \'10\',
      \'type\' => \'banner\',
      \'language\' => \'en\',
      \'created\' => \'1348559345\',
      \'changed\' => \'1348559345\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'214413ae-17fe-455b-804c-bf65ea89ff1f\',
      \'revision_timestamp\' => \'1348559345\',
      \'revision_uid\' => \'1\',
      \'field_banner_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'10\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'100\',
            \'height\' => \'50\',
            \'uid\' => \'1\',
            \'filename\' => \'guvd74.ru_.jpg\',
            \'uri\' => \'public://guvd74.ru_.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'2978\',
            \'status\' => \'1\',
            \'timestamp\' => \'1348559345\',
            \'type\' => \'image\',
            \'uuid\' => \'bcc7c09c-5912-401a-9ee6-3daddb9aef1a\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'100\',
              \'height\' => \'50\',
            ),
          ),
        ),
      ),
      \'field_banner_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.guvd74.ru/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_banner_place\' => array(
        \'und\' => array(
          array(
            \'value\' => \'footer\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1348559345\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 0,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'11\',
        \'source\' => \'node/10\',
        \'alias\' => \'content/гувд-по-челябинской-области\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'6\',
      \'uid\' => \'1\',
      \'title\' => \'Главный Федеральный Инспектор\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'5d437405-a305-4cfd-914f-4da64f002773\',
      \'nid\' => \'6\',
      \'type\' => \'banner\',
      \'language\' => \'en\',
      \'created\' => \'1348559034\',
      \'changed\' => \'1348559034\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'294ba77d-ca91-41d5-8edf-ffe704da0c57\',
      \'revision_timestamp\' => \'1348559034\',
      \'revision_uid\' => \'1\',
      \'field_banner_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'6\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'100\',
            \'height\' => \'50\',
            \'uid\' => \'1\',
            \'filename\' => \'gfins.ru_.jpg\',
            \'uri\' => \'public://gfins.ru_.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'4968\',
            \'status\' => \'1\',
            \'timestamp\' => \'1348559034\',
            \'type\' => \'image\',
            \'uuid\' => \'741ffb5c-2a0b-4b33-bc87-feae1a219df2\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'100\',
              \'height\' => \'50\',
            ),
          ),
        ),
      ),
      \'field_banner_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://gfins.ru/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_banner_place\' => array(
        \'und\' => array(
          array(
            \'value\' => \'footer\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1348559034\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 0,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'7\',
        \'source\' => \'node/6\',
        \'alias\' => \'content/главный-федеральный-инспектор\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'8\',
      \'uid\' => \'1\',
      \'title\' => \'Правительство Челябинской области\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'04018fd4-bfd4-4bce-a58f-8a77739a100d\',
      \'nid\' => \'8\',
      \'type\' => \'banner\',
      \'language\' => \'en\',
      \'created\' => \'1348559156\',
      \'changed\' => \'1348559156\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'354e42bc-0459-462b-87f4-98a61708b9c9\',
      \'revision_timestamp\' => \'1348559156\',
      \'revision_uid\' => \'1\',
      \'field_banner_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'8\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'100\',
            \'height\' => \'50\',
            \'uid\' => \'1\',
            \'filename\' => \'pravmin74.ru_.jpg\',
            \'uri\' => \'public://pravmin74.ru_.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'3141\',
            \'status\' => \'1\',
            \'timestamp\' => \'1348559156\',
            \'type\' => \'image\',
            \'uuid\' => \'3891395f-8a37-47de-a3b1-776a269c4b5a\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'100\',
              \'height\' => \'50\',
            ),
          ),
        ),
      ),
      \'field_banner_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.pravmin74.ru/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_banner_place\' => array(
        \'und\' => array(
          array(
            \'value\' => \'footer\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1348559156\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 0,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'9\',
        \'source\' => \'node/8\',
        \'alias\' => \'content/правительство-челябинской-области\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'12\',
      \'uid\' => \'1\',
      \'title\' => \'Общественная палата Челябинской области\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a08699ab-2ca2-4120-a6dc-27953cc0fe01\',
      \'nid\' => \'12\',
      \'type\' => \'banner\',
      \'language\' => \'en\',
      \'created\' => \'1348559442\',
      \'changed\' => \'1348559442\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'36c7ab54-6359-4f76-958a-3687711745f1\',
      \'revision_timestamp\' => \'1348559442\',
      \'revision_uid\' => \'1\',
      \'field_banner_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'12\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'100\',
            \'height\' => \'50\',
            \'uid\' => \'1\',
            \'filename\' => \'op74.ru_.jpg\',
            \'uri\' => \'public://op74.ru_.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'3484\',
            \'status\' => \'1\',
            \'timestamp\' => \'1348559442\',
            \'type\' => \'image\',
            \'uuid\' => \'57b907ad-167a-4eba-83ec-d46cdb444ee3\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'100\',
              \'height\' => \'50\',
            ),
          ),
        ),
      ),
      \'field_banner_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://op74.ru/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_banner_place\' => array(
        \'und\' => array(
          array(
            \'value\' => \'footer\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1348559442\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 0,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'13\',
        \'source\' => \'node/12\',
        \'alias\' => \'content/общественная-палата-челябинской-области\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'3\',
      \'uid\' => \'1\',
      \'title\' => \'Уральский Федеральный Округ\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'da8b643b-3fb5-4666-a250-65cc9a4ccca5\',
      \'nid\' => \'3\',
      \'type\' => \'banner\',
      \'language\' => \'en\',
      \'created\' => \'1348558847\',
      \'changed\' => \'1348558847\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'3fba5e33-8889-47a7-9f15-332d1a657998\',
      \'revision_timestamp\' => \'1348558847\',
      \'revision_uid\' => \'1\',
      \'field_banner_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'3\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'100\',
            \'height\' => \'50\',
            \'uid\' => \'1\',
            \'filename\' => \'uralfo.ru_.jpg\',
            \'uri\' => \'public://uralfo.ru_.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'3624\',
            \'status\' => \'1\',
            \'timestamp\' => \'1348558847\',
            \'type\' => \'image\',
            \'uuid\' => \'7b8cae03-0f00-43cd-929b-8d62efd293ba\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'100\',
              \'height\' => \'50\',
            ),
          ),
        ),
      ),
      \'field_banner_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.uralfo.ru/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_banner_place\' => array(
        \'und\' => array(
          array(
            \'value\' => \'footer\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1348558847\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 0,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'4\',
        \'source\' => \'node/3\',
        \'alias\' => \'content/уральский-федеральный-округ\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'5\',
      \'uid\' => \'1\',
      \'title\' => \'Государственная Дума ФС РФ\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'31df93a8-0e33-4c6a-bc38-33ad1c3d61f7\',
      \'nid\' => \'5\',
      \'type\' => \'banner\',
      \'language\' => \'en\',
      \'created\' => \'1348558964\',
      \'changed\' => \'1348558964\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'571617f2-1282-41fc-947a-81410224bdc2\',
      \'revision_timestamp\' => \'1348558964\',
      \'revision_uid\' => \'1\',
      \'field_banner_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'5\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'100\',
            \'height\' => \'50\',
            \'uid\' => \'1\',
            \'filename\' => \'duma.gov_.ru_.jpg\',
            \'uri\' => \'public://duma.gov_.ru_.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'3800\',
            \'status\' => \'1\',
            \'timestamp\' => \'1348558964\',
            \'type\' => \'image\',
            \'uuid\' => \'2dd727b4-8d74-4a47-b928-70d708bdc860\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'100\',
              \'height\' => \'50\',
            ),
          ),
        ),
      ),
      \'field_banner_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.duma.gov.ru/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_banner_place\' => array(
        \'und\' => array(
          array(
            \'value\' => \'footer\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1348558964\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 0,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'6\',
        \'source\' => \'node/5\',
        \'alias\' => \'content/государственная-дума-фс-рф\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'1\',
      \'uid\' => \'1\',
      \'title\' => \'Сайт Президента России\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'a049d21c-b436-4034-9fde-7dc5b8eded80\',
      \'nid\' => \'1\',
      \'type\' => \'banner\',
      \'language\' => \'en\',
      \'created\' => \'1348558418\',
      \'changed\' => \'1348558664\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'7a723126-dd47-485d-96c5-e677082c0141\',
      \'revision_timestamp\' => \'1348558664\',
      \'revision_uid\' => \'1\',
      \'field_banner_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'1\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'100\',
            \'height\' => \'50\',
            \'uid\' => \'1\',
            \'filename\' => \'kremlin.ru_.jpg\',
            \'uri\' => \'public://kremlin.ru_.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'3856\',
            \'status\' => \'1\',
            \'timestamp\' => \'1348558418\',
            \'type\' => \'image\',
            \'uuid\' => \'fd518760-86b3-4f8f-8393-e921eeff2921\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'100\',
              \'height\' => \'50\',
            ),
          ),
        ),
      ),
      \'field_banner_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.kremlin.ru/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_banner_place\' => array(
        \'und\' => array(
          array(
            \'value\' => \'footer\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1348558418\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 0,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'2\',
        \'source\' => \'node/1\',
        \'alias\' => \'content/сайт-президента-россии\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'9\',
      \'uid\' => \'1\',
      \'title\' => \'Избирком Челябинской области\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'eceb3ed9-676e-4bba-952f-a0c001ea7007\',
      \'nid\' => \'9\',
      \'type\' => \'banner\',
      \'language\' => \'en\',
      \'created\' => \'1348559235\',
      \'changed\' => \'1348559235\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'bd806231-aa5e-4169-b652-14f298d663f2\',
      \'revision_timestamp\' => \'1348559235\',
      \'revision_uid\' => \'1\',
      \'field_banner_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'9\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'100\',
            \'height\' => \'50\',
            \'uid\' => \'1\',
            \'filename\' => \'iksrf74.uu_.ru_.jpg\',
            \'uri\' => \'public://iksrf74.uu_.ru_.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'3593\',
            \'status\' => \'1\',
            \'timestamp\' => \'1348559235\',
            \'type\' => \'image\',
            \'uuid\' => \'37371b13-9638-4272-98c7-41b7b869cae8\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'100\',
              \'height\' => \'50\',
            ),
          ),
        ),
      ),
      \'field_banner_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.iksrf74.uu.ru/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_banner_place\' => array(
        \'und\' => array(
          array(
            \'value\' => \'footer\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1348559235\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 0,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'10\',
        \'source\' => \'node/9\',
        \'alias\' => \'content/избирком-челябинской-области\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
  (object) array(
      \'vid\' => \'11\',
      \'uid\' => \'1\',
      \'title\' => \'УГИБДД по Челябинской области\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'0a56ed34-d57f-4a24-a382-cdadd7c27a65\',
      \'nid\' => \'11\',
      \'type\' => \'banner\',
      \'language\' => \'en\',
      \'created\' => \'1348559398\',
      \'changed\' => \'1348559398\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'e8be21e5-21bf-44bd-bfb3-0f648137371e\',
      \'revision_timestamp\' => \'1348559398\',
      \'revision_uid\' => \'1\',
      \'field_banner_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'11\',
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'100\',
            \'height\' => \'50\',
            \'uid\' => \'1\',
            \'filename\' => \'gibdd74.ru_.jpg\',
            \'uri\' => \'public://gibdd74.ru_.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'3928\',
            \'status\' => \'1\',
            \'timestamp\' => \'1348559398\',
            \'type\' => \'image\',
            \'uuid\' => \'5c25044c-da9d-44f1-be05-6fa498bb101c\',
            \'rdf_mapping\' => array(),
            \'image_dimensions\' => array(
              \'width\' => \'100\',
              \'height\' => \'50\',
            ),
          ),
        ),
      ),
      \'field_banner_link\' => array(
        \'und\' => array(
          array(
            \'url\' => \'http://www.gibdd74.ru/\',
            \'title\' => NULL,
            \'attributes\' => array(),
          ),
        ),
      ),
      \'field_banner_place\' => array(
        \'und\' => array(
          array(
            \'value\' => \'footer\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1348559398\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'comment_count\' => \'0\',
      \'print_display\' => 0,
      \'print_display_comment\' => 0,
      \'print_display_urllist\' => 0,
      \'name\' => \'admin\',
      \'picture\' => \'0\',
      \'data\' => \'b:0;\',
      \'path\' => array(
        \'pid\' => \'12\',
        \'source\' => \'node/11\',
        \'alias\' => \'content/угибдд-по-челябинской-области\',
        \'language\' => \'en\',
      ),
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}
