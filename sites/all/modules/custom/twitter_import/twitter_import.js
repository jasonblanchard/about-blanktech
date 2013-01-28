(function($) {
   Drupal.behaviors.twitterImportHighlightTweet = {
       attach: function(context,settings) {

         $('.field-name-field-twitter-icon img.rollover').hover(function() {
           
           var id = $(this).attr('id');

           var target = 'div#' + String(id) + ' p';
           
           $(target).addClass('twitter-highlighted-text');
         }, 
         function() {

           var id = $(this).attr('id');

           var target = 'div#' + String(id) + ' p';

           $(target).removeClass('twitter-highlighted-text');
         });
       }
   }

   Drupal.behaviors.twitterImportLinkTarget = {
     attach: function(context, settings) {
       $('.field-name-field-twitter-body a').attr('target', '_blank');
     }
   }

   Drupal.behaviors.twitterImportFeedFilter = {
     attach: function(context, settings) {

       if (Drupal.settings.twitterImport.currentPath == 'feed') {

         if (Drupal.settings.twitterImport.arg1 == null) { 
           $('.region-header-first').hide();
         }

         $('.region-header-second').html('<a class="button">Filter Feed</a>');

         $('.region-header-second a').click( function() {
           $('.region-header-first').slideToggle('fast');
         });
       }
     }
   }
})(jQuery);


