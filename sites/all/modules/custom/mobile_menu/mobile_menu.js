(function($) {
  Drupal.behaviors.mobileMenu = {
    attach: function(context, settings) {

      var button;
      var menu = $('.mobile-menu-wrapper ul.menu');

      $(menu).hide();

      button = $('.mobile-menu-wrapper').prepend('button');

      $(button).click(function() {
        menu.slideToggle('fast');
      });

    }
  }
})(jQuery);
