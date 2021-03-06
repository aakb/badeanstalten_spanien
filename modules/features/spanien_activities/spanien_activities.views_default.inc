<?php
/**
 * @file
 * spanien_activities.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function spanien_activities_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'activities';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Activities';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Activities';
  $handler->display->display_options['css_class'] = 'activities';
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Stigende';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Faldende';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementer pr. side';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Alle -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Forskydning';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['grouping'] = 'field_hold_date';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Der er ingen aktiviteter.';
  $handler->display->display_options['empty']['area']['format'] = 'editor_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* Felt: Indhold: Dato */
  $handler->display->display_options['fields']['field_hold_date']['id'] = 'field_hold_date';
  $handler->display->display_options['fields']['field_hold_date']['table'] = 'field_data_field_hold_date';
  $handler->display->display_options['fields']['field_hold_date']['field'] = 'field_hold_date';
  $handler->display->display_options['fields']['field_hold_date']['label'] = '';
  $handler->display->display_options['fields']['field_hold_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hold_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hold_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hold_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_hold_date']['settings'] = array(
    'format_type' => 'activities_medium_',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Felt: Indhold: Sted */
  $handler->display->display_options['fields']['field_hold_location']['id'] = 'field_hold_location';
  $handler->display->display_options['fields']['field_hold_location']['table'] = 'field_data_field_hold_location';
  $handler->display->display_options['fields']['field_hold_location']['field'] = 'field_hold_location';
  $handler->display->display_options['fields']['field_hold_location']['label'] = '';
  $handler->display->display_options['fields']['field_hold_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hold_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hold_location']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hold_location']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_hold_location']['type'] = 'text_plain';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = FALSE;
  /* Felt: Title + location */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title + location';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h4>[title_1] <span>- [field_hold_location]</span></h4>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_hold_image']['id'] = 'field_hold_image';
  $handler->display->display_options['fields']['field_hold_image']['table'] = 'field_data_field_hold_image';
  $handler->display->display_options['fields']['field_hold_image']['field'] = 'field_hold_image';
  $handler->display->display_options['fields']['field_hold_image']['label'] = '';
  $handler->display->display_options['fields']['field_hold_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hold_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hold_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_hold_image']['element_class'] = 'imagelink alignedimage';
  $handler->display->display_options['fields']['field_hold_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hold_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_hold_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hold_image']['settings'] = array(
    'image_style' => 'news_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_hold_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Beskrivelse */
  $handler->display->display_options['fields']['field_hold_description']['id'] = 'field_hold_description';
  $handler->display->display_options['fields']['field_hold_description']['table'] = 'field_data_field_hold_description';
  $handler->display->display_options['fields']['field_hold_description']['field'] = 'field_hold_description';
  $handler->display->display_options['fields']['field_hold_description']['label'] = '';
  $handler->display->display_options['fields']['field_hold_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hold_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hold_description']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hold_description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_hold_description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['field_api_classes'] = 0;
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<span class="link-icon">[title_1]</span>';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = FALSE;
  /* Sorteringskriterie: Indhold: Dato -  startdato (field_hold_date) */
  $handler->display->display_options['sorts']['field_hold_date_value']['id'] = 'field_hold_date_value';
  $handler->display->display_options['sorts']['field_hold_date_value']['table'] = 'field_data_field_hold_date';
  $handler->display->display_options['sorts']['field_hold_date_value']['field'] = 'field_hold_date_value';
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'holdbooking' => 'holdbooking',
  );
  /* Filterkriterie: Indhold: Dato -  startdato (field_hold_date) */
  $handler->display->display_options['filters']['field_hold_date_value']['id'] = 'field_hold_date_value';
  $handler->display->display_options['filters']['field_hold_date_value']['table'] = 'field_data_field_hold_date';
  $handler->display->display_options['filters']['field_hold_date_value']['field'] = 'field_hold_date_value';
  $handler->display->display_options['filters']['field_hold_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_hold_date_value']['default_date'] = 'now';

  /* Display: Today */
  $handler = $view->new_display('page', 'Today', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Vis kun i dag';
  $handler->display->display_options['display_description'] = 'Show activities that happens today only';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Der er ingen aktiviteter i dag, se <a href="/aktiviteter/uge">aktiviteter i denne uge</a>, eller <a href="/aktiviteter/maaned">aktiviteter i denne måned</a>.';
  $handler->display->display_options['empty']['area']['format'] = 'editor_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Felt: Indhold: Dato */
  $handler->display->display_options['fields']['field_hold_date']['id'] = 'field_hold_date';
  $handler->display->display_options['fields']['field_hold_date']['table'] = 'field_data_field_hold_date';
  $handler->display->display_options['fields']['field_hold_date']['field'] = 'field_hold_date';
  $handler->display->display_options['fields']['field_hold_date']['label'] = '';
  $handler->display->display_options['fields']['field_hold_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hold_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hold_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_hold_date']['settings'] = array(
    'format_type' => 'activities_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = FALSE;
  /* Felt: Indhold: Sted */
  $handler->display->display_options['fields']['field_hold_location']['id'] = 'field_hold_location';
  $handler->display->display_options['fields']['field_hold_location']['table'] = 'field_data_field_hold_location';
  $handler->display->display_options['fields']['field_hold_location']['field'] = 'field_hold_location';
  $handler->display->display_options['fields']['field_hold_location']['label'] = '';
  $handler->display->display_options['fields']['field_hold_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hold_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hold_location']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_hold_location']['type'] = 'text_plain';
  /* Felt: Title + location */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['ui_name'] = 'Title + location';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h4>[title_1] <span>- [field_hold_location]</span></h4>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Felt: Indhold: Billede */
  $handler->display->display_options['fields']['field_hold_image']['id'] = 'field_hold_image';
  $handler->display->display_options['fields']['field_hold_image']['table'] = 'field_data_field_hold_image';
  $handler->display->display_options['fields']['field_hold_image']['field'] = 'field_hold_image';
  $handler->display->display_options['fields']['field_hold_image']['label'] = '';
  $handler->display->display_options['fields']['field_hold_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hold_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hold_image']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_hold_image']['element_class'] = 'imagelink alignedimage';
  $handler->display->display_options['fields']['field_hold_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hold_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hold_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_hold_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hold_image']['settings'] = array(
    'image_style' => 'news_thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_hold_image']['field_api_classes'] = 0;
  /* Felt: Indhold: Beskrivelse */
  $handler->display->display_options['fields']['field_hold_description']['id'] = 'field_hold_description';
  $handler->display->display_options['fields']['field_hold_description']['table'] = 'field_data_field_hold_description';
  $handler->display->display_options['fields']['field_hold_description']['field'] = 'field_hold_description';
  $handler->display->display_options['fields']['field_hold_description']['label'] = '';
  $handler->display->display_options['fields']['field_hold_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_hold_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_hold_description']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['element_class'] = 'text-content';
  $handler->display->display_options['fields']['field_hold_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hold_description']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_hold_description']['field_api_classes'] = 0;
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<span class="link-icon">[title_1]</span>';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'holdbooking' => 'holdbooking',
  );
  /* Filterkriterie: Indhold: Dato -  startdato (field_hold_date) */
  $handler->display->display_options['filters']['field_hold_date_value']['id'] = 'field_hold_date_value';
  $handler->display->display_options['filters']['field_hold_date_value']['table'] = 'field_data_field_hold_date';
  $handler->display->display_options['filters']['field_hold_date_value']['field'] = 'field_hold_date_value';
  $handler->display->display_options['filters']['field_hold_date_value']['default_date'] = 'today';
  $handler->display->display_options['filters']['field_hold_date_value']['default_to_date'] = 'next monday';
  $handler->display->display_options['path'] = 'aktiviteter';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Aktiviteter';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Week */
  $handler = $view->new_display('page', 'Week', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Denne uge';
  $handler->display->display_options['display_description'] = 'Show activities that happens this week only';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Der er ingen aktiviteter i denne uge, se <a href="/aktiviteter/maaned">alle aktiviteter i denne måned</a>.';
  $handler->display->display_options['empty']['area']['format'] = 'editor_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'holdbooking' => 'holdbooking',
  );
  /* Filterkriterie: Indhold: Dato -  startdato (field_hold_date) */
  $handler->display->display_options['filters']['field_hold_date_value']['id'] = 'field_hold_date_value';
  $handler->display->display_options['filters']['field_hold_date_value']['table'] = 'field_data_field_hold_date';
  $handler->display->display_options['filters']['field_hold_date_value']['field'] = 'field_hold_date_value';
  $handler->display->display_options['filters']['field_hold_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_hold_date_value']['default_date'] = 'last monday';
  $handler->display->display_options['filters']['field_hold_date_value']['default_to_date'] = 'next monday -1 day';
  /* Filterkriterie: Indhold: Dato -  startdato (field_hold_date) */
  $handler->display->display_options['filters']['field_hold_date_value_1']['id'] = 'field_hold_date_value_1';
  $handler->display->display_options['filters']['field_hold_date_value_1']['table'] = 'field_data_field_hold_date';
  $handler->display->display_options['filters']['field_hold_date_value_1']['field'] = 'field_hold_date_value';
  $handler->display->display_options['filters']['field_hold_date_value_1']['operator'] = '>=';
  $handler->display->display_options['filters']['field_hold_date_value_1']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'aktiviteter/uge';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Denne uge';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Month */
  $handler = $view->new_display('page', 'Month', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Denne måned';
  $handler->display->display_options['display_description'] = 'Show activities that happens this month only';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Opførsel ved ingen resultater: Global: Tekstområde */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Der er ingen aktiviteter i denne måned.';
  $handler->display->display_options['empty']['area']['format'] = 'editor_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filterkriterie: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'holdbooking' => 'holdbooking',
  );
  /* Filterkriterie: Indhold: Dato -  startdato (field_hold_date) */
  $handler->display->display_options['filters']['field_hold_date_value']['id'] = 'field_hold_date_value';
  $handler->display->display_options['filters']['field_hold_date_value']['table'] = 'field_data_field_hold_date';
  $handler->display->display_options['filters']['field_hold_date_value']['field'] = 'field_hold_date_value';
  $handler->display->display_options['filters']['field_hold_date_value']['granularity'] = 'month';
  $handler->display->display_options['filters']['field_hold_date_value']['form_type'] = 'date_text';
  $handler->display->display_options['filters']['field_hold_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_hold_date_value']['default_to_date'] = 'last day of month';
  /* Filterkriterie: Indhold: Dato -  startdato (field_hold_date) */
  $handler->display->display_options['filters']['field_hold_date_value_1']['id'] = 'field_hold_date_value_1';
  $handler->display->display_options['filters']['field_hold_date_value_1']['table'] = 'field_data_field_hold_date';
  $handler->display->display_options['filters']['field_hold_date_value_1']['field'] = 'field_hold_date_value';
  $handler->display->display_options['filters']['field_hold_date_value_1']['operator'] = '>=';
  $handler->display->display_options['filters']['field_hold_date_value_1']['default_date'] = 'now';
  $handler->display->display_options['path'] = 'aktiviteter/maaned';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Denne måned';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: All */
  $handler = $view->new_display('page', 'All', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Vis alle';
  $handler->display->display_options['path'] = 'aktiviteter/all';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Vis alle';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['activities'] = array(
    t('Master'),
    t('Activities'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Stigende'),
    t('Faldende'),
    t('Elementer pr. side'),
    t('- Alle -'),
    t('Forskydning'),
    t('Der er ingen aktiviteter.'),
    t('<h4>[title_1] <span>- [field_hold_location]</span></h4>'),
    t('<span class="link-icon">[title_1]</span>'),
    t('Today'),
    t('Vis kun i dag'),
    t('Show activities that happens today only'),
    t('Der er ingen aktiviteter i dag, se <a href="/aktiviteter/uge">aktiviteter i denne uge</a>, eller <a href="/aktiviteter/maaned">aktiviteter i denne måned</a>.'),
    t('Week'),
    t('Denne uge'),
    t('Show activities that happens this week only'),
    t('Der er ingen aktiviteter i denne uge, se <a href="/aktiviteter/maaned">alle aktiviteter i denne måned</a>.'),
    t('Month'),
    t('Denne måned'),
    t('Show activities that happens this month only'),
    t('Der er ingen aktiviteter i denne måned.'),
    t('All'),
    t('Vis alle'),
  );
  $export['activities'] = $view;

  return $export;
}
