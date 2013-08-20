<?php
/**
 * @file
 * mallory_and_drew_base.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mallory_and_drew_base_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mad_media';
  $context->description = 'Pics & Video';
  $context->tag = 'Mallory & Drew';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'pics-video' => 'pics-video',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-photos-block_1' => array(
          'module' => 'views',
          'delta' => 'photos-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-videos-block_1' => array(
          'module' => 'views',
          'delta' => 'videos-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Mallory & Drew');
  t('Pics & Video');
  $export['mad_media'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mad_sitewide';
  $context->description = 'Sitewide Context';
  $context->tag = 'Mallory & Drew';
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
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Mallory & Drew');
  t('Sitewide Context');
  $export['mad_sitewide'] = $context;

  return $export;
}
