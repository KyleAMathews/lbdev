<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function lbdev_context_default_contexts() {
  module_load_include('inc', 'lbdev', 'lbdev.defaults');
  return _lbdev_context_default_contexts();
}
