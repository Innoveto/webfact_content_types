<?php
/**
 * @file
 * webfact_content_types.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function webfact_content_types_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-template-body'
  $field_instances['node-template-body'] = array(
    'bundle' => 'template',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Notes',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-template-field_docker_environment'
  $field_instances['node-template-field_docker_environment'] = array(
    'bundle' => 'template',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'List of environment key=value pairs, to pass to docker when creating the container.
e.g. DRUPAL_* variable for the  boran/drupal container image, see https://github.com/Boran/docker-drupal',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_docker_environment',
    'label' => 'Docker Environment',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 80,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-template-field_docker_image'
  $field_instances['node-template-field_docker_image'] = array(
    'bundle' => 'template',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The docker base image to build the container from - a local or hub.docker.com name e.g. boran/drupal, inno/drupal',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_docker_image',
    'label' => 'Docker Image',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-template-field_docker_ports'
  $field_instances['node-template-field_docker_ports'] = array(
    'bundle' => 'template',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Mapping of container exposed ports to public ports.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_docker_ports',
    'label' => 'Docker ports',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-template-field_docker_volumes'
  $field_instances['node-template-field_docker_volumes'] = array(
    'bundle' => 'template',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'List of volumes and mount points e.g.
/serverdir/ssh/id_rsa:/contdir/id_rsa:ro
/serverdir/ssh/id_rsa.pub:/contdir/id_rsa.pub:ro',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_docker_volumes',
    'label' => 'Docker Volumes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 80,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-website-body'
  $field_instances['node-website-body'] = array(
    'bundle' => 'website',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-website-field_docker_environment'
  $field_instances['node-website-field_docker_environment'] = array(
    'bundle' => 'website',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'List of environment key=value pairs.
Note: prefer setting environment variables on the template level.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_docker_environment',
    'label' => 'Docker Environment',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-website-field_docker_image'
  $field_instances['node-website-field_docker_image'] = array(
    'bundle' => 'website',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The docker base image to build the container from - a local or hub.docker.com name e.g. boran/drupal, inno/drupal',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_docker_image',
    'label' => 'Docker Image',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-website-field_docker_ports'
  $field_instances['node-website-field_docker_ports'] = array(
    'bundle' => 'website',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Mapping of container exposed ports to public ports',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_docker_ports',
    'label' => 'Docker ports',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-website-field_docker_restartpolicy'
  $field_instances['node-website-field_docker_restartpolicy'] = array(
    'bundle' => 'website',
    'default_value' => array(
      0 => array(
        'value' => 'on-failure',
      ),
    ),
    'default_value_label_token' => 0,
    'deleted' => 0,
    'description' => 'Should the container be automatically started? The behaviour to apply when the container exits, or docker is booted. Choose "always" or "on-failure" ( to restart only when the container exit code is non-zero). Production containers should have "always" and test containers "on-failure" to save resources. 
Note: Stop and start the container to apply changes to this setting.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_docker_restartpolicy',
    'label' => 'Auto-start',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-website-field_docker_volumes'
  $field_instances['node-website-field_docker_volumes'] = array(
    'bundle' => 'website',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'List of volumes and mount points e.g.
/serverdir/ssh/id_rsa:/contdir/id_rsa:ro
/serverdir/ssh/id_rsa.pub:/contdir/id_rsa.pub:ro
Note: prefer setting volumes on the template level.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_docker_volumes',
    'label' => 'Docker Volumes',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-website-field_hostname'
  $field_instances['node-website-field_hostname'] = array(
    'bundle' => 'website',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You new website will have this name prefixed to the webfactory domain (e.g. http://something.webfact.corproot.net.ch)
Note: this must be in lowercase. 
',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hostname',
    'label' => 'Hostname',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-website-field_image'
  $field_instances['node-website-field_image'] = array(
    'bundle' => 'website',
    'deleted' => 0,
    'description' => 'A small picture used only on the webfactory management page.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'website-icons',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-website-field_public'
  $field_instances['node-website-field_public'] = array(
    'bundle' => 'website',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_label_token' => 0,
    'deleted' => 0,
    'description' => 'Denotes if this website is accessible to the general public ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_public',
    'label' => 'Public',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-website-field_site_email'
  $field_instances['node-website-field_site_email'] = array(
    'bundle' => 'website',
    'default_value' => array(
      0 => array(
        'value' => '[current-user:mail]',
      ),
    ),
    'default_value_function' => 'field_default_token_default_value_function',
    'deleted' => 0,
    'description' => 'Initial email for the website configuration ("from" address) and the "admin" user.
',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_site_email',
    'label' => 'Site email',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-website-field_site_owner_uid'
  $field_instances['node-website-field_site_owner_uid'] = array(
    'bundle' => 'website',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The UID of the site owner/creator',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_site_owner_uid',
    'label' => 'Site owner uid',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-website-field_template'
  $field_instances['node-website-field_template'] = array(
    'bundle' => 'website',
    'default_value' => array(
      0 => array(
        'target_id' => 5,
      ),
    ),
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'Template for building the website. Alternatively see the Advanced section below.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_template',
    'label' => 'Template',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A small picture used only on the webfactory management page.');
  t('Auto-start');
  t('Denotes if this website is accessible to the general public ');
  t('Description');
  t('Docker Environment');
  t('Docker Image');
  t('Docker Volumes');
  t('Docker ports');
  t('Hostname');
  t('Image');
  t('Initial email for the website configuration ("from" address) and the "admin" user.
');
  t('List of environment key=value pairs, to pass to docker when creating the container.
e.g. DRUPAL_* variable for the  boran/drupal container image, see https://github.com/Boran/docker-drupal');
  t('List of environment key=value pairs.
Note: prefer setting environment variables on the template level.');
  t('List of volumes and mount points e.g.
/serverdir/ssh/id_rsa:/contdir/id_rsa:ro
/serverdir/ssh/id_rsa.pub:/contdir/id_rsa.pub:ro');
  t('List of volumes and mount points e.g.
/serverdir/ssh/id_rsa:/contdir/id_rsa:ro
/serverdir/ssh/id_rsa.pub:/contdir/id_rsa.pub:ro
Note: prefer setting volumes on the template level.');
  t('Mapping of container exposed ports to public ports');
  t('Mapping of container exposed ports to public ports.');
  t('Notes');
  t('Public');
  t('Should the container be automatically started? The behaviour to apply when the container exits, or docker is booted. Choose "always" or "on-failure" ( to restart only when the container exit code is non-zero). Production containers should have "always" and test containers "on-failure" to save resources. 
Note: Stop and start the container to apply changes to this setting.');
  t('Site email');
  t('Site owner uid');
  t('Template');
  t('Template for building the website. Alternatively see the Advanced section below.');
  t('The UID of the site owner/creator');
  t('The docker base image to build the container from - a local or hub.docker.com name e.g. boran/drupal, inno/drupal');
  t('You new website will have this name prefixed to the webfactory domain (e.g. http://something.webfact.corproot.net.ch)
Note: this must be in lowercase. 
');

  return $field_instances;
}
