<?php
/**
 * @file
 * tsitaatcom_migrate_help.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tsitaatcom_migrate_help_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function tsitaatcom_migrate_help_node_info() {
  $items = array(
    'migrate_help' => array(
      'name' => t('Migrate help'),
      'base' => 'node_content',
      'description' => t('Temporary content type during migration.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
