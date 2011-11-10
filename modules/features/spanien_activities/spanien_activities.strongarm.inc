<?php
/**
 * @file
 * spanien_teams.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function spanien_activities_strongarm() {
  $export = array();
  
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_holdbooking';
  $strongarm->value = '0';
  $export['language_content_type_holdbooking'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_holdbooking';
  $strongarm->value = array();
  $export['menu_options_holdbooking'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_holdbooking';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_holdbooking'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_holdbooking';
  $strongarm->value = array();
  $export['node_options_holdbooking'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_holdbooking';
  $strongarm->value = '0';
  $export['node_preview_holdbooking'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_holdbooking';
  $strongarm->value = 0;
  $export['node_submitted_holdbooking'] = $strongarm;

  return $export;
}