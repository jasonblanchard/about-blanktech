(function($) {
  Drupal.behaviors.hackathonsResizeImages = {
    attach: function(context, settings) {

      var origImages = $('.field-name-field-project-screenshot img');
      imageWidths = [];
      imageHeights = [];
      var ratio;

      for (i=0; i < origImages.length; i++) {
        imageWidths.push(origImages[i].width);
        imageHeights.push(origImages[i].height);
      }

      $(window).resize(function() {
        ratio = $(window).width() / $(window).height();

        firstBreakpoint(origImages);
        mobileBreakPoint(ratio);
      });

      function firstBreakpoint(origImages) {

        var images = $('.field-name-field-project-screenshot img');

        for (i=0; i < images.length; i++) {

          var screenshot = images[i];
          var origWidth = imageWidths[i];
          var origHeight = imageHeights[i];
          var newWidth;
          var newHeight;

          if ($(document).width() < 1000) {
            newWidth = origWidth * .7;
            newHeight = origHeight * .7;
            $(screenshot).css("width", newWidth);
            $(screenshot).css("height", newHeight);
          }

          else if ($(document).width() > 1000) {
            $(screenshot).css("width", origWidth);
            $(screenshot).css("height", origHeight);
          }
        }
      }

      function mobileBreakPoint(ratio) {
        if ($(document).width() < 740) {
          console.log(ratio);
        }
      }


    }
  }
})(jQuery);
