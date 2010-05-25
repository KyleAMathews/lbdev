<?php

/**
 * Helper to implemetation of hook_context_default_contexts().
 */
function _lbdev_context_default_contexts() {
  $items = array();

  $items[] = array(
    'namespace' => 'features',
    'attribute' => 'user',
    'value' => 'user_1',
    'description' => 'User is User 1',
    'block' => array(
      'demo_0' => array(
        'module' => 'demo',
        'delta' => '0',
        'weight' => 20,
        'region' => 'right',
        'status' => '0',
        'label' => 'Demo site reset',
        'type' => 'context_ui',
      ),
      'context_ui_devel' => array(
        'module' => 'context_ui',
        'delta' => 'devel',
        'weight' => 21,
        'region' => 'right',
        'status' => '0',
        'label' => 'Context Devel',
        'type' => 'context_ui',
      ),
      'devel_0' => array(
        'module' => 'devel',
        'delta' => '0',
        'weight' => 22,
        'region' => 'right',
        'status' => '0',
        'label' => 'Switch user',
        'type' => 'context_ui',
      ),
      'devel_2' => array(
        'module' => 'devel',
        'delta' => '2',
        'weight' => 20,
        'region' => 'bottom',
        'status' => '0',
        'label' => 'Execute PHP',
        'type' => 'context_ui',
      ),
    ),
  );
  return $items;
}
