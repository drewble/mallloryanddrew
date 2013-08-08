<?php
//kpr(get_defined_vars());
//kpr($theme_hook_suggestions);
//template naming
//page--[CONTENT TYPE].tpl.php
?>
<?php if( theme_get_setting('mothership_poorthemers_helper') ){ ?>
<!-- page.tpl.php-->
<?php } ?>

<?php print $mothership_poorthemers_helper; ?>

<header role="banner">

  <?php if($page['header']): ?>
    <div class="header-region">
      <?php print render($page['header']); ?>
    </div>
  <?php endif; ?>

</header>

<div class="page">

  <span class="icon-moon-light"></span>

  <div role="main" id="main-content">
   <span id="mallory" class="names">Mallory Kirsten Anderson</span>
   <span id="drew" class="names">&amp; Drew Michael Blake</span>
   <span id="wedding-date">11.16.2013</span>
  </div><!-- /main-->

 
</div><!-- /page-->

<footer role="contentinfo">
  <?php print render($page['footer']); ?>
</footer>

