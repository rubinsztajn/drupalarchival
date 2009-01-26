<?php
// $Id$

/**
 * @file
 * Administration page callbacks for the ead module.
 */

/**
 * Form builder.  Configure ead module.
 *
 * @ingroup forms
 * @see system_settings_form().
 */
function ead_admin_settings() {
  $form['ead_taxonomy_option'] = array(
    '#type' => 'checkbox',
    '#title' => t('Create taxonomy vocabulary from subject headings'),
    '#default_value' => variable_get('ead_taxonomy_option', array('ead_taxonomy_option')),
    '#description' => t('Checking this box will enable tags for each finding aid based on the finding aid\'s LC subject headings.'),
  );
  
  return system_settings_form($form);
}
