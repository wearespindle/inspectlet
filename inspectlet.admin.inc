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
    '#type' => 'textarea',
    '#title' => t('Inspectlet code'),
    '#description' => t('Insert your Inspectlet snippet here.'),
    '#default_value' => variable_get('inspectlet_code'),
  );

  return system_settings_form($form);
}
