<?php

/**
 * @file
 * Contains \Drupal\example_events\ExampleEventSubScriber.
 */

namespace Drupal\jwd_event_alter\EventSubscriber;


use Symfony\Component\EventDispatcher\EventSubscriberInterface;
use Symfony\Component\EventDispatcher\Event;
use Drupal\Core\Mail\MailManagerInterface;
use Drupal\Component\Utility\SafeMarkup;
use Drupal\Component\Utility\Html;


/**
 * Class ExampleEventSubScriber.
 *
 * @package Drupal\example_events
 */
class ExampleEventSubScriber implements EventSubscriberInterface {

  /**
   * {@inheritdoc}
   */
  public static function getSubscribedEvents() {
    $events['user.defination.create'][] = ['my_function'];
    return $events;
  }

  /**
   * Subscriber Callback for the event.
   * @param ExampleEvent $event
   */
  public function my_function(ExampleEvent $event) {
    print('<pre style="color:red;">');
    print_r('comes');
    print('</pre>');
    exit;
  }
}