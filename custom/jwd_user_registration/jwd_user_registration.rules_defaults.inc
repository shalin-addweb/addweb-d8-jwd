<?php
function jwd_user_registration_default_rules_configuration() {
  $rules = array();

  $rule = '{ "jwd_user_registration_user_validated_admin_email" : {
    "LABEL" : "Send an email when a user valdiated his account.",
    "PLUGIN" : "reaction rule",
    "REQUIRES" : [ "rules", "jwd_user_registration" ],
    "ON" : [ "jwd_user_registration_validated" ],
    "DO" : [
      { "mail" : {
          "to" : "[site:mail]",
          "subject" : "[site:name]: Ein neuer Nutzer hat seine E-Mail best\u00e4tigt",
          "message" : "Ein neuer Nutzer hat auf [site:name] seine E-Mail best\u00e4tigt und wartet auf Freischaltung.\r\n\r\nBitte kontrollieren Sie die Angaben des Benutzerkontos und schalten Sie anschlie\u00dfend den Nutzer frei oder l\u00f6schen Sie ihn.\r\n\r\n[account:jwd-admin-url]",
          "from" : "[site:mail]",
          "language" : [ "account:language" ]
        }
      }
    ]
  }
}';

  $rules['jwd_user_registration_user_validated_admin_email'] = rules_import($rule);

  /*$rule = '{ "jwd_add_bestandskunden_role_to_new_user" : {
    "LABEL" : "Add Bestandskunden role to new user",
    "PLUGIN" : "reaction rule",
    "OWNER" : "rules",
    "REQUIRES" : [ "rules" ],
    "ON" : [ "user_update" ],
    "IF" : [
      { "user_has_role" : {
        "account" : [ "account" ],
          "roles" : { "value" : { "31" : "31", "52" : "52" } },
          "operation" : "OR"
        }
      },
      { "NOT AND" : [
          { "user_has_role" : {
            "account" : [ "account" ],
              "roles" : { "value" : { "3" : "3", "4" : "4", "5" : "5", "11" : "11", "21" : "21" } },
              "operation" : "OR"
            }
          }
        ]
      }
    ],
    "DO" : [
      { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "21" : "21" } } } }
    ]
  }
}';

  $rules['jwd_add_bestandskunden_role_to_new_user'] = rules_import($rule);*/

  $rule = '{ "jwd_user_register" : {
    "LABEL" : "Redirect nach erfolgreicher Registrierung",
    "PLUGIN" : "reaction rule",
    "REQUIRES" : [ "rules" ],
    "ON" : [ "user_insert" ],
    "IF" : [
      { "user_has_role" : {
          "account" : [ "site:current-user" ],
          "roles" : { "value" : { "1" : "1" } }
        }
      }
    ],
    "DO" : [ { "redirect" : { "url" : "user-registered" } } ]
  }
}';

  $rules['jwd_user_register'] = rules_import($rule);

  return $rules;
}