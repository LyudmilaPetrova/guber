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
            \'fid\' => NULL,
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
            \'node_export_file_data\' => \'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\',
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
            \'fid\' => NULL,
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
            \'node_export_file_data\' => \'/9j/4AAQSkZJRgABAQAAAQABAAD//gA7Q1JFQVRPUjogZ2QtanBlZyB2MS4wICh1c2luZyBJSkcgSlBFRyB2NjIpLCBxdWFsaXR5ID0gOTAK/9sAQwADAgIDAgIDAwMDBAMDBAUIBQUEBAUKBwcGCAwKDAwLCgsLDQ4SEA0OEQ4LCxAWEBETFBUVFQwPFxgWFBgSFBUU/9sAQwEDBAQFBAUJBQUJFA0LDRQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQU/8AAEQgAMgBkAwEiAAIRAQMRAf/EAB8AAAEFAQEBAQEBAAAAAAAAAAABAgMEBQYHCAkKC//EALUQAAIBAwMCBAMFBQQEAAABfQECAwAEEQUSITFBBhNRYQcicRQygZGhCCNCscEVUtHwJDNicoIJChYXGBkaJSYnKCkqNDU2Nzg5OkNERUZHSElKU1RVVldYWVpjZGVmZ2hpanN0dXZ3eHl6g4SFhoeIiYqSk5SVlpeYmZqio6Slpqeoqaqys7S1tre4ubrCw8TFxsfIycrS09TV1tfY2drh4uPk5ebn6Onq8fLz9PX29/j5+v/EAB8BAAMBAQEBAQEBAQEAAAAAAAABAgMEBQYHCAkKC//EALURAAIBAgQEAwQHBQQEAAECdwABAgMRBAUhMQYSQVEHYXETIjKBCBRCkaGxwQkjM1LwFWJy0QoWJDThJfEXGBkaJicoKSo1Njc4OTpDREVGR0hJSlNUVVZXWFlaY2RlZmdoaWpzdHV2d3h5eoKDhIWGh4iJipKTlJWWl5iZmqKjpKWmp6ipqrKztLW2t7i5usLDxMXGx8jJytLT1NXW19jZ2uLj5OXm5+jp6vLz9PX29/j5+v/aAAwDAQACEQMRAD8A/RH4qfESf4Z+HYNRtPC2s+Lrq4uVto7HRkjBTIZjLLLK6RQxKFOXkYDJUdSKwfCP7Tvw78TeFfBmt3ev2vheTxZAk+maX4gmjtbyTc/lgbCxBy/ygqSrEjaTkZf+0baO/wAPHvH+IOj/AA80uzl8zULvxHptvf6ZeQMrI1vcxSvHuViwI2SKSwUfNnB+f/D/AOx1bfEr4b+E4PCXxvTX/BFraWcaPbWn2m2nmttSe9LReRdRxqu9jCIpFlMSoqoVIOfOpUY8po5H0u3x5+G8dhdXz+ONBjtLW3e7nme/jVYoluHti7ZPA8+N4h6ujKMkEVPa/Gr4f32n/b7bxho1xZf2Tca79oivUdBYQMFnuMg/cjYhWJ+6eDg8V8m2/wCzJ4T+FOvHwr/wuvT4PFF9rNn4hstKu9MFzNHqiajcz2r/AGcXG827R3RiMGVDMjTKyMziuw1X/gnnp/iJvEV3q/jS4uNW17RNds7ue1s5bSFdQ1KaOU3SRR3I/cxeWFFs7Or5yzk8no9jEnmPojT/AIw+BNT8XW/hW08X6Lc+JLiAXEWlRX0ZuXjKbwQmck7Dvx12/NjHNZGmftGfC3WLPVrqy8feH7i20iFbi/mW+QLbRtJ5as5zwGf5B6t8oyeK8avP2M/EXhrTrpvC3jOyuk0/U28XaTpd/pRR319LEwQGW7ExItDIEZohHuxlRJt4rndC/Yc+InhzUNLs7X4paalja+FrPQRqlnoVxa3Kmx1FLuASgXzPJ5/n3YlkilgZSsRQjJNHsYhzM9+vv2nfhJp1vpc9x8RPDscGqRGexk+3oVuUDuhKEH5iHikUgcgowOMGtSH48fDa6s/EV3B468Pz2/h5S+rSRajE4sUDFC0uG+Vd6suTxuVhnIIHmngP9kB/BOk/Dqyfxeb9vCHizUfFHmnTipvPta3IMBzMxQr9qz5hLFtn3RnI4S0/4J5Saf4D1/wjB49ifTr/AEd/DtpeXml3Vxd2mmyXYuJY8vfmIyEogDRxRqCu4xsScnsYhzH0V4W+NngDxtJYx6D4u0nVnvr2bTrZLW5VzLcxQ+fLCo7usRDkdQvNaGsfEzwl4fuNXg1LxDp9jNpH2P8AtCOedVNr9qkMdr5n93zXBVc/ePArwbxt+xRqHiLxBc61pXj7+yL9/GV94ujP2K7j2fadOhsTb+baX9tONoiL70lTdu2spXIbHk/YAl1ix1OXxH8S9U8R+I7u30CFNavIJg4bTrt7h2ljFztuDKrCMGXcYtu/c7Ekx7KI7nv8Pxu+HlzqWv6fF448Pte6BFJcarD/AGlFuso04keX5vlVDgMTwp4ODxWz4P8AGnh74iaKur+GdbsNf0xpGi+1adcLNGHX7ykqThgTyDgj0r5p1r/gn3b+J/Df/CMat46nfw1pdtqsHh6Gy0wQXdk19Os0j3M/mt9qClQAAkWR94scEej+DdH0L9lDwN4h1Pxj4osbm81TUG1K+1FUuIRcSmJI0AW4ubmV32RKMmRmbAAHAFZToRaKUme0+SfSivhrXP25fG/ifVbi78D+Br7UfD6sYorloJyXYdeI0YDqOCc+oHQFcXsqZr7x9CftK+APEXi2L4fa94c0iLxPc+D/ABNDrs3h2W4jtzqEawTxfu3kxGJkaZZE3lVyn3lODXj/AIy+G/xV8SW+m6r/AMK4uPD+kXt1rl3f+D/A/iOHTL9rydIlsb+9uUnijmlUpL5gSVgpaNgJCoUfRvxS1XxHoV14L1PRbW+v9LtdbLa9aabCs08ti9ldRrtQ8sFuXtHIU7tqMRkAg+HeGv2r/Elpeanp7eFdQ124t9T1O7uY7o+TPa2K6nLbRQqERk3oiMSZHUAqilsuWX16XwnOzhdD/Z++OfhzxA01zc6vqvjLUdS0DUv+E1tPEax6XaCG1tYNUS5si6mZpBbyquIHDK0WWj8sCuP+Fvhz40+MfA934l8G2viLUop4vENjqMmpeLXWHWm/tkw2yWkZuQ1s9tDFcjObcNkKJBvLL9Fz/tR+IrCXXLibwvpkunW9l4rvLPy9RdJCuiatDp7mYtHhVcSmXK7ioQgBiRXEal+0l41+I1zfQaVDFo2naLZavqN5Pb3summ/is49PkGxri0aSM7b08FFGCrlsYVtyTlvC/wW/aLT+yYor3UtAt7SfxZt/tLUEvglrdRWR0+Ex/bnYNvW6VCZZPJIb5ipVmy9I+BX7TTeIPBrSajqenaNpkngi4v4n1uKWS6ntYIYtS3/AL47oY8XDSp1ndoyu8Kc+vXP7aJtpJrXTPDDXcVjFqpuJbq8IeD7Lp0l5bRycHMsogkDDJKAKxzvXPS237UV34j16DRPD/h0DUby9trO1fxB9p0yJS+nzXsrSCSDzMBYGRSqEMWzkAGgDmf2N/hr8W/Aur6pJ8SLrWWZ9Mhguvt2oLd2t/qAmkZ7uEm8nZcoVUny7cMNo8obAT9V18wW/wC2XLev4iW28O2E0mkRRSjbq4aG784WKwGGZYykkQlvh5syZVEEbYbzQBzvxW/bD1zwfBr0C6SIfEHhqz1e6msNOu0kg1N7D7PK6LJLCWRPs8ryM3DKY3QBjtakwPr/AKmkOACScDqSa5j4ifEvwx8KPDk2u+K9Xt9H0yNtgkmJLSOQcRxouWdyAcKoJODxxXxb8Xfjt42+NcUVuZr74WfDa9UeWFGdb1uNjwEVcmMMDkImWIVskg7a56lSNNXZrTpyqO0T1r49/tt6J8P7678L+BrT/hNvGsYZJYbU5tbBh1M0g4yp6ouSMYYpkGvlLxPY6lrfij+0vivf3fjrxrcKxsvC2ksskdou7a3yLwi7QCHJCn+JmPNeAeMf2p7PQkHgz4M6E2lh3Fv9vMO+8upMsoAHY/Ntyc47Ba4DwzaeO9G+Id14O8X63e6Rp+tpDfa6q3gDPHhgnmyA5PJIMYJyTjk8jn5J1dZ6LsdK5KekdX+B9I+K/j7Z2Otz29x8QPD/AIGkiCxjQtFsJtRjtlUBVV5odsZkAABCjAwBRXD23iT4e+FoE07SvDF9qNnGOLmNRArn1CllJHuRz6mit3RpPVxQKVRaXP2T8UeM9C8DaYNS8QavZ6LYGQRCe9mWJS5Bwoz1PBOBzgE9jXkWteOfhdq/xM0fwvbeF/C+vanHexXcV9ctYKsE91tuTNBuzI8rrtm3Io3naQzEMU7n4j+Ab/xleeGNV0fWINF13w7fyX1nPeWRvLd/Mtprd1kiEkbEbJ2IKupDAdRlT5npX7Js3hjRrLRdB8WQW+kxPot7cLqGk+fPPfaX5RtpBIk0YSJnt7cvEq5Kq6q6b8jGjUVjlkjqNI8ZfAXUPDanT5/BL6FpttHHGkdvbrBDBezeaixrtxsnmtg4CjEjwBsEoCL+v6x8E9YTR5tak8EaimtTf2tpz3iWs32uVgkYuI9wO522xxhxySEQEnArirX9k660nRNDsNN8ayWx0vw74c8PEtZSqt1HpQvhmXybiOTbN9uBKK67TCAWkV2Wr/gf9mbUPAC6JHpfi+DyoNPsdL1QT6Kkpu7e0vZ7uEQb5CsDMbqVHZllJXaU8t0DDq9oiLHRWHjL4KeJ01Rre48JXqGW8vL92t4cNJ5DR3cshZeW8lGSRjk7FKsccV18ng3wR490BJpdA0HXtF1aK3uQZrGGeG7RU/cOcqQ4VCNpOcA8YrzDxD+yxH4lNhDc+JnXT4td1jWLu1SxGLuO+dpBbMd/CI5QsefMVWUhQ5x6Z4btNO+Dvwu0HTNV1aIWOgaZa6c+oTL5QlMUaRBgmThmIGEBJJYAZOM1e4F2X4b+EpxIJPC2iv5glV92nxHcJY1ilB+XnfHGiN/eVFU5AAHg3xU+IXw+8Jx3nhLwT4E8M+JNatLK50q6D2UEOjaNbXDA3EN5Nt2hHYBpLZMs+35guQ1cr8ev2prCfxPoHgptU1Tw8+vzeXbaLaWs0Wp3sXzYklkQF7aJyuBEoWZuNzRgso+MPDnxD8YeK/j14o0P7ZeeDvAPgUXCSWXh+0t4zbASGJchi6+cwEmHBZlZchhgsM5Obdo/eawjHeX3HQ/Hr9oceEfiEkOpQXnxN+Ll15cdlLe27w2OnmXHlpZ23ZWypBxuYEMWJOTPpOs+J/iD4a/tjxXr0fw6giabSL4xXBm1q9mhbZPDFL/yxh3hgIbYKAMhmY5NfPHjK/8AD+n/ALUE3imTTri68PaTdQT/AGS61Ez3V1cJCrBppWJJdpCGYnPoM4rP1Hxp4l8TW19qGnWcqWtvNPd3F/BHsEYubp3AknbGAXkZQRgYXPYmpjCMNVq+5q6jej0S6HLfBTRXi8QXvidFSdNGurUpDOpJcPNy31VU6nIBbOOld/4t1saz8XtY124HlwzabFHFtYviVZlIQE9DgMewFeb6h4M1keIHsbLU9GEsEQK3ltqsa2Ur8ExR3WRG7jcBtDYyGAJxWG/iPVdFSyu9c0ueeznUSWss6tGkoB+9Gw+V+eM881pysiM0tGeti/bT0SLUAbKfaHEVx8rbCMqecZBByCODRXlvjfx9dfETVoNTuigMVpDaRrHGVKxxrtUNydzAdW4z6UUuU1VXzP6OkqTNFFeJR2REh1OXpRRXZEhkq9K8L+Lc8jeK/EshkYyafoltNZsWObaR3nV3jP8AAzBVBIwSAAelFFdy2I6n5L6dqd5efFj4WavcXc8+rP4fvLlr+SQtO0qi62yGQncWGBhs5GBXAeJdRutOPjJ7S5mtnuNWnMzQyFDKRO+N2OuNx6+p9aKK0Y2dF+zdaw658WrCDUoY9QgktrqZ4rpRKrOtpOVYhsgkEAg9QRXBX+q3uq6Xd3N7eT3lxZPawWs08rO8EaxrtRCTlVG44AwBk+tFFHQXU5+Z2aCeViTJ/aI+cnnoO9SWd3Ot1eKJpApeZCoc4KsnzD6HAyO+BRRTiEtjH0UD7GeP4v6Ciiis2Wtj/9k=\',
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
            \'fid\' => NULL,
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
            \'node_export_file_data\' => \'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\',
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
            \'fid\' => NULL,
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
            \'node_export_file_data\' => \'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\',
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
            \'fid\' => NULL,
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
            \'node_export_file_data\' => \'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\',
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
            \'fid\' => NULL,
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
            \'node_export_file_data\' => \'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\',
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
            \'fid\' => NULL,
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
            \'node_export_file_data\' => \'/9j/4AAQSkZJRgABAQAAAQABAAD//gA7Q1JFQVRPUjogZ2QtanBlZyB2MS4wICh1c2luZyBJSkcgSlBFRyB2NjIpLCBxdWFsaXR5ID0gOTAK/9sAQwADAgIDAgIDAwMDBAMDBAUIBQUEBAUKBwcGCAwKDAwLCgsLDQ4SEA0OEQ4LCxAWEBETFBUVFQwPFxgWFBgSFBUU/9sAQwEDBAQFBAUJBQUJFA0LDRQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQUFBQU/8AAEQgAMgBkAwEiAAIRAQMRAf/EAB8AAAEFAQEBAQEBAAAAAAAAAAABAgMEBQYHCAkKC//EALUQAAIBAwMCBAMFBQQEAAABfQECAwAEEQUSITFBBhNRYQcicRQygZGhCCNCscEVUtHwJDNicoIJChYXGBkaJSYnKCkqNDU2Nzg5OkNERUZHSElKU1RVVldYWVpjZGVmZ2hpanN0dXZ3eHl6g4SFhoeIiYqSk5SVlpeYmZqio6Slpqeoqaqys7S1tre4ubrCw8TFxsfIycrS09TV1tfY2drh4uPk5ebn6Onq8fLz9PX29/j5+v/EAB8BAAMBAQEBAQEBAQEAAAAAAAABAgMEBQYHCAkKC//EALURAAIBAgQEAwQHBQQEAAECdwABAgMRBAUhMQYSQVEHYXETIjKBCBRCkaGxwQkjM1LwFWJy0QoWJDThJfEXGBkaJicoKSo1Njc4OTpDREVGR0hJSlNUVVZXWFlaY2RlZmdoaWpzdHV2d3h5eoKDhIWGh4iJipKTlJWWl5iZmqKjpKWmp6ipqrKztLW2t7i5usLDxMXGx8jJytLT1NXW19jZ2uLj5OXm5+jp6vLz9PX29/j5+v/aAAwDAQACEQMRAD8A+27vVJ11mfSLC3m1HU4LVbySBZhEFjdmWMbm/iZkcAdPlJJHGcVfiFb3Ok+HL+0t7qWLXUma3FxKsBiaNSzpKWOFPysvGRkdcc16NqHhbQtR1SLU3uoYNSjhNt9rtb/yZGiLbvLYqw3Lu5AOcHJGMmqOrfDrwlren2FhdLaCxsYZbeC2gvfKRY5I/LkQhWGQyEqcnoT65r1Yyo6cy/q3r3t2OSara8rX9NeXa/focb4q8ajwpe31tNaXVy1pYw3zNHMq7lkuBbhRnoQxzzxj34p2oeNU03w14n1qW0ujB4fup7WeNZRulMW3cye3zDrg8V1fiX4aeE/F1y0+pTK7PbJZutvqjQK8SSeYiEJIMgOA3Pelj+GvhVdJ1rTHnE9lrMnm30U+qNIZXJG5txfcpbAzgjOBVKVDlV9+v4f8ElrEczs1bp+Pl6GAdfP2rS7JEeXUdRW4lggjnBTy4WUPIX9PnQYAJy4GOCRBr3iK98N6Auq32lXKxKVWaJLpC0TNMsSD0YHeGyOg9+K7TUPB+g6obF7q8SW7sZZJrW9GobbmJn+/iQMDgg4KnIIAGDgVNq3hrRNd0ZtKv7uG5s2ZGZWvgHZkcOpLBs8Mqn8PwrNSpXWmnX/ga9vxNGqrT116fhvp3v8AI878beOG8A6VY3uq2FwGuZ5YPJjuUyjJHJIPmJAO4RkDpyyjjki9feJDZeLrDw/5MrXF3a/bElM4VQnmLGRjuw3A4HUZ5rsvEfhLw/4sjt01Oe3nWAyMgW+CcvG0T52sMgpI64PZj9aafB/h8apaajHcQW91a2qWUTQXwRRArhxHtDYK7lU4PPHXFNSo8qutdf8AgdSWq3M7PTS369DzzUPiLaadc6tbPFO1zp+qWulNCJgGlecw7ZFHZR565zzw3XAzL4n8fWnhO9121vEmMmk6SNXbEwBnjJlGxM/xfuW68crzycd3c+B/Dd5HfpLLAy319DqVwBf433EXl+W/3+MeVHwMA7Bwecyan4O8O6xLq8l3LbytqtiNNvAL7aJbcb/kwG+X/WPyMH5jz0qlOhpdP+rf8ETjX1tJf1fy9DjPFviuHwb4eg1e9SZoJDGXRJQGRGGXfJ6hFJY45wDgGneOfEy+BNOhvbuGe4gklaIyJMqIhEbuNzMRy2zaoGSWZR3zXa3vhfQdSi8q6ntp4vsUunmN7wFTDIAHUjdySFUZ6479agvfBXhvUdOsbG7lt7m1sYmht0lv92wGMxbs7sltjMoc5YbiQRnNTGVHTmXe5UlWd+Vrpb9ehl6K76tpFlfr5sSXcEdwsbtkqHUMAffBorqdOstL0qwtrK3u7VLe2jWGJTdIxVFAVRktk4AAornlq3bY3V7as888V+JNH8D6S2p67eDTtORlRrl4ndFLEKoO1TjJIAz1JrJvfif4U0yzS7vNRms7WSVIFmuNOuY1Lu21Ey0Y5J4A7msn9rdIbf4HakJZUg36hpoG5gCR9tgyR64AJ47Un7VskEXw70WRrmLY3ifSGV2kGGUXS5Ye2OcjgCvTo0IVFT5r+82vut5eZ51avUhKootWik9V3v5+R6KtqHUEBgCM/MuCPqD0PsaxNP8AFeh6r4mv/D1pfrNrdhGJbqyEThokJ4YkqBgnjIJzXTeLtd07wd4e1XX9RmSPT7GCS5dy4AdVBO1fUtjAHcmvB/FFne/CnxR8NfiDq9/Zm3vZW0XXDDF5ZEd6TKrsxdt4jnwMgAAHpisqFFVk779PN2vb9PVo1xFd0WrbK1/JN2vv8+uiZ7d9j/2f0rEtfFWiXviy88Mw3ok12zhS4uLIQyBoo2+65bbtwexzzXS+JNZ0zwl4dv8AXdUuUg0yyge4mm3Agoqk/L6k9AB1JArwP4h6XN8K7fwv8ZpIlXUlu/8AiqIomDGWwuyq+WP732fEIXH91j3NLD0VWuno3ovN9v09Wh4jEOlZx2Wr8o9/19Ez3L7H7VhjxXoZ8Xf8Iv8Abl/t8wG5+wmNwxiGMvnbtxyOc9x611st7p0GkNqsl7AulLD9oN75g8rysbt+7uMc187ePZL3QfDfg34zyXFs0Fnqg1G6gihKzDTb3bE8ZfeQ5SLyTgKMFCe1PD0FVbUtOi/xdEGJxDopOOvV/wCHS7/E9p13ULPw3pM+pag7RWcO0SOiFyNzqgwqgk8sOBk+1YknxG8LR3d3aHVP9Ls4VuLi3FrO0sUbZ2uyBMgHBwe+K9Cit7XUbeKeB4ru2kxLFLGwdHGQVYHv2ORXkXhSW3k/ar+IMQuYmZvDmloFEoJZg82VHqQOw5HepowhOM3JO8Vf8UrbPuVVqThKKi1aTtt5N33R3mmSwaxptpf2pL2t1Ek8LMu0sjLuU4PTgg4PNZln4r0O/wDFV34at79ZNds4hPPY+W4aOMkYckrjHIGQe9dNrt/pngzw5e6rfvHZaXptu00hJCqqIucAeuBgAdTgV4J4whvvhvqHw3+J+q3loIJLtrHWlii2MltqB35dy53iGXyxkAYAqqFGNZvzvbze6X6fNGdevKjy2t05vTa/6+iZ7j9j/wA4ordS2jkQNGySIRlXVgwYeoPcUVw3PQNp9IF0AHt1lC84kQMB+dD6Kku2N7WNwo+VGjBAH07Diq/jPwPaeONFm0++jmicxzJBdw/6y3aWGSFnUdCdkrjDZHPTIFUrr4ZWd/D4ltLuW5uNO8QXf2q7t9gU48lYvLVxyFyiPkYIIbnkisnUmnZL8Trp0sNKClUqtPquW/VbO9no29baq3VM120YTRhGtg8YPCsgIH4U1tFSZArW0cqLkBWRWA/w9OK53VvhJFruqQapf6pqE2pJpLaRJOIY1EytE6GVlC437pHbjCjOMAZyRfCS3X7C0upahcNaR2KKxiiQH7Ldm5Q4VQOSdnrt5yWyxn2k/wCX8Tb6tg+VN4jXS/uPvr11SWvR+R0cmjB4wj2yvEuCEZAVGO4Hb+lN/siN4kX7PG8Q4RdqlR9B/hXMWfwYtrCO4FvqmpJLIyyLJtX5XW/lvQCMfMheZkZehQAZBwRrzfDqCbWDqQuLu1mOnrp/lWS+TEFHnZdV52PmYkMPmXbgHDMGFUn1j+Ip0MGnLlr3Wtvceu1uul9fu8zROjoIPLMEYgHG0qoQc/l1/WkOkIyiI2yFF5EZRSo/DtXOr8HrGSaGae6vJJlkjkmEcaxxT7LSa1XdGBtDFJyWZQCxRBwqhRrnwIo8Daf4ZS7vYYrGC0hju4wolb7O0bKWGNrKxjAdcYZWZeM01Un1X4k1KGEi4qFa97X91qye731t8m/LVF5NM8qNQkQROAoUAD8P/rUwaJGkwcWkay9dwjUNn61j2fwzi0zVNPvrO8ubV7Rr6TylgRkd7qRZXwGBKKHUEKuD1yTliYbj4UxTeF9R0FdU1GGyvLx79WRV3wTsA++M44P2nNzg5AckfcwtL2k19n8Svq+EbS9vp/ge12npfe1mls72bTWu/LpiygJLEjg4OyVQQefQ+9DaKssYQ20bouQFKKVHsB+lVYvBCLf6vNNI96mosZdl3bLK0DskaHy2bOE/dK2w5we+AAME/BayEWiIt7fIul2FpYIBGm2X7PdQ3IkcbfvM8ABxgYdu+CG6k1svxFToYSVlOtbb7De616rZ6efQ6lbHy1CrGFUcBQOBRWs8MrOT5bjJz0orXmPPWh5LijFFFajDFGKKKADFGKKKADFGKKKADFGKKKADFIAD2oooAMD0FFFFAH//2Q==\',
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
            \'fid\' => NULL,
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
            \'node_export_file_data\' => \'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\',
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
            \'fid\' => NULL,
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
            \'node_export_file_data\' => \'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\',
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
            \'fid\' => NULL,
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
            \'node_export_file_data\' => \'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\',
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
            \'fid\' => NULL,
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
            \'node_export_file_data\' => \'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\',
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
            \'fid\' => NULL,
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
            \'node_export_file_data\' => \'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\',
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
