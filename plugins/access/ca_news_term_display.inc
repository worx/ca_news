<?php

/**
 * @file
 * Plugin to provide access control based upon ca_event admin settings.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('News: term display'),m
  'description' => t('Control access by event term type.'),
  'callback' => 'ca_news_term_display_access_check',
  'settings form' => 'ca_news_term_display_access_settings',
  'settings form submit' => 'ca_news_term_display_access_settings_submit',
  'summary' => 'ca_news_term_display_access_summary',
);

/**
 * Settings form for the 'by event term display' access plugin.
 */
function ca_news_term_display_access_settings($form, &$form_state, $conf) {
  $form['settings']['ca_news_term_display'] = array(
    '#type' => 'select',
    '#title' => t('New\'s term displays'),
    '#options' => array(
      'ca_news_term_display_false' => t('Do Not Display'),
      'ca_news_term_display_node' => t('Display on the Node only'),
      'ca_news_term_display_all' => t('Display Everywhere'),
    ),
    '#required' => TRUE,
    '#default_value' => $conf['ca_news_term_display_node'],
  );

  return $form;
}

/**
 * Settings form submission.
 */
function ca_news_term_display_access_settings_form($form, &$form_state) {
}

/**
 * Check for access.
 */
function ca_news_term_display_access_check($conf, $context) {
  return $conf['ca_news_term_display'] == variable_get('ca_news_term_display', 'ca_news_term_display_false');
}

/**
 * Provide a summary description based upon the checked event term type.
 */
function ca_news_term_display_access_summary($conf, $context) {
  if ($conf['ca_news_term_display'] == 'ca_news_term_display_false') {
    $template = t('False');
  }
  elseif ($conf['ca_news_list_template'] == 'ca_news_term_display_node') {
    $template = t('Display on the Node only');
  }
  else {
    $template = t('Display Everywhere');
  }

  return t('Term display is set to: ' . $template);
}
