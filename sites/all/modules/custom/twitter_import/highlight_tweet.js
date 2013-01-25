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
})(jQuery);
