<?php
/**
 * @file
 * Contains configuration settings for Commerce Referral Discount module.
 */

/**
 * Callback to admin/config/referral-discount.
 */
function commerce_referral_discount_config_form($form, &$form_state) {
  $form = array();
  $form['commerce_referral_discount_signup'] = array(
    '#type' => 'textfield',
    '#title' => t('Discount amount for referral'),
    '#description' => t('Enter the discount amount for referral on signup.'),
    '#default_value' => variable_get('commerce_referral_discount_signup', 0),
  );
  $form['commerce_referral_discount_referral_purchase'] = array(
    '#type' => 'textfield',
    '#title' => t('Discount amount for referrer'),
    '#default_value' => variable_get('commerce_referral_discount_referral_purchase', 0),
    '#description' => t('Enter the discount amount for referrer on referral first purchase.'),
  );
  $form['#validate'][] = 'commerce_referral_discount_config_form_validate';
  return system_settings_form($form);
}

/**
 * The validation function for commerce_referral_discount_config_form.
 */
function commerce_referral_discount_config_form_validate($form, &$form_state) {
  $discount_signup = $form_state['values']['commerce_referral_discount_signup'];
  $discount_purchase = $form_state['values']['commerce_referral_discount_referral_purchase'];
  if (!is_numeric($discount_signup) || $discount_signup < 0) {
    form_set_error('signup', t('"Discount amount for referral" should be a positive number.'));
  }
  if (!is_numeric($discount_purchase) || $discount_purchase < 0) {
    form_set_error('purchase', t('"Discount amount for referrer" should be a positive number.'));
  }
}
