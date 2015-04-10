<?php
/**
 * @file
 * ca_news.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ca_news_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_news_node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'CA News: Node Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_news' => 'ca_news',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_news_node_template',
          'settings' => array(
            'ca_news_node_template' => 'ca_news_node_template_one',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-news-node ca-news-node-template-1',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '13e3f785-4024-483c-996a-d63f5ea8fba3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dc807163-834e-43e7-b0f1-d943a16aa077';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_news_nodes-ca_news_node_1_a';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dc807163-834e-43e7-b0f1-d943a16aa077';
    $display->content['new-dc807163-834e-43e7-b0f1-d943a16aa077'] = $pane;
    $display->panels['middle'][0] = 'new-dc807163-834e-43e7-b0f1-d943a16aa077';
    $pane = new stdClass();
    $pane->pid = 'new-11af06c1-b387-4760-af9a-1cb8e7463862';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_news_nodes-ca_news_node_1_b';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '11af06c1-b387-4760-af9a-1cb8e7463862';
    $display->content['new-11af06c1-b387-4760-af9a-1cb8e7463862'] = $pane;
    $display->panels['middle'][1] = 'new-11af06c1-b387-4760-af9a-1cb8e7463862';
    $pane = new stdClass();
    $pane->pid = 'new-bfa3e702-18aa-40c8-a017-631a4779b8dd';
    $pane->panel = 'middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = '';
    $pane->uuid = 'bfa3e702-18aa-40c8-a017-631a4779b8dd';
    $display->content['new-bfa3e702-18aa-40c8-a017-631a4779b8dd'] = $pane;
    $display->panels['middle'][2] = 'new-bfa3e702-18aa-40c8-a017-631a4779b8dd';
    $pane = new stdClass();
    $pane->pid = 'new-1f63fbc1-2dfe-4033-ac3c-92a82263c3cb';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ca_news_n_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '1f63fbc1-2dfe-4033-ac3c-92a82263c3cb';
    $display->content['new-1f63fbc1-2dfe-4033-ac3c-92a82263c3cb'] = $pane;
    $display->panels['middle'][3] = 'new-1f63fbc1-2dfe-4033-ac3c-92a82263c3cb';
    $pane = new stdClass();
    $pane->pid = 'new-a939194c-61c5-4eb6-aaa6-64c4ba0c339f';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'addtoany-addtoany_button';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<node>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ca-addtoany-feature',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'a939194c-61c5-4eb6-aaa6-64c4ba0c339f';
    $display->content['new-a939194c-61c5-4eb6-aaa6-64c4ba0c339f'] = $pane;
    $display->panels['middle'][4] = 'new-a939194c-61c5-4eb6-aaa6-64c4ba0c339f';
    $pane = new stdClass();
    $pane->pid = 'new-e87e634a-65db-40f3-bd1b-9b5a50702ebc';
    $pane->panel = 'middle';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => 0,
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = '';
    $pane->uuid = 'e87e634a-65db-40f3-bd1b-9b5a50702ebc';
    $display->content['new-e87e634a-65db-40f3-bd1b-9b5a50702ebc'] = $pane;
    $display->panels['middle'][5] = 'new-e87e634a-65db-40f3-bd1b-9b5a50702ebc';
    $pane = new stdClass();
    $pane->pid = 'new-b839d920-d9a2-4530-95ca-2cc627eb2f3d';
    $pane->panel = 'middle';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '30',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'comments',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = '';
    $pane->uuid = 'b839d920-d9a2-4530-95ca-2cc627eb2f3d';
    $display->content['new-b839d920-d9a2-4530-95ca-2cc627eb2f3d'] = $pane;
    $display->panels['middle'][6] = 'new-b839d920-d9a2-4530-95ca-2cc627eb2f3d';
    $pane = new stdClass();
    $pane->pid = 'new-966684c7-68b4-4dfd-994a-300340d4f368';
    $pane->panel = 'middle';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'comment-form',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = '';
    $pane->uuid = '966684c7-68b4-4dfd-994a-300340d4f368';
    $display->content['new-966684c7-68b4-4dfd-994a-300340d4f368'] = $pane;
    $display->panels['middle'][7] = 'new-966684c7-68b4-4dfd-994a-300340d4f368';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_news_node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_news_node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'CA News: Node Template Two',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'ca_news' => 'ca_news',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_news_node_template',
          'settings' => array(
            'ca_news_node_template' => 'ca_news_node_template_two',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-news-node ca-news-node-template-2',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top_center',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'top_center' => array(
        'type' => 'region',
        'title' => 'Top Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'center' => NULL,
      'top_center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '3074ece4-5bc5-4162-80c1-836b78338814';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-768776f8-185f-4b68-916e-df89f5354444';
    $pane->panel = 'center';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = '';
    $pane->uuid = '768776f8-185f-4b68-916e-df89f5354444';
    $display->content['new-768776f8-185f-4b68-916e-df89f5354444'] = $pane;
    $display->panels['center'][0] = 'new-768776f8-185f-4b68-916e-df89f5354444';
    $pane = new stdClass();
    $pane->pid = 'new-5a79aa06-08c9-4cef-8c21-8e1bdb21e798';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_ca_news_n_categories';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5a79aa06-08c9-4cef-8c21-8e1bdb21e798';
    $display->content['new-5a79aa06-08c9-4cef-8c21-8e1bdb21e798'] = $pane;
    $display->panels['center'][1] = 'new-5a79aa06-08c9-4cef-8c21-8e1bdb21e798';
    $pane = new stdClass();
    $pane->pid = 'new-567e7257-aa75-48dc-a7e7-2ba00bc405e0';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'addtoany-addtoany_button';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<node>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ca-addtoany-feature',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '567e7257-aa75-48dc-a7e7-2ba00bc405e0';
    $display->content['new-567e7257-aa75-48dc-a7e7-2ba00bc405e0'] = $pane;
    $display->panels['center'][2] = 'new-567e7257-aa75-48dc-a7e7-2ba00bc405e0';
    $pane = new stdClass();
    $pane->pid = 'new-5b1ec244-a5b2-461d-84f2-0d1123a462ce';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => 0,
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = '';
    $pane->uuid = '5b1ec244-a5b2-461d-84f2-0d1123a462ce';
    $display->content['new-5b1ec244-a5b2-461d-84f2-0d1123a462ce'] = $pane;
    $display->panels['center'][3] = 'new-5b1ec244-a5b2-461d-84f2-0d1123a462ce';
    $pane = new stdClass();
    $pane->pid = 'new-578a5e0e-51f4-43b5-8924-c0e22fe9ac60';
    $pane->panel = 'center';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '30',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'comments',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = '';
    $pane->uuid = '578a5e0e-51f4-43b5-8924-c0e22fe9ac60';
    $display->content['new-578a5e0e-51f4-43b5-8924-c0e22fe9ac60'] = $pane;
    $display->panels['center'][4] = 'new-578a5e0e-51f4-43b5-8924-c0e22fe9ac60';
    $pane = new stdClass();
    $pane->pid = 'new-6d506db4-ebd6-4b63-b343-9b1487988624';
    $pane->panel = 'center';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'comment-form',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = '';
    $pane->uuid = '6d506db4-ebd6-4b63-b343-9b1487988624';
    $display->content['new-6d506db4-ebd6-4b63-b343-9b1487988624'] = $pane;
    $display->panels['center'][5] = 'new-6d506db4-ebd6-4b63-b343-9b1487988624';
    $pane = new stdClass();
    $pane->pid = 'new-668b7a7f-7c72-44f0-b5d2-9a02fbe63dbf';
    $pane->panel = 'top_center';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_news_nodes-ca_news_node_template_2_a';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '668b7a7f-7c72-44f0-b5d2-9a02fbe63dbf';
    $display->content['new-668b7a7f-7c72-44f0-b5d2-9a02fbe63dbf'] = $pane;
    $display->panels['top_center'][0] = 'new-668b7a7f-7c72-44f0-b5d2-9a02fbe63dbf';
    $pane = new stdClass();
    $pane->pid = 'new-2b8d7343-9eeb-4c9f-a6aa-9ba3118fd557';
    $pane->panel = 'top_center';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_news_nodes-ca_news_node_template_2_b';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2b8d7343-9eeb-4c9f-a6aa-9ba3118fd557';
    $display->content['new-2b8d7343-9eeb-4c9f-a6aa-9ba3118fd557'] = $pane;
    $display->panels['top_center'][1] = 'new-2b8d7343-9eeb-4c9f-a6aa-9ba3118fd557';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_news_node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_news_term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA News: Term List Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-news-list-term ca-news-list-term-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'ca_news_categories' => 'ca_news_categories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_news_term_template',
          'settings' => array(
            'ca_news_term_template' => 'ca_news_term_template_one',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '794e1a2e-e4c9-4d13-a91f-5e0f7425fedb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3e8e0938-f911-4712-9262-d593d188bd91';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_news_term-ca_news_term_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3e8e0938-f911-4712-9262-d593d188bd91';
    $display->content['new-3e8e0938-f911-4712-9262-d593d188bd91'] = $pane;
    $display->panels['middle'][0] = 'new-3e8e0938-f911-4712-9262-d593d188bd91';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3e8e0938-f911-4712-9262-d593d188bd91';
  $handler->conf['display'] = $display;
  $export['ca_news_term_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_news_term_view_panel_context_2';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'CA News: Term List Template Two',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-news-list-term ca-news-list-term-template-2',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'ca_news_categories' => 'ca_news_categories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_news_term_template',
          'settings' => array(
            'ca_news_term_template' => 'ca_news_term_template_two',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = 'e230c44e-0ec7-4bcb-af24-fc1ac93099d2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ef5c1fc6-6f1e-4574-ad6e-22271d2e34c5';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_news_term-ca_news_term_list_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ef5c1fc6-6f1e-4574-ad6e-22271d2e34c5';
    $display->content['new-ef5c1fc6-6f1e-4574-ad6e-22271d2e34c5'] = $pane;
    $display->panels['middle'][0] = 'new-ef5c1fc6-6f1e-4574-ad6e-22271d2e34c5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_news_term_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_news_term_view_panel_context_3';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'CA News: Term List Template Three',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-news-list-term ca-news-list-term-template-3',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'ca_news_categories' => 'ca_news_categories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_news_term_template',
          'settings' => array(
            'ca_news_term_template' => 'ca_news_term_template_three',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = 'f82e3ef4-e8ee-4604-9f25-454118898114';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0264ced6-f18b-4261-8bcd-f34b3c662420';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_news_term-ca_news_term_list_3_main';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0264ced6-f18b-4261-8bcd-f34b3c662420';
    $display->content['new-0264ced6-f18b-4261-8bcd-f34b3c662420'] = $pane;
    $display->panels['middle'][0] = 'new-0264ced6-f18b-4261-8bcd-f34b3c662420';
    $pane = new stdClass();
    $pane->pid = 'new-f5cf453c-cef2-415f-b5b5-f3b9dd0c65a6';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_news_term-ca_news_term_list_3_sub';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f5cf453c-cef2-415f-b5b5-f3b9dd0c65a6';
    $display->content['new-f5cf453c-cef2-415f-b5b5-f3b9dd0c65a6'] = $pane;
    $display->panels['middle'][1] = 'new-f5cf453c-cef2-415f-b5b5-f3b9dd0c65a6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_news_term_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_news_term_view_panel_context_4';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'CA News: Term List Template Four',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-news-list-term ca-news-list-term-template-4',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'ca_news_categories' => 'ca_news_categories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_news_term_template',
          'settings' => array(
            'ca_news_term_template' => 'ca_news_term_template_four',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '3e5d950c-a88f-455d-bc9f-4a814d0e3dfd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ce331447-3067-4bb4-ae99-908f7bd87bba';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_news_term-ca_news_term_list_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ce331447-3067-4bb4-ae99-908f7bd87bba';
    $display->content['new-ce331447-3067-4bb4-ae99-908f7bd87bba'] = $pane;
    $display->panels['middle'][0] = 'new-ce331447-3067-4bb4-ae99-908f7bd87bba';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_news_term_view_panel_context_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_news_term_view_panel_context_5';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'CA News: Term List Template Five',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-news-list-term ca-news-list-term-template-5',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'ca_news_categories' => 'ca_news_categories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_news_term_template',
          'settings' => array(
            'ca_news_term_template' => 'ca_news_term_template_five',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%term:name';
  $display->uuid = '2ad6d5df-3d09-4c5a-990e-6eaa1208692b';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2635fdd2-ca39-4d59-8d35-5ee308541d85';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_news_term-ca_news_term_list_5_main';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2635fdd2-ca39-4d59-8d35-5ee308541d85';
    $display->content['new-2635fdd2-ca39-4d59-8d35-5ee308541d85'] = $pane;
    $display->panels['left'][0] = 'new-2635fdd2-ca39-4d59-8d35-5ee308541d85';
    $pane = new stdClass();
    $pane->pid = 'new-ac83c6d9-690e-4a2a-9798-8ea72882adc5';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_news_term-ca_news_list_5_sub';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ac83c6d9-690e-4a2a-9798-8ea72882adc5';
    $display->content['new-ac83c6d9-690e-4a2a-9798-8ea72882adc5'] = $pane;
    $display->panels['right'][0] = 'new-ac83c6d9-690e-4a2a-9798-8ea72882adc5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_news_term_view_panel_context_5'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ca_news_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_news_add_news';
  $page->task = 'page';
  $page->admin_title = 'Ca News: Add News';
  $page->admin_description = '';
  $page->path = 'news/add_news';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 227698236,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add News',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_news_add_news_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_news_add_news';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'node_create_menu',
    'context_admin_options_items' => 'ca_news',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'empty',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_news_add_news'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_news_administration';
  $page->task = 'page';
  $page->admin_title = 'CA News: Administration';
  $page->admin_description = '';
  $page->path = 'news/admin/administration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 227698236,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Administer',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Administration',
      'name' => 'navigation',
      'weight' => '2',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_news_administration_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_news_administration';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA News: Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-news-admin',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '0bcbbc42-46e1-46fa-b5c1-8c6be6129d0d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-412f4667-10df-4690-a05d-11dc6e5479d4';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_news_admin-ca_news_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '412f4667-10df-4690-a05d-11dc6e5479d4';
    $display->content['new-412f4667-10df-4690-a05d-11dc6e5479d4'] = $pane;
    $display->panels['middle'][0] = 'new-412f4667-10df-4690-a05d-11dc6e5479d4';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_news_administration'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_news_list_view';
  $page->task = 'page';
  $page->admin_title = 'CA News: List View';
  $page->admin_description = '';
  $page->path = 'news/view';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'View',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'News',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_news_list_view_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_news_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA News: List Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_news_list_template',
          'settings' => array(
            'ca_news_list_template' => 'ca_news_list_template_one',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-news-list ca-news-list-template-1',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c6940465-b969-4433-b446-b5d964062140';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-11c86008-877e-42fa-b2ee-388aa8c4fa0d';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_news_lists-ca_news_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '11c86008-877e-42fa-b2ee-388aa8c4fa0d';
    $display->content['new-11c86008-877e-42fa-b2ee-388aa8c4fa0d'] = $pane;
    $display->panels['middle'][0] = 'new-11c86008-877e-42fa-b2ee-388aa8c4fa0d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_news_list_view_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'ca_news_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'CA News: List Template Two',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-news-list ca-news-list-template-2',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_news_list_template',
          'settings' => array(
            'ca_news_list_template' => 'ca_news_list_template_two',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '59487925-0d79-4d36-8c0e-d442c7dfc892';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-81c3553f-aee9-48a3-9080-442f91ef3f85';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_news_lists-ca_news_list_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '81c3553f-aee9-48a3-9080-442f91ef3f85';
    $display->content['new-81c3553f-aee9-48a3-9080-442f91ef3f85'] = $pane;
    $display->panels['middle'][0] = 'new-81c3553f-aee9-48a3-9080-442f91ef3f85';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-81c3553f-aee9-48a3-9080-442f91ef3f85';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_news_list_view_panel_context_3';
  $handler->task = 'page';
  $handler->subtask = 'ca_news_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'CA News: List Template Three',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-news-list ca-news-list-template-3',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_news_list_template',
          'settings' => array(
            'ca_news_list_template' => 'ca_news_list_template_three',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3f05f7bd-2bcb-45b1-9169-5e76f43c55f2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-67ab8eae-143c-41d4-9f1b-b4b9fcc37110';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_news_lists-ca_news_list_3_main';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '67ab8eae-143c-41d4-9f1b-b4b9fcc37110';
    $display->content['new-67ab8eae-143c-41d4-9f1b-b4b9fcc37110'] = $pane;
    $display->panels['middle'][0] = 'new-67ab8eae-143c-41d4-9f1b-b4b9fcc37110';
    $pane = new stdClass();
    $pane->pid = 'new-5d496889-2e9b-44e2-bf7e-83c53a71d279';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_news_lists-ca_news_list_3_sub';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5d496889-2e9b-44e2-bf7e-83c53a71d279';
    $display->content['new-5d496889-2e9b-44e2-bf7e-83c53a71d279'] = $pane;
    $display->panels['middle'][1] = 'new-5d496889-2e9b-44e2-bf7e-83c53a71d279';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-67ab8eae-143c-41d4-9f1b-b4b9fcc37110';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_news_list_view_panel_context_4';
  $handler->task = 'page';
  $handler->subtask = 'ca_news_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'CA News: List Template Four',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-news-list ca-news-list-template-4',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_news_list_template',
          'settings' => array(
            'ca_news_list_template' => 'ca_news_list_template_four',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '77708f6c-77af-4e8f-86c1-436e5e1b6246';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6150fc0a-4e4a-4942-90b5-98884b2dab13';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_news_lists-ca_news_list_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6150fc0a-4e4a-4942-90b5-98884b2dab13';
    $display->content['new-6150fc0a-4e4a-4942-90b5-98884b2dab13'] = $pane;
    $display->panels['middle'][0] = 'new-6150fc0a-4e4a-4942-90b5-98884b2dab13';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6150fc0a-4e4a-4942-90b5-98884b2dab13';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_news_list_view_panel_context_5';
  $handler->task = 'page';
  $handler->subtask = 'ca_news_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'CA News: List Template Five',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-news-list ca-news-list-template-5',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ca_news_list_template',
          'settings' => array(
            'ca_news_list_template' => 'ca_news_list_template_five',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '470e1d32-8137-41d2-9148-7d702d689ce6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-57badad2-0b5b-42a9-9cd7-fa81b8f8b8a2';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_news_lists-ca_news_list_5_main';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '57badad2-0b5b-42a9-9cd7-fa81b8f8b8a2';
    $display->content['new-57badad2-0b5b-42a9-9cd7-fa81b8f8b8a2'] = $pane;
    $display->panels['left'][0] = 'new-57badad2-0b5b-42a9-9cd7-fa81b8f8b8a2';
    $pane = new stdClass();
    $pane->pid = 'new-4c0da5dd-a461-4ad5-b2b4-6d971adabcf4';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_news_lists-ca_news_list_5_sub';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4c0da5dd-a461-4ad5-b2b4-6d971adabcf4';
    $display->content['new-4c0da5dd-a461-4ad5-b2b4-6d971adabcf4'] = $pane;
    $display->panels['right'][0] = 'new-4c0da5dd-a461-4ad5-b2b4-6d971adabcf4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-57badad2-0b5b-42a9-9cd7-fa81b8f8b8a2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_news_list_view'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_news_taxonomy_admin';
  $page->task = 'page';
  $page->admin_title = 'CA News: Taxonomy Admin';
  $page->admin_description = '';
  $page->path = 'news/admin/taxonomy';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 227698236,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Taxonomy Admin',
    'name' => 'navigation',
    'weight' => '5',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Administration',
      'name' => 'navigation',
      'weight' => '2',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_news_taxonomy_admin__ca_news_taxonomy_admin';
  $handler->task = 'page';
  $handler->subtask = 'ca_news_taxonomy_admin';
  $handler->handler = 'menu_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'CA News: Taxonomy Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'ca_news_taxonomy_admin',
    'context_admin_options' => 'taxonomy_list_menu',
    'context_admin_vocabulary' => 'ca_news_categories',
    'context_admin_vocabulary_options' => 'list',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_news_taxonomy_admin'] = $page;

  return $pages;

}
