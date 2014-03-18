<?php
/**
 * @file
 * employee.features.inc
 */

/**
 * Implements hook_node_info().
 */
function employee_node_info() {
  $items = array(
    'employee' => array(
      'name' => t('Employee'),
      'base' => 'node_content',
      'description' => t('An employee of a company'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
