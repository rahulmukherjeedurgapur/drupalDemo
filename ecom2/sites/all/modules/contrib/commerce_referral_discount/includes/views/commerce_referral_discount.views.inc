<?php

/**
 * @file
 * Views integration for the commerce_referral_discount module.
 */

/**
 * Implements hook_views_data().
 */
function commerce_referral_discount_views_data() {
  $data = array();

  $data['commerce_referral_discount']['table']['group'] = t('Commerce referral discount');

  $data['commerce_referral_discount']['table']['base'] = array(
    'field' => 'uid',
    'title' => t('Commerce Referral Discount'),
  );

  $data['commerce_referral_discount']['uid'] = array(
    'title' => t('Invited user'),
    'help' => t('Id of the user who was invited'),
    'field' => array(
      'handler' => 'views_handler_field_user',
      'click sortable' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_user_uid',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_user_name',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'relationship' => array(
      'base' => 'users',
      'base field' => 'uid',
      'handler' => 'views_handler_relationship',
      'label' => t('Invited user'),
      'title' => t('Invited user'),
    ),
  );

  $data['commerce_referral_discount']['referrer_uid'] = array(
    'title' => t('Referrer user'),
    'help' => t('Id of the user who is inviting'),
    'field' => array(
      'handler' => 'views_handler_field_user',
      'click sortable' => TRUE,
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_user_uid',
      'name field' => 'name',
    ),
    'filter' => array(
      'title' => t('Name'),
      'handler' => 'views_handler_filter_user_name',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'relationship' => array(
      'base' => 'users',
      'base field' => 'uid',
      'handler' => 'views_handler_relationship',
      'label' => t('Referrer user'),
      'title' => t('Referrer user'),
    ),
  );

  $data['commerce_referral_discount']['discount_amount'] = array(
    'title' => t('Discount amount'),
    'help' => t('Discount amount'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['commerce_referral_discount']['type'] = array(
    'title' => t('Discount type'),
    'help' => t('The type of referral discount usage'),
    'field' => array(
      'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  $data['commerce_referral_discount']['created'] = array(
    'title' => t('Created date'),
    'help' => t('Time at which the discount was created'),
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );

  $data['commerce_referral_discount']['updated'] = array(
    'title' => t('Updated Date'),
    'help' => t('Time at which the discount was updated'),
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
  );

  return $data;
}
