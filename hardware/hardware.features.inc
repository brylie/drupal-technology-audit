<?php
/**
 * @file
 * hardware.features.inc
 */

/**
 * Implements hook_node_info().
 */
function hardware_node_info() {
  $items = array(
    'hardware' => array(
      'name' => t('Hardware'),
      'base' => 'node_content',
      'description' => t('Hardware devices such as printers, laptops, scanners, etc.'),
      'has_title' => '1',
      'title_label' => t('Internal Name'),
      'help' => t('Describe the attributes of the hardware device. Internal name is a human friendly name for internal reference (e.g. "staff printer").'),
    ),
    'manufacturer' => array(
      'name' => t('Manufacturer'),
      'base' => 'node_content',
      'description' => t('Manufacturer of hardware devices.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
