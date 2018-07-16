<?php foreach($commerce_line_items as $line_item): ?>
-- <?php print t('Address'); ?> --
<?php if(!empty($line_item->field_customer_address['und'][0]['organisation_name'])): ?>

  <?php print ($line_item->field_customer_address['und'][0]['organisation_name'])."\n"; ?>
  <?php endif; ?>

<?php print ($line_item->field_customer_address['und'][0]['first_name']); ?> <?php print ($line_item->field_customer_address['und'][0]['last_name'])."\n"; ?>
<?php print ($line_item->field_customer_address['und'][0]['thoroughfare'])."\n"; ?>
<?php print ($line_item->field_customer_address['und'][0]['premise'])."\n"; ?>
<?php print ($line_item->field_customer_address['und'][0]['postal_code']); ?> <?php print ($line_item->field_customer_address['und'][0]['locality'])."\n"; ?>
<?php $countries = country_get_list(); print $countries[$line_item->field_customer_address['und'][0]['country']]."\n"; ?>


-- <?php print t('Contact'); ?> --

<?php print t('Phone'); ?>: <?php print ($line_item->field_customer_phone['und'][0]['value'])."\n"; ?>
<?php print t('Fax'); ?>: <?php print ($line_item->field_customer_fax['und'][0]['value'])."\n"; ?>
<?php print t('Email'); ?>: <?php print ($line_item->field_customer_email['und'][0]['email'])."\n"; ?>

<?php if(isset($line_item->field_customer_notes['und'])): ?>
  -- <?php print t('Notes'); ?> --
  <?php print ($line_item->field_customer_notes['und'][0]['value'])."\n"; ?>
  <?php endif; ?>

<?php if (isset($line_item->data['context']['product_ids'][0])): ?>
  -- <?php print t('Products'); ?> --

  <?php $product = commerce_product_load($line_item->data['context']['product_ids'][0]); ?>
  <?php if(!empty($product)): ?>
    <?php print $product->title."\n"; ?>

    <?php if (isset($line_item->field_product_options['und'])): ?>
      <?php $product_options = jwd_product_product_options_from_terms($line_item->field_product_options['und']); ?>
      <?php foreach($product_options as $label => $value): ?>
        <?php print "\t" . $label; ?>: <?php print  $value . "\n"; ?>
        <?php endforeach; ?>
      <?php endif; ?>
    <?php endif; ?>
  <?php if (isset($line_item->field_product_font['und'])) print "\t".'Schrifttyp: '.$line_item->field_product_font['und'][0]['value'] . "\n"; ?>
  <?php if (isset($line_item->field_product_size['und'])) print "\t".'Größe / Stempeltyp: '.$line_item->field_product_size['und'][0]['value'] . "\n"; ?>
  <?php if (isset($line_item->field_product_text['und'])) print "\t".'Ihr Text: '.$line_item->field_product_font['und'][0]['value'] . "\n"; ?>
  <?php if (isset($line_item->field_product_options_individual['und'])) print "\n\t".'Individuelle Eigenschaften: '."\n\n"."\t".$line_item->field_product_options_individual['und'][0]['value'] . "\n"; ?>
  <?php endif; ?>
<?php endforeach; ?>