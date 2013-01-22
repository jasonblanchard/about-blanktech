(function($) {
   Drupal.behaviors.twitterImportTimestamp = {
       attach: function(context,settings) {
         $("abbr.timeago").timeago();
    }
   }
})(jQuery);
