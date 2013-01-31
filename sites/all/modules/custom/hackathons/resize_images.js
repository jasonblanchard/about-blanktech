(function($) {
  Drupal.behaviors.hackathonsResizeImages = {
    attach: function(context, settings) {

      var origImages = $('.field-name-field-project-screenshot img');
      var imageWidths = [];
      var imageHeights = [];
      var windowRatio;

      for (i=0; i < origImages.length; i++) {
        imageWidths.push(origImages[i].width);
        imageHeights.push(origImages[i].height);
      }

      $(window).resize(function() {
        windowRatio = $(window).width() / $(window).height();

        firstBreakpoint(origImages, windowRatio);
      });

      function firstBreakpoint(origImages, ratio) {

        var images = $('.field-name-field-project-screenshot img');

        for (i=0; i < images.length; i++) {

          var screenshot = images[i];
          var origWidth = imageWidths[i];
          var origHeight = imageHeights[i];
          var newWidth;
          var newHeight;

          if (($(document).width() < 1000) && ($(document).width() > 780)) {
            newWidth = origWidth * .7;
            newHeight = origHeight * .7;
            $(screenshot).css("width", newWidth);
            $(screenshot).css("height", newHeight);
          }

          else if ($(document).width() > 1000) {
            $(screenshot).css("width", origWidth);
            $(screenshot).css("height", origHeight);
          }

          else if ($(document).width() < 780) {
            newWidth = origWidth * ratio;
            console.log(newWidth);
            newHeight = origHeight * ratio;
            if (newWidth < origWidth) {
              $(screenshot).css("width", newWidth);
              $(screenshot).css("height", newHeight);
            }
          }
        }
      }


    }
  }
})(jQuery);
