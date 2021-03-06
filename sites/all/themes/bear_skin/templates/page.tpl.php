<div id="page">
  <div class="wrapper header">
    <header id="header" role="banner">

      <?php if ($logo): ?>
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /></a>
      <?php endif; ?>

      <?php if ($site_name || $site_slogan): ?>
        <hgroup id="name-and-slogan">
          <?php if ($site_name): ?>
            <h1 id="site-name">
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
            </h1>
          <?php endif; ?>

          <?php if ($site_slogan): ?>
            <h2 id="site-slogan"><?php print $site_slogan; ?></h2>
          <?php endif; ?>
          
        </hgroup><!-- /#name-and-slogan -->
      <?php endif; ?>

      <?php print render($page['header']); ?>
        <?php if (theme_get_setting('user_menu')): ?>
          <div id="bear-user-menu">
            <?php  if (user_is_logged_in()): ?>
              <?php print $user_menu;  ?>
            <?php  else : ?>
              <ul>
                <li><a href="<?php global $base_url; echo $base_url.'/user/login'; ?>">Login</a></li>
              </ul>
            <?php endif; ?>
        </div>
        <?php endif; ?>

        <div class='branding'>
          <?php print render($page['branding']); ?>
        </div>
    </header>
  </div>
  <div class="wrapper navigation">
    <div id="navigation">
      <?php print render($page['navigation']); ?>
    </div><!-- /#navigation -->
  </div>
  <div class="wrapper main">
    <div id="main">
      <div id="content" class="column" role="main">
        <div class="second-nav-bar region-header-first clearfix">
          <?php print render($page['second_nav']); ?>
        </div>
        <?php print render($page['highlighted']); ?>
        <?php print $breadcrumb; ?>
        <a id="main-content"></a>
        <?php print render($title_prefix); ?>
        <?php if ($title): ?>
          <h1 class="title" id="page-title"><?php print $title; ?></h1>
        <?php endif; ?>
        <?php print render($title_suffix); ?>
        <?php print $messages; ?>
        <?php print render($tabs); ?>
        <?php print render($page['help']); ?>
        <?php if ($action_links): ?>
          <ul class="action-links"><?php print render($action_links); ?></ul>
        <?php endif; ?>
        <?php print render($page['content']); ?>
        <?php print $feed_icons; ?>
      </div><!-- /#content -->

      <?php
        // Render the sidebars to see if there's anything in them.
        $sidebar_first  = render($page['sidebar_first']);
        $sidebar_second = render($page['sidebar_second']);
      ?>

      <?php if ($sidebar_first || $sidebar_second): ?>
        <aside class="sidebars">
          <?php print $sidebar_first; ?>
          <?php print $sidebar_second; ?>
        </aside><!-- /.sidebars -->
      <?php endif; ?>

    </div><!-- /#main -->
  </div>
</div><!-- /#page -->
<div class="wrapper footer">
  <?php print render($page['footer']); ?>
</div>
