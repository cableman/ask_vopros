<?php

/**
 * @file
 * Administrative forms and pages for ding_bv.
 */

/**
 * Form builder.
 */
function ding_bv_settings($form, &$form_state) {
  // If ting is configured with an agency id, just use that.
  if (empty(variable_get('ting_agency', ''))) {
    $form['ding_bv_agency_id'] = array(
      '#type' => 'textfield',
      '#title' => t('Identification'),
      '#default_value' => variable_get('ding_bv_agency_id', ''),
      '#description' => t('Either a library code in the form of <em>DK-123456</em> or a custom string.'),
    );
  }

  return system_settings_form($form);
}