(function($) {
   Drupal.behaviors.twitterImportHighlightTweet = {
       attach: function(context,settings) {
         $('.field-name-field-twitter-icon img.rollover').hover(function() {
           
           var id = $(this).attr('id');

           var target = 'div#' + String(id);
           
           $(target).css('background','black');
           console.log("mouse in");
         }, 
         function() {
           console.log("mouse out");
         });
       }
   }
})(jQuery);
