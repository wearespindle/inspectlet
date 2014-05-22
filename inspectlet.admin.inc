<?php

/**
 * @file
 * The admin form handling of the inspectlet module.
 */

/**
 * Builds the settings form.
 */
function inspectlet_settings_form($form, &$form_state) {
  $form['inspectlet_code'] = array(
    '#type' => 'textnumber',
    '#title' => t('Inspectlet code'),
    '#description' => t('Insert the wid code from your snippet here.'),
    '#default_value' => variable_get('inspectlet_id'),
  );
  
  return system_setting_form($form);
}
