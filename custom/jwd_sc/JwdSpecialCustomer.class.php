<?php

class JwdSpecialCustomer {
  public $name;
  public $machine_name;
  public $product_name;
  public $product_display_name;
  public $role;
  public $role_id;
  public $menu_name;
  public $product_menu_id;

  public function __construct($name, $machine_name = null, $role_id = null)
  {
    $this->name = $name;
    $this->machine_name = (!empty($machine_name)) ? $machine_name : $this->_generateMachineName();
    $this->product_name = 'jwd_' . $this->machine_name . '_product';
    $this->product_display_name = $this->product_name . '_display';
    $this->role = $this->_generateRole();
    $this->menu_name = 'menu-' . $this->machine_name;

    if ($role_id) {
      $this->role_id = $role_id;
      $this->role->rid = $role_id;
    }
  }

  private function _generateMachineName()
  {
    $machine_name = strtolower($this->name);

    // replace umlauts
    $umlauts = array('ä' => 'ae', 'ü' => 'ue', 'ö' => 'oe', 'ß' => 'ss');
    foreach($umlauts as $umlaut => $replace) {
      $machine_name = str_replace($umlaut, $replace, $machine_name);
    }

    // remove unwanted characters
    $machine_name = preg_replace('/[^a-z0-9_]+/','_', $machine_name);

    return $machine_name;
  }

  private function _generateRole()
  {
    $role = new StdClass();
    $role->name = $this->name;

    return $role;
  }
}
