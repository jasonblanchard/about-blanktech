(function($) {
  Drupal.behaviors.mobileMenu = {
    attach: function(context, settings) {

      var button;
      var menu = $('.mobile-menu-wrapper ul.menu');

      $(menu).hide();

      button = $('.mobile-menu-wrapper').prepend("<div><a href='#' class='mobile-button push-right'><span class='bar'></span><span class='bar'></span><span class='bar'></span></a><div>");

      $('.mobile-button').click(function() {
        menu.slideToggle('fast');

        return false;

      });

    }
  }
})(jQuery);
