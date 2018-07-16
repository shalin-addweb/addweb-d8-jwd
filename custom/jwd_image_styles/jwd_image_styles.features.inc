<?php
/**
 * @file
 * jwd_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function jwd_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: header_image.
  $styles['header_image'] = array(
    'name' => 'header_image',
    'effects' => array(
      1 => array(
        'label' => 'Skalierung',
        'help' => 'Eine Skalierung behält das Seitenverhältnis des Originalbildes bei. Sofern nur eine Seitenlänge angegeben ist, wird die andere berechnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '',
          'height' => '369',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
    'label' => 'header_image',
  );

  // Exported image style: jwd_affiliate.
  $styles['jwd_affiliate'] = array(
    'name' => 'jwd_affiliate',
    'effects' => array(
      1 => array(
        'label' => 'Skalierung',
        'help' => 'Eine Skalierung behält das Seitenverhältnis des Originalbildes bei. Sofern nur eine Seitenlänge angegeben ist, wird die andere berechnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '150',
          'height' => '100',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
    'label' => 'jwd_affiliate',
  );

  // Exported image style: jwd_affiliate_grayscale.
  $styles['jwd_affiliate_grayscale'] = array(
    'name' => 'jwd_affiliate_grayscale',
    'effects' => array(
      4 => array(
        'label' => 'Skalierung',
        'help' => 'Eine Skalierung behält das Seitenverhältnis des Originalbildes bei. Sofern nur eine Seitenlänge angegeben ist, wird die andere berechnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '150',
          'height' => '100',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
      6 => array(
        'label' => 'Entsättigen',
        'help' => 'Sättigung verringern konvertiert ein Bild in Graustufen.',
        'effect callback' => 'image_desaturate_effect',
        'dimensions passthrough' => TRUE,
        'module' => 'image',
        'name' => 'image_desaturate',
        'data' => array(),
        'weight' => '3',
      ),
    ),
    'label' => 'jwd_affiliate_grayscale',
  );

  // Exported image style: jwd_bigger_thumbnail.
  $styles['jwd_bigger_thumbnail'] = array(
    'name' => 'jwd_bigger_thumbnail',
    'effects' => array(
      1 => array(
        'label' => 'Skalierung',
        'help' => 'Eine Skalierung behält das Seitenverhältnis des Originalbildes bei. Sofern nur eine Seitenlänge angegeben ist, wird die andere berechnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '150',
          'height' => '150',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
    'label' => 'jwd_bigger_thumbnail',
  );

  // Exported image style: jwd_onecol.
  $styles['jwd_onecol'] = array(
    'name' => 'jwd_onecol',
    'effects' => array(
      4 => array(
        'label' => 'Skalierung',
        'help' => 'Eine Skalierung behält das Seitenverhältnis des Originalbildes bei. Sofern nur eine Seitenlänge angegeben ist, wird die andere berechnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '916',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
    'label' => 'jwd_onecol',
  );

  // Exported image style: jwd_threecol.
  $styles['jwd_threecol'] = array(
    'name' => 'jwd_threecol',
    'effects' => array(
      6 => array(
        'label' => 'Skalierung',
        'help' => 'Eine Skalierung behält das Seitenverhältnis des Originalbildes bei. Sofern nur eine Seitenlänge angegeben ist, wird die andere berechnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '289',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
    'label' => 'jwd_threecol',
  );

  // Exported image style: jwd_thumbnail.
  $styles['jwd_thumbnail'] = array(
    'name' => 'jwd_thumbnail',
    'effects' => array(
      3 => array(
        'label' => 'Skalieren und zuschneiden',
        'help' => 'Skalieren und zuschneiden wird das Seitenverhältnis des ursprünglichen Bildes erhalten, und dann die überstehenden Ränder entfernen. Dies ist besonders nützlich für die Erstellung von perfekt quadratischen Vorschaubildern ohne Verzerrung des Bildes.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '55',
          'height' => '55',
        ),
        'weight' => '1',
      ),
    ),
    'label' => 'jwd_thumbnail',
  );

  // Exported image style: jwd_twocol.
  $styles['jwd_twocol'] = array(
    'name' => 'jwd_twocol',
    'effects' => array(
      5 => array(
        'label' => 'Skalierung',
        'help' => 'Eine Skalierung behält das Seitenverhältnis des Originalbildes bei. Sofern nur eine Seitenlänge angegeben ist, wird die andere berechnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '446',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
    'label' => 'jwd_twocol',
  );

  // Exported image style: original.
  $styles['original'] = array(
    'name' => 'original',
    'label' => 'Original',
    'effects' => array(),
  );

  // Exported image style: product_image.
  $styles['product_image'] = array(
    'name' => 'product_image',
    'effects' => array(
      1 => array(
        'label' => 'Skalieren und zuschneiden',
        'help' => 'Skalieren und zuschneiden wird das Seitenverhältnis des ursprünglichen Bildes erhalten, und dann die überstehenden Ränder entfernen. Dies ist besonders nützlich für die Erstellung von perfekt quadratischen Vorschaubildern ohne Verzerrung des Bildes.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '648',
          'height' => '369',
        ),
        'weight' => '1',
      ),
    ),
    'label' => 'product_image',
  );

  // Exported image style: product_images_bg.
  $styles['product_images_bg'] = array(
    'name' => 'product_images_bg',
    'effects' => array(
      2 => array(
        'label' => 'Skalierung',
        'help' => 'Eine Skalierung behält das Seitenverhältnis des Originalbildes bei. Sofern nur eine Seitenlänge angegeben ist, wird die andere berechnet.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '940',
          'height' => '470',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
    'label' => 'product_images_bg',
  );

  // Exported image style: thumbnail_product_images.
  $styles['thumbnail_product_images'] = array(
    'name' => 'thumbnail_product_images',
    'effects' => array(
      1 => array(
        'label' => 'Skalieren und zuschneiden',
        'help' => 'Skalieren und zuschneiden wird das Seitenverhältnis des ursprünglichen Bildes erhalten, und dann die überstehenden Ränder entfernen. Dies ist besonders nützlich für die Erstellung von perfekt quadratischen Vorschaubildern ohne Verzerrung des Bildes.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '68',
          'height' => '34',
        ),
        'weight' => '1',
      ),
    ),
    'label' => 'thumbnail_product_images',
  );

  return $styles;
}
