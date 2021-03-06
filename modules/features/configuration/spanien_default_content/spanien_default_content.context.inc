<?php
/**
 * @file
 * spanien_default_content.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function spanien_default_content_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'default_content';
  $context->description = 'Default content for regions - eg. menus, search etc.';
  $context->tag = 'configuration';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-secondary-links' => array(
          'module' => 'menu',
          'delta' => 'menu-secondary-links',
          'region' => 'user_first',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'search',
          'weight' => '0',
        ),
        'menu_block-spanien_default_content-1' => array(
          'module' => 'menu_block',
          'delta' => 'spanien_default_content-1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'menu-menu-footer-links-first' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-links-first',
          'region' => 'footer_first',
          'weight' => '0',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => 2,
          'region' => 'footer_second',
          'weight' => '0',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => 3,
          'region' => 'footer_third',
          'weight' => '0',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => 4,
          'region' => 'footer_fourth',
          'weight' => '0',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'footer_fifth',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Default content for regions - eg. menus, search etc.');
  t('configuration');
  $export['default_content'] = $context;

  return $export;
}
