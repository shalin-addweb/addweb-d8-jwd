// A $( document ).ready() block.
jQuery( document ).ready(function() {
  jQuery("#block-search-form form > div").each(function(){
    jQuery(this).siblings().wrapAll("<div class='description-wrap'></div>")
  });
});
