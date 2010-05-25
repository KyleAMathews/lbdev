<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function lbdev_ctools_plugin_api() {
  module_load_include('inc', 'lbdev', 'lbdev.defaults');
  $args = func_get_args();
  return call_user_func_array('_lbdev_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function lbdev_strongarm() {
  module_load_include('inc', 'lbdev', 'lbdev.defaults');
  $args = func_get_args();
  return call_user_func_array('_lbdev_strongarm', $args);
}
