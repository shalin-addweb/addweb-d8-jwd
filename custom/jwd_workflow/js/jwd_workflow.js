/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function (jQuery, Drupal, window, document, undefined) {

    Drupal.behaviors.jwd_workflow = {
        attach:function(context,settings) {
            jQuery('table#taxonomy', context).once('jwd_workflow', function () {
                if (settings['jwd_workflow']) {
                    if (settings['jwd_workflow']['product_fields_overview'] === true) {
                        // hide child terms
                        jQuery('table#taxonomy input.term-parent[value!="0"]').each(function(i,el) {
                            jQuery(el).parents('tr').addClass('hidden').css('display','none').addClass('tabledrag-leaf');
                        });
                        // reset even and odd classes, add tabledrag-leaf and tabledrag-root classes
                        var ii = 0;
                        jQuery('table#taxonomy tbody > tr').each(function(i,el) {
                            if (!jQuery(el).hasClass('hidden')) {
                                jQuery(el).removeClass('even').removeClass('odd')
                                if (ii % 2 == 0) {
                                    jQuery(el).addClass('odd');
                                } else jQuery(el).addClass('even');
                                ii++;
                                jQuery(el).addClass('tabledrag-leaf').addClass('tabledrag-root');
                            }
                        });
                    } else {
                        var parent_id = settings['jwd_workflow']['product_fields_parent'];

                        // hide parent terms
                        jQuery('table#taxonomy input.term-parent[value!="'+parent_id+'"]').each(function(i,el) {
                            jQuery(el).parents('tr').addClass('hidden').css('display','none');
                        });
                        // reset even and odd classes, add tabledrag-leaf and tabledrag-root classes
                        var ii = 0;
                        jQuery('table#taxonomy tbody > tr').each(function(i,el) {
                            if (!jQuery(el).hasClass('hidden')) {
                                jQuery(el).removeClass('even').removeClass('odd');
                                if (ii % 2 == 0) {
                                    jQuery(el).addClass('odd');
                                } else jQuery(el).addClass('even');
                                ii++;

                                // hide indentation block
                                jQuery(el).find('.indentation').css('display','none');
                                jQuery(el).addClass('tabledrag-leaf');
                            }
                        });
                    }
                }
            });
        }
    }

})(jQuery, Drupal, this, this.document);