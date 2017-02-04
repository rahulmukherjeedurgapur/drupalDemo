INTRODUCTION
------------

This module gives a way to provide a discount to a user for referring other
users to your commerce site. The implementation is pretty simple.

    1. User A invites user B to our site using a unique invite URL
       (http://yoursite.com/invite/username).
    2. User B visits the site using this URL, and is taken to the registration
       form to create a new account.
    3. User B gets some discount amount (say $5) which he could use on his
       first purchase.
    4. After user B makes his first purchase, user A gets a discount amount
       (say $10), which could be used in the next purchase.
    5. Both discount amounts are configurable from the admin backend. To
       configure the discount amounts browse to /admin/config/referral-discount

This module provide "Invite/Referral Link" block, 
which contains unique refer/invite link for authenticated users to share across
their friends.

Refer/invite link Example : http://yoursitedomain/invite/username

Note: 'username' mentioned in above link is of currently logged in user. 


REQUIREMENTS
------------

This module requires the following module:

 * Commerce Discount (https://www.drupal.org/project/commerce_discount)


RECOMMENDED MODULES
-------------------

None.


INSTALLATION
------------
 
 * Install as you would normally install a contributed Drupal module. See:
   https://drupal.org/documentation/install/modules-themes/modules-7
   for further information.


CONFIGURATION
-------------
 
 * Configure referral discount amount in Administration » Site settings » 
 Advanced settings » Configuration » Commerce Referral Discount Configuration:

   - Configuration link: admin/config/referral-discount
 
 * Configure referral discount on product purchase in Administration » 
 Store settings » Promotions » Discounts:

   - Go to admin/commerce/discounts page.

   - Click on "Add discount" button.

   - Choose discount type : Order discount

   - Choose offer type : Referral Discount

   - Now click on Save discount.

 * Configure Invite/Referral Link block:

   - Visibility settings: Show block for authenticated user.


FAQ
---

Q: What if I don't want to give discount amount when referral/invited 
   user sign up?

A: Enter 0 in "Discount amount for referral" field at 
   admin/config/referral-discount page.


Q: What if I don't want to give discount amount to referrer(inviter) on 
   referral user first purchase?

A: Enter 0 in "Discount amount for referrer" field at 
   admin/config/referral-discount page.


Q: Can referral/invited users avail discount amount on any purchase?

A: No, only at first time purchase referral/invited user get discount.


Q: Can I refer/invite any number other users?

A: Yes. More you refer/invite more you get discount amount.


MAINTAINERS
-----------

Current maintainer:
 * Nikhil Banait - https://www.drupal.org/u/nikhil-banait

This project has been sponsored by:
 * QED42
   Specialised in building remarkable digital experiences for web and 
   mobile using open source.
