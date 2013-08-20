<?php
/**
 * @file
 * mallory_and_drew_base.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function mallory_and_drew_base_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_number_of_adults'
  $field_bases['field_number_of_adults'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_number_of_adults',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_number_of_children'
  $field_bases['field_number_of_children'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_number_of_children',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  return $field_bases;
}
