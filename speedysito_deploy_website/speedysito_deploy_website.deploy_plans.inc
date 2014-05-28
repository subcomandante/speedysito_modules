<?php
/**
 * @file
 * speedysito_deploy_website.deploy_plans.inc
 */

/**
 * Implements hook_deploy_plans_default().
 */
function speedysito_deploy_website_deploy_plans_default() {
  $export = array();

  $plan = new DeployPlan();
  $plan->disabled = FALSE; /* Edit this to true to make a default plan disabled initially */
  $plan->api_version = 1;
  $plan->name = 'speedysito_content_export';
  $plan->title = 'SpeedySito Content Export';
  $plan->description = 'SpeedySito Content Export.';
  $plan->debug = 0;
  $plan->aggregator_plugin = 'DeployAggregatorManaged';
  $plan->aggregator_config = array(
    'delete_post_deploy' => 0,
  );
  $plan->fetch_only = 1;
  $plan->processor_plugin = '';
  $plan->processor_config = array();
  $plan->endpoints = array();
  $export['speedysito_content_export'] = $plan;

  return $export;
}
