<?php

/**
 * @file
 * Default theme implementation to display a printer-friendly version page.
 *
 * This file is akin to Drupal's page.tpl.php template. The contents being
 * displayed are all included in the $content variable, while the rest of the
 * template focuses on positioning and theming the other page elements.
 *
 * All the variables available in the page.tpl.php template should also be
 * available in this template. In addition to those, the following variables
 * defined by the print module(s) are available:
 *
 * Arguments to the theme call:
 * - $node: The node object. For node content, this is a normal node object.
 *   For system-generated pages, this contains usually only the title, path
 *   and content elements.
 * - $format: The output format being used ('html' for the Web version, 'mail'
 *   for the send by email, 'pdf' for the PDF version, etc.).
 * - $expand_css: TRUE if the CSS used in the file should be provided as text
 *   instead of a list of @include directives.
 * - $message: The message included in the send by email version with the
 *   text provided by the sender of the email.
 *
 * Variables created in the preprocess stage:
 * - $print_logo: the image tag with the configured logo image.
 * - $content: the rendered HTML of the node content.
 * - $scripts: the HTML used to include the JavaScript files in the page head.
 * - $footer_scripts: the HTML  to include the JavaScript files in the page
 *   footer.
 * - $sourceurl_enabled: TRUE if the source URL infromation should be
 *   displayed.
 * - $url: absolute URL of the original source page.
 * - $source_url: absolute URL of the original source page, either as an alias
 *   or as a system path, as configured by the user.
 * - $cid: comment ID of the node being displayed.
 * - $print_title: the title of the page.
 * - $head: HTML contents of the head tag, provided by drupal_get_html_head().
 * - $robots_meta: meta tag with the configured robots directives.
 * - $css: the syle tags contaning the list of include directives or the full
 *   text of the files for inline CSS use.
 * - $sendtoprinter: depending on configuration, this is the script tag
 *   including the JavaScript to send the page to the printer and to close the
 *   window afterwards.
 *
 * print[--format][--node--content-type[--nodeid]].tpl.php
 *
 * The following suggestions can be used:
 * 1. print--format--node--content-type--nodeid.tpl.php
 * 2. print--format--node--content-type.tpl.php
 * 3. print--format.tpl.php
 * 4. print--node--content-type--nodeid.tpl.php
 * 5. print--node--content-type.tpl.php
 * 6. print.tpl.php
 *
 * Where format is the ouput format being used, content-type is the node's
 * content type and nodeid is the node's identifier (nid).
 *
 * @see print_preprocess_print()
 * @see theme_print_published
 * @see theme_print_breadcrumb
 * @see theme_print_footer
 * @see theme_print_sourceurl
 * @see theme_print_url_list
 * @see page.tpl.php
 * @ingroup print
 */
?>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML+RDFa 1.0//EN" "http://www.w3.org/MarkUp/DTD/xhtml-rdfa-1.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language; ?>" version="XHTML+RDFa 1.0" dir="<?php print $language->dir; ?>">
  <head>
    <?php print $head; ?>
    <base href='<?php print $url ?>' />
    <title><?php print $print_title; ?></title>
    <?php print $scripts; ?>
    <?php if (isset($sendtoprinter)) print $sendtoprinter; ?>
    <?php print $robots_meta; ?>
    <?php if (theme_get_setting('toggle_favicon')): ?>
      <link rel='shortcut icon' href='<?php print theme_get_setting('favicon') ?>' type='image/x-icon' />
    <?php endif; ?>
    <?php print $css; ?>
  </head>
  <body>

    <?php

    $type = field_view_field('node', $node, 'field_standard_type');
    $identifier = field_view_field('node', $node, 'field_standard_identifier');
    $version = field_view_field('node', $node, 'field_standard_version');
    $copyright = field_view_field('node', $node, 'field_copyright_statement');

    $date = isset($node->field_standard_date[LANGUAGE_NONE][0]['value']) ? date('d/m/Y', $node->field_standard_date[LANGUAGE_NONE][0]['value']) : FALSE;

    $content = node_view($node);



    ?>
    <div class="print-header">
    <h2 class="print-isb-standard"><?php print 'ISB Standard: ' . $type[0]['#markup']; ?></h2>
    <h1 class="print-title"><?php print $print_title; ?></h1>
    <h3 class="print-header-item print-standard-identifier"><?php print '<span class="print-header-label">Standard identifier:</span>' . $identifier[0]['#markup']; ?></h3>
    <h3 class="print-header-item print-content"><?php print '<span class="print-header-label">Version:</span>' . $version[0]['#markup']; ?></h3>
    <?php if ($date): ?>
      <h3 class="print-header-item print-content"><?php print '<span class="print-header-label">Date:</span>' . $date; ?></h3>
    <?php endif; ?>

    <?php if (FALSE && $sourceurl_enabled): ?>
      <div class="print-source_url">
        <?php print theme('print_sourceurl', array('url' => $source_url, 'node' => $node, 'cid' => $cid)); ?>
      </div>
    <?php endif; ?>

    <?php if ($print_logo): ?>
      <div class="print-logo"><?php print $print_logo; ?></div>
    <?php endif; ?>

    </div>
    <div class="print-copyright-statement"><?php print $copyright[0]['#markup']; ?></div>

    <?php
    // We hide the comments and links now so that we can render them later.








    $content = node_view($node);
    $title = $content['#node']->title;
    unset($content['#node']->title);
    unset($content['links']);


    hide($content['field_copyright_statement']);
    hide($content['field_standard_identifier']);
    hide($content['field_standard_type']);
    hide($content['field_standard_version']);
    hide($content['field_standard_date']);
    hide($content['field_standard_category']);
    hide($content['comments']);
    hide($content['links']);

    print render($content);

    $content['#node']->title = $title;

    ?>


    <div class="print-footer"><?php print theme('print_footer'); ?></div>

    <?php print $footer_scripts; ?>
  </body>
</html>
