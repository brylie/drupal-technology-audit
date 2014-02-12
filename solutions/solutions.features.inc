<?php
/**
 * @file
 * solutions.features.inc
 */

/**
 * Implements hook_node_info().
 */
function solutions_node_info() {
  $items = array(
    'solution' => array(
      'name' => t('Solution'),
      'base' => 'node_content',
      'description' => t('Specific technology solution.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
