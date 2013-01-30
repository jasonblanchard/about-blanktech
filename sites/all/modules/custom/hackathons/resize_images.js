(function($) {
  Drupal.behaviors.hackathonsResizeImages = {
    attach: function(context, settings) {

      var origImages = $('.field-name-field-project-screenshot img');
      var test = origImages.width();

      $(window).resize(function() {
        firstBreakpoint(origImages);
      });

      function firstBreakpoint(origImages) {

        var images = $('.field-name-field-project-screenshot img');

        for (i=0; i < images.length; i++) {

          var screenshot = images[i];
          var origWidth = origImages[i].width;
          var origHeight = origImages[i].height;
          var newWidth;
          var newHeight;

          if ($(document).width() < 980) {
            newWidth = origWidth * .7;
            newHeight = origHeight * .7;
            $(screenshot).css("width", newWidth);
            $(screenshot).css("height", newHeight);
          }
        }
      }


    }
  }
})(jQuery);
