<?php

/**
 * @file
 * dkan_dataset_content_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dkan_dataset_content_types_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional|node|dataset|default';
  $field_group->group_name = 'group_additional';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dataset Info',
    'weight' => '3',
    'children' => array(
      0 => 'field_conforms_to',
      1 => 'field_contact_email',
      2 => 'field_contact_name',
      3 => 'field_data_dictionary',
      4 => 'field_data_dictionary_type',
      5 => 'field_is_part_of',
      6 => 'field_landing_page',
      7 => 'field_language',
      8 => 'field_license',
      9 => 'field_pod_theme',
      10 => 'field_public_access_level',
      11 => 'og_group_ref',
      12 => 'field_authors',
      13 => 'field_permanent_identifier_doi',
      14 => 'field_is_supplementing',
      15 => 'field_plasma_source_name',
      16 => 'field_plasma_source_application',
      17 => 'field_plasma_source_properties',
      18 => 'field_plasma_source_procedure',
      19 => 'field_plasma_source_specs',
      20 => 'field_plasma_medium_name',
      21 => 'field_plasma_medium_properties',
      22 => 'field_plasma_medium_procedure',
      23 => 'field_plasma_target_name',
      24 => 'field_plasma_target_properties',
      25 => 'field_plasma_target_procedure',
      26 => 'field_plasma_diagnostics_name',
      27 => 'field_plasma_diagnostics_propert',
      28 => 'field_plasma_diagnostics_procedu',
      29 => 'release_date',
      30 => 'identifier',
    ),
    'format_type' => 'table',
    'format_settings' => array(
      'label' => 'Dataset Info',
      'instance_settings' => array(
        'label' => 'hide',
        'desc' => '<div class="fieldset-description"><i class="icon-large icon-info-sign"></i>These fields are compatible with <a href="https://www.w3.org/TR/vocab-dcat/">DCAT</a>, an RDF vocabulary designed to facilitate interoperability between data catalogs published on the Web.</div>',
        'first_column' => 'Field',
        'second_column' => 'Value',
        'cells' => 'empty',
        'classes' => ' group-additional field-group-table',
      ),
    ),
  );
  $field_groups['group_additional|node|dataset|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional|node|dataset|form';
  $field_group->group_name = 'group_additional';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dataset Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_additional_info',
      1 => 'field_author',
      2 => 'field_conforms_to',
      3 => 'field_contact_email',
      4 => 'field_contact_name',
      5 => 'field_data_dictionary',
      6 => 'field_data_dictionary_type',
      7 => 'field_frequency',
      8 => 'field_granularity',
      9 => 'field_harvest_source_issued',
      10 => 'field_harvest_source_modified',
      11 => 'field_is_part_of',
      12 => 'field_language',
      13 => 'field_pod_theme',
      14 => 'field_public_access_level',
      15 => 'field_related_content',
      16 => 'field_resources',
      17 => 'field_rights',
      18 => 'field_spatial',
      19 => 'field_spatial_geographical_cover',
      20 => 'field_temporal_coverage',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Dataset Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-additional field-group-fieldset',
        'description' => '<i class="icon-large icon-info-sign"></i>These fields are compatible with <a href="https://www.w3.org/TR/vocab-dcat/">DCAT</a>, an RDF vocabulary designed to facilitate interoperability between data catalogs published on the Web. These fields are also compatible with the Common Core metadata schema from <a href="https://project-open-data.github.io/schema/">Project Open Data</a>.',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_additional|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_data|node|resource|form';
  $field_group->group_name = 'group_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource',
    'weight' => '0',
    'children' => array(
      0 => 'group_link_api',
      1 => 'group_link_file',
      2 => 'group_upload',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Resource',
      'instance_settings' => array(
        'classes' => ' group-data field-group-htabs',
      ),
    ),
  );
  $field_groups['group_data|node|resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_api|node|resource|form';
  $field_group->group_name = 'group_link_api';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_data';
  $field_group->data = array(
    'label' => 'API or Website URL',
    'weight' => '11',
    'children' => array(
      0 => 'field_link_api',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'API or Website URL',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'htab_link_api group-link-api field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_link_api|node|resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_link_file|node|resource|form';
  $field_group->group_name = 'group_link_file';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_data';
  $field_group->data = array(
    'label' => 'Remote file',
    'weight' => '12',
    'children' => array(
      0 => 'field_link_remote_file',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Remote file',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'htab_link_file group-link-file field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_link_file|node|resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_plasma_mds|node|dataset|form';
  $field_group->group_name = 'group_plasma_mds';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Plasma-MDS',
    'weight' => '2',
    'children' => array(
      0 => 'field_plasma_diagnostics_name',
      1 => 'field_plasma_diagnostics_procedu',
      2 => 'field_plasma_diagnostics_propert',
      3 => 'field_plasma_medium_name',
      4 => 'field_plasma_medium_procedure',
      5 => 'field_plasma_medium_properties',
      6 => 'field_plasma_source_application',
      7 => 'field_plasma_source_name',
      8 => 'field_plasma_source_procedure',
      9 => 'field_plasma_source_properties',
      10 => 'field_plasma_source_specs',
      11 => 'field_plasma_target_name',
      12 => 'field_plasma_target_procedure',
      13 => 'field_plasma_target_properties',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-plasma-mds field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_plasma_mds|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_plasma_mds|node|resource|form';
  $field_group->group_name = 'group_plasma_mds';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Plasma-MDS',
    'weight' => '3',
    'children' => array(
      0 => 'field_format',
      1 => 'field_plasma_resource_data_type',
      2 => 'field_plasma_resource_quality',
      3 => 'field_plasma_resource_range',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-plasma-mds field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_plasma_mds|node|resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_primary|node|dataset|form';
  $field_group->group_name = 'group_primary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'dataset';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Primary',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_landing_page',
      2 => 'field_license',
      3 => 'field_tags',
      4 => 'og_group_ref',
      5 => 'field_topic',
      6 => 'field_authors',
      7 => 'field_is_supplementing',
      8 => 'field_permanent_identifier_doi',
      9 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Primary',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-primary field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_primary|node|dataset|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_upload|node|resource|form';
  $field_group->group_name = 'group_upload';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_data';
  $field_group->data = array(
    'label' => 'Upload',
    'weight' => '9',
    'children' => array(
      0 => 'field_upload',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Upload',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'htab_link_upload group-upload field-group-htab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_upload|node|resource|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('API or Website URL');
  t('Dataset Info');
  t('Dataset Information');
  t('Plasma-MDS');
  t('Primary');
  t('Remote file');
  t('Resource');
  t('Upload');

  return $field_groups;
}
