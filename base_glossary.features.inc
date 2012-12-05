<?php
/**
 * @file
 * base_glossary.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function base_glossary_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function base_glossary_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function base_glossary_node_info() {
  $items = array(
    'glossary_term' => array(
      'name' => t('Glossary Term'),
      'base' => 'node_content',
      'description' => t('Use a <em>Glossary Term</em> to provide a terms and definitions.'),
      'has_title' => '1',
      'title_label' => t('Term'),
      'help' => '',
    ),
  );
  return $items;
}
