<?php
/**
 * @file
 * speedysito_blocks_bean.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function speedysito_blocks_bean_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bean-block_standard-field_body'
  $field_instances['bean-block_standard-field_body'] = array(
    'bundle' => 'block_standard',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bean',
    'field_name' => 'field_body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 11,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');

  return $field_instances;
}
