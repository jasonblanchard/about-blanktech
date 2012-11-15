  
  var timeline_config = {
      width:              '100%',
      height:             '600',
      source:             'https://docs.google.com/spreadsheet/pub?key=0AlNyK0CWPkZjdE82U1dQNkRKRHdDaldmZUlnZUlBX0E&output=htmlt',
      embed_id:           'timeline-embed',               //OPTIONAL USE A DIFFERENT DIV ID FOR EMBED
      css:   'http://workvm/aboutblank/sites/all/modules/custom/timelinejs/TimelineJS/compiled/css/timeline.css',
      js: 'http://workvm/aboutblank/sites/all/modules/custom/timelinejs/TimelineJS/compiled/js/timeline-min.js'
  };

jQuery(document).ready(function() {
  jQuery('#timeline-embed').append(Drupal.settings.timelinejs.embedSource)
});
