<!DOCTYPE html>
<!-- saved from url=(0074)https://github.com/AnimeshSatyapragyanPatra/ExamSystem/blob/main/project.c -->
<html lang="en" data-color-mode="auto" data-light-theme="light" data-dark-theme="dark" data-a11y-animated-images="system" data-a11y-link-underlines="true" class="js-focus-visible" data-js-focus-visible="" data-turbo-loaded="" aria-busy="true"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8"><style type="text/css">.turbo-progress-bar {
  position: fixed;
  display: block;
  top: 0;
  left: 0;
  height: 3px;
  background: #0076ff;
  z-index: 2147483647;
  transition:
    width 300ms ease-out,
    opacity 150ms 150ms ease-in;
  transform: translate3d(0, 0, 0);
}
</style>
    
  <link rel="dns-prefetch" href="https://github.githubassets.com/">
  <link rel="dns-prefetch" href="https://avatars.githubusercontent.com/">
  <link rel="dns-prefetch" href="https://github-cloud.s3.amazonaws.com/">
  <link rel="dns-prefetch" href="https://user-images.githubusercontent.com/">
  <link rel="preconnect" href="https://github.githubassets.com/" crossorigin="">
  <link rel="preconnect" href="https://avatars.githubusercontent.com/">

  


  <link crossorigin="anonymous" media="all" rel="stylesheet" href="./project_files/light-74231a1f3bbb.css"><link crossorigin="anonymous" media="all" rel="stylesheet" href="./project_files/dark-8a995f0bacd4.css"><link data-color-theme="light_high_contrast" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/light_high_contrast-83beb16e0ecf.css"><link data-color-theme="light_colorblind" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/light_colorblind-f91b0f603451.css"><link data-color-theme="light_colorblind_high_contrast" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/light_colorblind_high_contrast-5aebfa54b215.css"><link data-color-theme="light_tritanopia" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/light_tritanopia-6e122dab64fc.css"><link data-color-theme="light_tritanopia_high_contrast" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/light_tritanopia_high_contrast-b32664e28b79.css"><link data-color-theme="dark_high_contrast" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/dark_high_contrast-9ac301c3ebe5.css"><link data-color-theme="dark_colorblind" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/dark_colorblind-cd826e8636dc.css"><link data-color-theme="dark_colorblind_high_contrast" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/dark_colorblind_high_contrast-131d53fe187c.css"><link data-color-theme="dark_tritanopia" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/dark_tritanopia-18119e682df0.css"><link data-color-theme="dark_tritanopia_high_contrast" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/dark_tritanopia_high_contrast-63c0358957ba.css"><link data-color-theme="dark_dimmed" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/dark_dimmed-f37fb7684b1f.css"><link data-color-theme="dark_dimmed_high_contrast" crossorigin="anonymous" media="all" rel="stylesheet" data-href="https://github.githubassets.com/assets/dark_dimmed_high_contrast-8f371c75debd.css">

    <link crossorigin="anonymous" media="all" rel="stylesheet" href="./project_files/primer-primitives-225433424a87.css">
    <link crossorigin="anonymous" media="all" rel="stylesheet" href="./project_files/primer-b8b91660c29d.css">
    <link crossorigin="anonymous" media="all" rel="stylesheet" href="./project_files/global-81a137259098.css">
    <link crossorigin="anonymous" media="all" rel="stylesheet" href="./project_files/github-fff2cf968baa.css">
  <link crossorigin="anonymous" media="all" rel="stylesheet" href="./project_files/repository-4fce88777fa8.css">
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./project_files/code-177d21388df8.css">

  


  <script type="application/json" id="client-env">{"locale":"en","featureFlags":["alternate_user_config_repo","api_insights_show_missing_data_banner","billing_sku_level_budgets","client_version_header","codespaces_prebuild_region_target_update","contentful_lp_flex_features_actions","contentful_lp_flex_features_code_review","contentful_lp_flex_features_code_search","contentful_lp_flex_features_codespaces","contentful_lp_flex_features_discussions","contentful_lp_flex_features_issues","contentful_lp_footnotes","copilot_chat_attach_images","copilot_chat_attachments","copilot_chat_custom_instructions","copilot_chat_opening_thread_switch","copilot_chat_repo_custom_instructions_preview","copilot_chat_vision_in_claude","copilot_chat_wholearea_dd","copilot_default_4_1_preview","copilot_dotcom_chat_file_upload","copilot_duplicate_thread","copilot_free_to_paid_telem","copilot_immersive_issue_preview","copilot_new_immersive_references_ui","copilot_no_floating_button","copilot_read_shared_conversation","copilot_scroll_container_query","copilot_share_active_subthread","copilot_share_forbidden_error","copilot_task_oriented_assistive_prompts","copilot_topics_as_references","copilot_ui_refs","copilot_use_capi_default_model","dependency_graph_allow_disable_on_public_repos","direct_to_salesforce","dotcom_chat_client_side_skills","fetch_nonce_headers","ghost_pilot_confidence_truncation_25","ghost_pilot_confidence_truncation_40","github_models_o3_mini_streaming","insert_before_patch","issues_dashboard_no_redirects","issues_react_blur_item_picker_on_close","issues_react_create_milestone","issues_react_dashboard_save_query_refresh","issues_react_include_bots_in_pickers","issues_react_prohibit_title_fallback","issues_react_remove_placeholders","lifecycle_label_name_updates","link_contact_sales_swp_marketo","marketing_pages_search_explore_provider","memex_mwl_filter_field_delimiter","memex_roadmap_drag_style","nonreporting_relay_graphql_status_codes","primer_react_css_modules_ga","primer_react_select_panel_with_modern_action_list","remove_child_patch","repository_suggester_elastic_search","sample_network_conn_type","site_proxima_australia_update","site_proxima_usa_update","swp_enterprise_contact_form","use_paginated_org_picker_cost_center_form","use_paginated_repo_picker_cost_center_form","viewscreen_sandbox"],"login":"sahelidgp"}</script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/wp-runtime-ed31877d8a8c.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_oddbird_popover-polyfill_dist_popover-fn_js-a8c266e5f126.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_github_mini-throttle_dist_index_js-node_modules_stacktrace-parser_dist_s-1d3d52-83b9e5876876.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/ui_packages_failbot_failbot_ts-05558583be72.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/environment-00145190512b.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_primer_behaviors_dist_esm_index_mjs-c44edfed7f0d.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_github_selector-observer_dist_index_esm_js-d01a0e57231b.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_github_relative-time-element_dist_index_js-b96cbf526995.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_github_text-expander-element_dist_index_js-1f6d08804998.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_github_auto-complete-element_dist_index_js-node_modules_github_catalyst_-8e9f78-55b81350dfdb.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_github_filter-input-element_dist_index_js-node_modules_github_remote-inp-d8c643-8f1926754a8d.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_github_markdown-toolbar-element_dist_index_js-c66bd68a4bd8.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_github_mini-throttle_dist_index_js-node_modules_github_combobox-nav_dist-97536f-dfe529d68ce6.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_github_file-attachment-element_dist_index_js-node_modules_primer_view-co-63644b-8ff09ec17bfc.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/github-elements-a370e84793ef.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/element-registry-db730b446f70.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_braintree_browser-detection_dist_browser-detection_js-node_modules_githu-bb80ec-2562029d640d.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_lit-html_lit-html_js-c4df7c1117d4.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_morphdom_dist_morphdom-esm_js-300e8e4e0414.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_fzy_js_index_js-node_modules_github_paste-markdown_dist_index_js-63a26702fa42.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_github_turbo_dist_turbo_es2017-esm_js-5271e9c887b5.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_github_remote-form_dist_index_js-node_modules_delegated-events_dist_inde-893f9f-3f95b0ff87ec.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_color-convert_index_js-1a149db8dc99.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_github_quote-selection_dist_index_js-node_modules_github_session-resume_-c1aa61-fcfd98d65693.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/ui_packages_updatable-content_updatable-content_ts-3a5bf3aa0c5f.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/app_assets_modules_github_behaviors_task-list_ts-app_assets_modules_github_sso_ts-ui_packages-900dde-0f4d4815e497.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/app_assets_modules_github_sticky-scroll-into-view_ts-c4ec66fdacae.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/app_assets_modules_github_behaviors_ajax-error_ts-app_assets_modules_github_behaviors_include-d0d0a6-4ec1f4ce6c03.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/app_assets_modules_github_behaviors_commenting_edit_ts-app_assets_modules_github_behaviors_ht-83c235-c29d73bf4798.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/behaviors-a1d5209d3fa5.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_delegated-events_dist_index_js-node_modules_github_catalyst_lib_index_js-ea8eaa-99d4543be0a1.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/notifications-global-53d1fd57b234.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_github_mini-throttle_dist_index_js-node_modules_github_catalyst_lib_inde-dbbea9-b7a14570d384.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/code-menu-52f2057a8e7d.js.download"></script>
  
  <script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/primer-react-cf8d019de009.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/react-core-2e45a8c586a0.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/react-lib-248ff5a58e4e.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/octicons-react-9fd6ca6872cc.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_emotion_is-prop-valid_dist_emotion-is-prop-valid_esm_js-node_modules_emo-b1c483-9589ee80fc4f.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_github_catalyst_lib_index_js-node_modules_primer_live-region-element_dis-b2aea6-980db0e5dd58.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_dompurify_dist_purify_es_mjs-d13e3af1f7a5.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_lodash-es__Stack_js-node_modules_lodash-es__Uint8Array_js-node_modules_l-4faaa6-bdfd153f605f.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_lodash-es_isEqual_js-d3919b3d0f3d.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_tanstack_react-query_build_modern_queryOptions_js-node_modules_react-int-52413b-8c99d3c9132c.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_focus-visible_dist_focus-visible_js-node_modules_github_hydro-analytics--e21ffd-34e19bb44764.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/ui_packages_document-metadata_document-metadata_ts-ui_packages_history_history_ts-ui_packages-417c81-a0c3c1a41581.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/ui_packages_paths_index_ts-08fcbb3f0e88.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/ui_packages_ref-selector_RefSelector_tsx-07d3a848f730.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/ui_packages_commit-attribution_index_ts-ui_packages_commit-checks-status_index_ts-ui_packages-762eaa-12eaa372da2a.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/ui_packages_app-uuid_app-uuid_ts-ui_packages_repos-file-tree-view_repos-file-tree-view_ts-ui_-f1cc33-a71b7ef2c929.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/ui_packages_code-view-shared_hooks_use-canonical-object_ts-ui_packages_code-view-shared_hooks-cd3541-07aca5b3a26f.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/app_assets_modules_github_blob-anchor_ts-ui_packages_code-nav_code-nav_ts-ui_packages_filter--8253c1-7a601ea5c641.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/react-code-view-2af6d3a537be.js.download"></script>
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./project_files/primer-react.34abd6a35dee74c6730e.module.css">
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./project_files/react-code-view.304141ebc07a046c05cd.module.css">


  <title>ExamSystem/project.c at main · AnimeshSatyapragyanPatra/ExamSystem</title>



  <meta name="route-pattern" content="/:user_id/:repository/blob/*name(/*path)" data-turbo-transient="">
  <meta name="route-controller" content="blob" data-turbo-transient="">
  <meta name="route-action" content="show" data-turbo-transient="">
  <meta name="fetch-nonce" content="v2:573ebb07-f99a-93aa-2b7b-35a6b80c1297">

    
  <meta name="current-catalog-service-hash" content="f3abb0cc802f3d7b95fc8762b94bdcb13bf39634c40c357301c4aa1d67a256fb">


  <meta name="request-id" content="F581:2EFD8:EB826F:11B5AD4:68276875" data-turbo-transient="true"><meta name="html-safe-nonce" content="4b98aa82ed17b6ee31a09f883689a8bacd471fbcd1b0c82e0495e7e1e56d482d" data-turbo-transient="true"><meta name="visitor-payload" content="eyJyZWZlcnJlciI6Imh0dHBzOi8vZ2l0aHViLmNvbS9BbmltZXNoU2F0eWFwcmFneWFuUGF0cmEvRXhhbVN5c3RlbS9ibG9iL21haW4vcHJvamVjdC5jIiwicmVxdWVzdF9pZCI6IkY1ODE6MkVGRDg6RUI4MjZGOjExQjVBRDQ6NjgyNzY4NzUiLCJ2aXNpdG9yX2lkIjoiNDk3NTY2ODQyMjQyMjI5MDUyMCIsInJlZ2lvbl9lZGdlIjoiY2VudHJhbGluZGlhIiwicmVnaW9uX3JlbmRlciI6ImlhZCJ9" data-turbo-transient="true"><meta name="visitor-hmac" content="24cce1aabf9f69878bc38469b37f814dda6bcb0e10144c24d95f675b965cd1f5" data-turbo-transient="true">


    <meta name="hovercard-subject-tag" content="repository:984055845" data-turbo-transient="">


  <meta name="github-keyboard-shortcuts" content="repository,source-code,file-tree,copilot" data-turbo-transient="true">
  

  <meta name="selected-link" value="repo_source" data-turbo-transient="">
  <link rel="assets" href="https://github.githubassets.com/">

    <meta name="google-site-verification" content="Apib7-x98H0j5cPqHWwSMm6dNU4GmODRoqxLiDzdx9I">

<meta name="octolytics-url" content="https://collector.github.com/github/collect"><meta name="octolytics-actor-id" content="176162110"><meta name="octolytics-actor-login" content="sahelidgp"><meta name="octolytics-actor-hash" content="614a02d146cb67292967b4d4258f598d376b500a8b39cb1f1abe7cbdf4083b3b">

  <meta name="analytics-location" content="/&lt;user-name&gt;/&lt;repo-name&gt;/blob/show" data-turbo-transient="true">

  




    <meta name="user-login" content="sahelidgp">

  <link rel="sudo-modal" href="https://github.com/sessions/sudo_modal">

    <meta name="viewport" content="width=device-width">

    

      <meta name="description" content="ExamSphere is a C-based terminal digital exam system using a client-server model. It ensures secure, instructor-controlled assessments with anti-cheating mechanisms and role-based access. Students and instructors interact via a structured workflow. - ExamSystem/README.md at main · AnimeshSatyapragyanPatra/ExamSystem">

      <link rel="search" type="application/opensearchdescription+xml" href="https://github.com/opensearch.xml" title="GitHub">

    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
    <meta property="fb:app_id" content="1401488693436528">
    <meta name="apple-itunes-app" content="app-id=1477376905, app-argument=https://github.com/AnimeshSatyapragyanPatra/ExamSystem/blob/main/README.md">

      <meta name="twitter:image" content="https://opengraph.githubassets.com/9b336d475a5f472bec7ac70880e9972b6c948d4d3e4a700eb8530a600b11a7b1/AnimeshSatyapragyanPatra/ExamSystem"><meta name="twitter:site" content="@github"><meta name="twitter:card" content="summary_large_image"><meta name="twitter:title" content="ExamSystem/README.md at main · AnimeshSatyapragyanPatra/ExamSystem"><meta name="twitter:description" content="ExamSphere is a C-based terminal digital exam system using a client-server model. It ensures secure, instructor-controlled assessments with anti-cheating mechanisms and role-based access. Students ...">
  <meta property="og:image" content="https://opengraph.githubassets.com/9b336d475a5f472bec7ac70880e9972b6c948d4d3e4a700eb8530a600b11a7b1/AnimeshSatyapragyanPatra/ExamSystem"><meta property="og:image:alt" content="ExamSphere is a C-based terminal digital exam system using a client-server model. It ensures secure, instructor-controlled assessments with anti-cheating mechanisms and role-based access. Students ..."><meta property="og:image:width" content="1200"><meta property="og:image:height" content="600"><meta property="og:site_name" content="GitHub"><meta property="og:type" content="object"><meta property="og:title" content="ExamSystem/README.md at main · AnimeshSatyapragyanPatra/ExamSystem"><meta property="og:url" content="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/blob/main/README.md"><meta property="og:description" content="ExamSphere is a C-based terminal digital exam system using a client-server model. It ensures secure, instructor-controlled assessments with anti-cheating mechanisms and role-based access. Students ...">
  


      <link rel="shared-web-socket" href="wss://alive.github.com/_sockets/u/176162110/ws?session=eyJ2IjoiVjMiLCJ1IjoxNzYxNjIxMTAsInMiOjE2NjUyMDQzODEsImMiOjE2MTIxNjc2NTcsInQiOjE3NDc0MTMxMzR9--77b64332cfb9a02067e2c2ec4348659127994b3e5624761f0c711835c64f7f64" data-refresh-url="/_alive" data-session-id="9188cd2c93f304c231511f11427158fea3d14a015c4d8c372c788784d0eba81d">
      <link rel="shared-web-socket-src" href="https://github.com/assets-cdn/worker/socket-worker-a6ac874eb3a8.js">


      <meta name="hostname" content="github.com">


      <meta name="keyboard-shortcuts-preference" content="all">
      <meta name="hovercards-preference" content="true">
      <meta name="announcement-preference-hovercard" content="true">

        <meta name="expected-hostname" content="github.com">


  <meta http-equiv="x-pjax-version" content="f942886105581b4a12facb9708ce69ab8151b43c6e317bc35bbfac2eccc3be33" data-turbo-track="reload">
  <meta http-equiv="x-pjax-csp-version" content="352e51c42d5f5727a7c545752bf34d1f83f40219e7036c6959817149a51651bc" data-turbo-track="reload">
  <meta http-equiv="x-pjax-css-version" content="8491a514f6027803ffd5da176cee18aeece9e8fb80a7e05dc74f19832d44aa81" data-turbo-track="reload">
  <meta http-equiv="x-pjax-js-version" content="3abf1a930d724b4e7d36f30d0fafcdc87c11b595c786ff0976ef9e5971f26148" data-turbo-track="reload">

  <meta name="turbo-cache-control" content="no-preview" data-turbo-transient="">

      <meta name="turbo-cache-control" content="no-cache" data-turbo-transient="">

    <meta data-hydrostats="publish">
  <meta name="go-import" content="github.com/AnimeshSatyapragyanPatra/ExamSystem git https://github.com/AnimeshSatyapragyanPatra/ExamSystem.git">

  <meta name="octolytics-dimension-user_id" content="156192085"><meta name="octolytics-dimension-user_login" content="AnimeshSatyapragyanPatra"><meta name="octolytics-dimension-repository_id" content="984055845"><meta name="octolytics-dimension-repository_nwo" content="AnimeshSatyapragyanPatra/ExamSystem"><meta name="octolytics-dimension-repository_public" content="true"><meta name="octolytics-dimension-repository_is_fork" content="false"><meta name="octolytics-dimension-repository_network_root_id" content="984055845"><meta name="octolytics-dimension-repository_network_root_nwo" content="AnimeshSatyapragyanPatra/ExamSystem">



    

    <meta name="turbo-body-classes" content="logged-in env-production page-responsive">


  <meta name="browser-stats-url" content="https://api.github.com/_private/browser/stats">

  <meta name="browser-errors-url" content="https://api.github.com/_private/browser/errors">

  <meta name="release" content="8883d771ce375858d7f6bdd6ffab4a3aeef25220">

  <link rel="mask-icon" href="https://github.githubassets.com/assets/pinned-octocat-093da3e6fa40.svg" color="#000000">
  <link rel="alternate icon" class="js-site-favicon" type="image/png" href="https://github.githubassets.com/favicons/favicon-dark.png">
  <link rel="icon" class="js-site-favicon" type="image/svg+xml" href="https://github.githubassets.com/favicons/favicon-dark.svg" data-base-href="https://github.githubassets.com/favicons/favicon">

<meta name="theme-color" content="#1e2327">
<meta name="color-scheme" content="light dark">


  <link rel="manifest" href="https://github.com/manifest.json" crossorigin="use-credentials">

  <style id="ms-consent-banner-main-styles">.w8hcgFksdo30C8w-bygqu{color:#000}.ydkKdaztSS0AeHWIeIHsQ a{color:#0067B8}.erL690_8JwUW-R4bJRcfl{background-color:#EBEBEB;border:none;color:#000}.erL690_8JwUW-R4bJRcfl:enabled:hover{color:#000;background-color:#DBDBDB;box-shadow:0px 4px 10px rgba(0,0,0,0.25);border:none}.erL690_8JwUW-R4bJRcfl:enabled:focus{background-color:#DBDBDB;box-shadow:0px 4px 10px rgba(0,0,0,0.25);border:2px solid #000}.erL690_8JwUW-R4bJRcfl:disabled{opacity:1;color:rgba(0,0,0,0.2);background-color:rgba(0,0,0,0.2);border:none}._1zNQOqxpBFSokeCLGi_hGr{border:none;background-color:#0067B8;color:#fff}._1zNQOqxpBFSokeCLGi_hGr:enabled:hover{color:#fff;background-color:#0067B8;box-shadow:0px 4px 10px rgba(0,0,0,0.25);border:none}._1zNQOqxpBFSokeCLGi_hGr:enabled:focus{background-color:#0067B8;box-shadow:0px 4px 10px rgba(0,0,0,0.25);border:2px solid #000}._1zNQOqxpBFSokeCLGi_hGr:disabled{opacity:1;color:rgba(0,0,0,0.2);background-color:rgba(0,120,215,0.2);border:none}._23tra1HsiiP6cT-Cka-ycB{position:relative;display:flex;z-index:9999;width:100%;background-color:#F2F2F2;justify-content:space-between;text-align:left}div[dir="rtl"]._23tra1HsiiP6cT-Cka-ycB{text-align:right}._1Upc2NjY8AlDn177YoVj0y{margin:0;padding-left:5%;padding-top:8px;padding-bottom:8px}div[dir="rtl"] ._1Upc2NjY8AlDn177YoVj0y{margin:0;padding:8px 5% 8px 0;float:none}._23tra1HsiiP6cT-Cka-ycB svg{fill:none;max-width:none;max-height:none}._1V_hlU-7jdtPiooHMu89BB{display:table-cell;padding:12px;width:24px;height:24px;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:24px;line-height:0}.f6QKJD7fhSbnJLarTL-W-{display:table-cell;vertical-align:middle;padding:0;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:13px;line-height:16px}.f6QKJD7fhSbnJLarTL-W- a{text-decoration:underline}._2j0fmugLb1FgYz6KPuB91w{display:inline-block;margin-left:5%;margin-right:5%;min-width:40%;min-width:calc((150px + 3 * 4px) * 2 + 150px);min-width:-webkit-fit-content;min-width:-moz-fit-content;min-width:fit-content;align-self:center;position:relative}._1XuCi2WhiqeWRUVp3pnFG3{margin:4px;padding:5px;min-width:150px;min-height:36px;vertical-align:top;cursor:pointer;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:15px;line-height:20px;text-align:center}._1XuCi2WhiqeWRUVp3pnFG3:focus{box-sizing:border-box}._1XuCi2WhiqeWRUVp3pnFG3:disabled{cursor:not-allowed}._2bvsb3ubApyZ0UGoQA9O9T{display:block;position:fixed;z-index:10000;top:0;left:0;width:100%;height:100%;background-color:rgba(255,255,255,0.6);overflow:auto;text-align:left}div[dir="rtl"]._2bvsb3ubApyZ0UGoQA9O9T{text-align:right}div[dir="rtl"] ._2bvsb3ubApyZ0UGoQA9O9T{left:auto;right:0}.AFsJE948muYyzCMktdzuk{position:relative;top:8%;margin-bottom:40px;margin-left:auto;margin-right:auto;box-sizing:border-box;width:640px;background-color:#fff;border:1px solid #0067B8}._3kWyBRbW_dgnMiEyx06Fu4{float:right;z-index:1;margin:2px;padding:12px;border:none;cursor:pointer;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:13px;line-height:13px;display:flex;align-items:center;text-align:center;color:#666;background-color:#fff}div[dir="rtl"] ._3kWyBRbW_dgnMiEyx06Fu4{margin:2px;padding:12px;float:left}.uCYvKvHXrhjNgflv1VqdD{position:static;margin-top:36px;margin-left:36px;margin-right:36px}._17pX1m9O_W--iZbDt3Ta5r{margin-top:0;margin-bottom:12px;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:600;font-size:20px;line-height:24px;text-transform:none}._1kBkHQ1V1wu3kl-YcLgUr6{height:446px;overflow:auto}._20_nXDf6uFs9Q6wxRXG-I-{margin-top:0;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:15px;line-height:20px}._20_nXDf6uFs9Q6wxRXG-I- a{text-decoration:underline}dl._2a0NH_GDQEQe5Ynfo7suVH{margin-top:36px;margin-bottom:0;padding:0;list-style:none;text-transform:none}dt._3j_LCPv7fyXv3A8FIXVwZ4{margin-top:20px;float:none;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:600;font-size:18px;line-height:24px;list-style:none}.k-vxTGFbdq1aOZB2HHpjh{margin:0;padding:0;border:none}._2Bucyy75c_ogoU1g-liB5R{margin:0;padding:0;border-bottom:none;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:600;font-size:18px;line-height:24px;text-transform:none}._63gwfzV8dclrsl2cfd90r{display:inline-block;margin-top:0;margin-bottom:13px;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:15px;line-height:20px}._1l8wM_4mRYGz3Iu7l3BZR7{display:block}._2UE03QS02aZGkslegN_F-i{display:inline-block;position:relative;left:5px;margin-bottom:13px;margin-right:34px;padding:3px}div[dir="rtl"] ._2UE03QS02aZGkslegN_F-i{margin:0 0 13px 34px;padding:3px;float:none}div[dir="rtl"] ._2UE03QS02aZGkslegN_F-i{left:auto;right:5px}._23tra1HsiiP6cT-Cka-ycB *::before,._2bvsb3ubApyZ0UGoQA9O9T *::before,._23tra1HsiiP6cT-Cka-ycB *::after,._2bvsb3ubApyZ0UGoQA9O9T *::after{box-sizing:inherit}._1HSFn0HzGo6w4ADApV8-c4{outline:2px solid rgba(0,0,0,0.8)}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2{display:inline-block;position:relative;margin-top:0;margin-left:0;margin-right:0;height:0;width:0;border-radius:0;cursor:pointer;outline:none;box-sizing:border-box;-webkit-appearance:none;-moz-appearance:none;appearance:none}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2+label::before{display:block;position:absolute;top:5px;left:3px;height:19px;width:19px;content:"";border-radius:50%;border:1px solid #000;background-color:#fff}div[dir="rtl"] input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2+label::before{left:auto;right:3px}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:not(:disabled)+label:hover::before{border:1px solid #0067B8}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:not(:disabled)+label:hover::after{display:block;position:absolute;top:10px;left:8px;height:9px;width:9px;content:"";border-radius:50%;background-color:rgba(0,0,0,0.8)}div[dir="rtl"] input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:not(:disabled)+label:hover::after{left:auto;right:8px}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:not(:disabled)+label:focus::before{border:1px solid #0067B8}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:not(:disabled)+label:focus::after{display:block;position:absolute;top:10px;left:8px;height:9px;width:9px;content:"";border-radius:50%;background-color:#000}div[dir="rtl"] input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:not(:disabled)+label:focus::after{left:auto;right:8px}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:checked+label::after{display:block;position:absolute;top:10px;left:8px;height:9px;width:9px;content:"";border-radius:50%;background-color:#000}div[dir="rtl"] input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:checked+label::after{left:auto;right:8px}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:disabled+label{cursor:not-allowed}input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:disabled+label::before{border:1px solid rgba(0,0,0,0.2);background-color:rgba(0,0,0,0.2)}._3RJzeL3l9Rl_lAQEm6VwdX{display:block;position:static;float:right;margin-top:0;margin-bottom:0;margin-left:19px;margin-right:0;padding-top:0;padding-bottom:0;padding-left:8px;padding-right:0;width:80%;width:calc(100% - 19px);font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:15px;line-height:20px;text-transform:none;cursor:pointer;box-sizing:border-box}div[dir="rtl"] ._3RJzeL3l9Rl_lAQEm6VwdX{margin:0 19px 0 0;padding:0 8px 0 0;float:left}.nohp3sIG12ZBhzcMnPala{margin-top:20px;margin-bottom:48px}._2uhaEsmeotZ3P-M0AXo2kF{padding:0;width:278px;height:36px;cursor:pointer;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:15px;line-height:20px;text-align:center}._2uhaEsmeotZ3P-M0AXo2kF:focus{box-sizing:border-box}._2uhaEsmeotZ3P-M0AXo2kF:disabled{cursor:not-allowed}._3tOu1FJ59c_xz_PmI1lKV5{float:right;padding:0;width:278px;height:36px;cursor:pointer;font-family:Segoe UI, SegoeUI, Arial, sans-serif;font-style:normal;font-weight:normal;font-size:15px;line-height:20px;text-align:center}._3tOu1FJ59c_xz_PmI1lKV5:focus{box-sizing:border-box}._3tOu1FJ59c_xz_PmI1lKV5:disabled{cursor:not-allowed}div[dir="rtl"] ._3tOu1FJ59c_xz_PmI1lKV5{margin:0;padding:0;float:left}@media only screen and (max-width: 768px){._2j0fmugLb1FgYz6KPuB91w,._1Upc2NjY8AlDn177YoVj0y{padding-top:8px;padding-bottom:12px;padding-left:3.75%;padding-right:3.75%;margin:0;width:92.5%}._23tra1HsiiP6cT-Cka-ycB{display:block}._1XuCi2WhiqeWRUVp3pnFG3{margin-bottom:8px;margin-left:0;margin-right:0;width:100%}._2bvsb3ubApyZ0UGoQA9O9T{overflow:hidden}.AFsJE948muYyzCMktdzuk{top:1.8%;width:93.33%;height:96.4%;overflow:hidden}.uCYvKvHXrhjNgflv1VqdD{margin-top:24px;margin-left:24px;margin-right:24px;height:100%}._1kBkHQ1V1wu3kl-YcLgUr6{height:62%;height:calc(100% - 188px);min-height:50%}._2uhaEsmeotZ3P-M0AXo2kF{width:100%}._3tOu1FJ59c_xz_PmI1lKV5{margin-bottom:12px;margin-left:0;width:100%}div[dir="rtl"] ._3tOu1FJ59c_xz_PmI1lKV5{margin:0 0 12px 0;padding:0;float:none}}@media only screen and (max-width: 768px) and (orientation: landscape), only screen and (max-height: 260px), only screen and (max-width: 340px){.AFsJE948muYyzCMktdzuk{overflow:auto}}@media only screen and (max-height: 260px), only screen and (max-width: 340px){._1XuCi2WhiqeWRUVp3pnFG3{min-width:0}._3kWyBRbW_dgnMiEyx06Fu4{padding:3%}.uCYvKvHXrhjNgflv1VqdD{margin-top:3%;margin-left:3%;margin-right:3%}._17pX1m9O_W--iZbDt3Ta5r{margin-bottom:3%}._1kBkHQ1V1wu3kl-YcLgUr6{height:calc(79% - 64px)}.nohp3sIG12ZBhzcMnPala{margin-top:5%;margin-bottom:10%}._3tOu1FJ59c_xz_PmI1lKV5{margin-bottom:3%}div[dir="rtl"] ._3tOu1FJ59c_xz_PmI1lKV5{margin:0 0 3% 0;padding:0;float:none}}
</style><style type="text/css" id="ms-consent-banner-theme-styles">._23tra1HsiiP6cT-Cka-ycB {
            background-color: #24292f !important;
        }.w8hcgFksdo30C8w-bygqu {
            color: #ffffff !important;
        }.ydkKdaztSS0AeHWIeIHsQ a {
            color: #d8b9ff !important;
        }._2bvsb3ubApyZ0UGoQA9O9T {
            background-color: rgba(23, 23, 23, 0.8) !important;
        }.AFsJE948muYyzCMktdzuk {
            background-color: #24292f !important;
            border: 1px solid #d8b9ff !important;
        }._3kWyBRbW_dgnMiEyx06Fu4 {
            color: #d8b9ff !important;
            background-color: #24292f !important;
        }._1zNQOqxpBFSokeCLGi_hGr {
            border: 1px solid #ffffff !important;
            background-color: #ffffff !important;
            color: #1f2328 !important;
        }._1zNQOqxpBFSokeCLGi_hGr:enabled:hover {
            color: #1f2328 !important;
            background-color: #d8b9ff !important;
            box-shadow: none !important;
            border: 1px solid transparent !important;
        }._1zNQOqxpBFSokeCLGi_hGr:enabled:focus {
            background-color: #d8b9ff !important;
            box-shadow: none !important;
            border: 2px solid #ffffff !important;
        }._1zNQOqxpBFSokeCLGi_hGr:disabled {
            opacity: 0.5 !important;
            color: #1f2328 !important;
            background-color: #ffffff !important;
            border: 1px solid transparent !important;
        }.erL690_8JwUW-R4bJRcfl {
            border: 1px solid #eaeef2 !important;
            background-color: #32383f !important;
            color: #ffffff !important;
        }.erL690_8JwUW-R4bJRcfl:enabled:hover {
            color: #ffffff !important;
            background-color: #24292f !important;
            box-shadow: none !important;
            border: 1px solid #ffffff !important;
        }.erL690_8JwUW-R4bJRcfl:enabled:focus {
            background-color: #24292f !important;
            box-shadow: none !important;
            border: 2px solid #6e7781 !important;
        }.erL690_8JwUW-R4bJRcfl:disabled {
            opacity: 0.5 !important;
            color: #ffffff !important;
            background-color: #424a53 !important;
            border: 1px solid #6e7781 !important;
        }input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2 + label::before {
            border: 1px solid #d8b9ff !important;
            background-color: #24292f !important;
        }._1HSFn0HzGo6w4ADApV8-c4 {
            outline: 2px solid #ffffff !important;
        }input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:checked + label::after {
            background-color: #d8b9ff !important;
        }input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2 + label:hover::before {
            border: 1px solid #ffffff !important;
        }input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2 + label:hover::after {
            background-color: #ffffff !important;
        }input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2 + label:focus::before {
            border: 1px solid #ffffff !important;
        }input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2 + label:focus::after {
            background-color: #d8b9ff !important;
        }input[type="radio"]._1dp8Vp5m3HwAqGx8qBmFV2:disabled + label::before {
            border: 1px solid rgba(227, 227, 227, 0.2) !important;
            background-color: rgba(227, 227, 227, 0.2) !important;
        }</style><style data-styled="active" data-styled-version="5.3.11"></style><link type="text/css" rel="stylesheet" href="chrome-extension://fheoggkfdfchfphceeifdbepaooicaho/css/mcafee_fonts.css"></head>

  <body class="logged-in env-production page-responsive" style="overflow-wrap: break-word; --dialog-scrollgutter: 15px;">
    <div data-turbo-body="" class="logged-in env-production page-responsive" style="word-wrap: break-word;">
      



    <div class="position-relative header-wrapper js-header-wrapper ">
      <a href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/blob/main/project.c#start-of-content" data-skip-target-assigned="false" class="p-3 color-bg-accent-emphasis color-fg-on-emphasis show-on-focus js-skip-to-content">Skip to content</a>

      <span data-view-component="true" class="progress-pjax-loader Progress position-fixed width-full">
    <span style="width: 0%;" data-view-component="true" class="Progress-item progress-pjax-loader-bar left-0 top-0 color-bg-accent-emphasis"></span>
</span>      
      
      <script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/ui_packages_ui-commands_ui-commands_ts-6df6756b79a5.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/keyboard-shortcuts-dialog-5acb2ad4e3e9.js.download"></script>
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./project_files/primer-react.34abd6a35dee74c6730e.module.css">
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./project_files/keyboard-shortcuts-dialog.a25fe62bfab0eee51ddb.module.css">

<react-partial partial-name="keyboard-shortcuts-dialog" data-ssr="false" data-attempted-ssr="false" data-catalyst="" class="loaded">
  
  <script type="application/json" data-target="react-partial.embeddedData">{"props":{"docsUrl":"https://docs.github.com/get-started/accessibility/keyboard-shortcuts"}}</script>
  <div data-target="react-partial.reactRoot"><div class="d-none"></div><script type="application/json" id="__PRIMER_DATA_:r11:__">{"resolvedServerColorMode":"night"}</script></div>
</react-partial>




      

          

              <header class="AppHeader" role="banner">
  <h2 class="sr-only">Navigation Menu</h2>


    

    <div class="AppHeader-globalBar pb-2 js-global-bar">
      <div class="AppHeader-globalBar-start">
        <div class="">
            <deferred-side-panel data-url="/_side-panels/global" data-catalyst="">
  <include-fragment data-target="deferred-side-panel.fragment" data-nonce="v2:573ebb07-f99a-93aa-2b7b-35a6b80c1297" data-view-component="true"><template shadowrootmode="open"><style>:host {display: block;}</style><slot></slot></template>
      <button aria-label="Open global navigation menu" data-action="click:deferred-side-panel#loadPanel click:deferred-side-panel#panelOpened" data-show-dialog-id="dialog-f450b23f-65ca-42a2-a64f-fdbf582f6185" id="dialog-show-dialog-f450b23f-65ca-42a2-a64f-fdbf582f6185" type="button" data-view-component="true" class="Button Button--iconOnly Button--secondary Button--medium AppHeader-button p-0 color-fg-muted" fdprocessedid="29dkno">  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-three-bars Button-visual">
    <path d="M1 2.75A.75.75 0 0 1 1.75 2h12.5a.75.75 0 0 1 0 1.5H1.75A.75.75 0 0 1 1 2.75Zm0 5A.75.75 0 0 1 1.75 7h12.5a.75.75 0 0 1 0 1.5H1.75A.75.75 0 0 1 1 7.75ZM1.75 12h12.5a.75.75 0 0 1 0 1.5H1.75a.75.75 0 0 1 0-1.5Z"></path>
</svg>
</button>

<dialog-helper>
  <dialog data-target="deferred-side-panel.panel" id="dialog-f450b23f-65ca-42a2-a64f-fdbf582f6185" aria-modal="true" aria-labelledby="dialog-f450b23f-65ca-42a2-a64f-fdbf582f6185-title" aria-describedby="dialog-f450b23f-65ca-42a2-a64f-fdbf582f6185-description" data-view-component="true" class="Overlay Overlay-whenNarrow Overlay--size-small-portrait Overlay--motion-scaleFade Overlay--placement-left SidePanel Overlay--disableScroll">
    <div styles="flex-direction: row;" data-view-component="true" class="Overlay-header">
  <div class="Overlay-headerContentWrap">
    <div class="Overlay-titleWrap">
      <h1 class="Overlay-title sr-only" id="dialog-f450b23f-65ca-42a2-a64f-fdbf582f6185-title">
        Global navigation
      </h1>
            <div data-view-component="true" class="d-flex">
      <div data-view-component="true" class="AppHeader-logo position-relative">
        <svg aria-hidden="true" height="24" viewBox="0 0 24 24" version="1.1" width="24" data-view-component="true" class="octicon octicon-mark-github">
    <path d="M12 1C5.9225 1 1 5.9225 1 12C1 16.8675 4.14875 20.9787 8.52125 22.4362C9.07125 22.5325 9.2775 22.2025 9.2775 21.9137C9.2775 21.6525 9.26375 20.7862 9.26375 19.865C6.5 20.3737 5.785 19.1912 5.565 18.5725C5.44125 18.2562 4.905 17.28 4.4375 17.0187C4.0525 16.8125 3.5025 16.3037 4.42375 16.29C5.29 16.2762 5.90875 17.0875 6.115 17.4175C7.105 19.0812 8.68625 18.6137 9.31875 18.325C9.415 17.61 9.70375 17.1287 10.02 16.8537C7.5725 16.5787 5.015 15.63 5.015 11.4225C5.015 10.2262 5.44125 9.23625 6.1425 8.46625C6.0325 8.19125 5.6475 7.06375 6.2525 5.55125C6.2525 5.55125 7.17375 5.2625 9.2775 6.67875C10.1575 6.43125 11.0925 6.3075 12.0275 6.3075C12.9625 6.3075 13.8975 6.43125 14.7775 6.67875C16.8813 5.24875 17.8025 5.55125 17.8025 5.55125C18.4075 7.06375 18.0225 8.19125 17.9125 8.46625C18.6138 9.23625 19.04 10.2125 19.04 11.4225C19.04 15.6437 16.4688 16.5787 14.0213 16.8537C14.42 17.1975 14.7638 17.8575 14.7638 18.8887C14.7638 20.36 14.75 21.5425 14.75 21.9137C14.75 22.2025 14.9563 22.5462 15.5063 22.4362C19.8513 20.9787 23 16.8537 23 12C23 5.9225 18.0775 1 12 1Z"></path>
</svg>
</div></div>
    </div>
    <div class="Overlay-actionWrap">
      <button data-close-dialog-id="dialog-f450b23f-65ca-42a2-a64f-fdbf582f6185" aria-label="Close" type="button" data-view-component="true" class="close-button Overlay-closeButton"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg></button>
    </div>
  </div>
  
</div>
      <scrollable-region data-labelled-by="dialog-f450b23f-65ca-42a2-a64f-fdbf582f6185-title" data-catalyst="" style="overflow: auto;">
        <div data-view-component="true" class="Overlay-body d-flex flex-column px-2">    <div data-view-component="true" class="d-flex flex-column mb-3">
        <nav aria-label="Site navigation" data-view-component="true" class="ActionList">
  
  <nav-list data-catalyst="">
    <ul data-target="nav-list.topLevelList" data-view-component="true" class="ActionListWrap">
        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    
    <a data-hotkey="g d" data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;HOME&quot;,&quot;label&quot;:null}" id="item-cbd7342c-2e69-4d6e-b9fd-13c7c46de032" href="https://github.com/dashboard" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-home">
    <path d="M6.906.664a1.749 1.749 0 0 1 2.187 0l5.25 4.2c.415.332.657.835.657 1.367v7.019A1.75 1.75 0 0 1 13.25 15h-3.5a.75.75 0 0 1-.75-.75V9H7v5.25a.75.75 0 0 1-.75.75h-3.5A1.75 1.75 0 0 1 1 13.25V6.23c0-.531.242-1.034.657-1.366l5.25-4.2Zm1.25 1.171a.25.25 0 0 0-.312 0l-5.25 4.2a.25.25 0 0 0-.094.196v7.019c0 .138.112.25.25.25H5.5V8.25a.75.75 0 0 1 .75-.75h3.5a.75.75 0 0 1 .75.75v5.25h2.75a.25.25 0 0 0 .25-.25V6.23a.25.25 0 0 0-.094-.195Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Home
</span>      
</a>
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    
    <a data-hotkey="g i" data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;ISSUES&quot;,&quot;label&quot;:null}" id="item-4db8a385-8891-4c7f-8ec5-4d49f862df6e" href="https://github.com/issues" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-issue-opened">
    <path d="M8 9.5a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path><path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0ZM1.5 8a6.5 6.5 0 1 0 13 0 6.5 6.5 0 0 0-13 0Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Issues
</span>      
</a>
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    
    <a data-hotkey="g p" data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;PULL_REQUESTS&quot;,&quot;label&quot;:null}" id="item-2555cd3e-f144-4d58-b0a6-ef60ebed850b" href="https://github.com/pulls" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-git-pull-request">
    <path d="M1.5 3.25a2.25 2.25 0 1 1 3 2.122v5.256a2.251 2.251 0 1 1-1.5 0V5.372A2.25 2.25 0 0 1 1.5 3.25Zm5.677-.177L9.573.677A.25.25 0 0 1 10 .854V2.5h1A2.5 2.5 0 0 1 13.5 5v5.628a2.251 2.251 0 1 1-1.5 0V5a1 1 0 0 0-1-1h-1v1.646a.25.25 0 0 1-.427.177L7.177 3.427a.25.25 0 0 1 0-.354ZM3.75 2.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm0 9.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm8.25.75a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Pull requests
</span>      
</a>
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;PROJECTS&quot;,&quot;label&quot;:null}" id="item-344332cc-c8f2-49b3-89df-9a50d2fd8383" href="https://github.com/projects" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-table">
    <path d="M0 1.75C0 .784.784 0 1.75 0h12.5C15.216 0 16 .784 16 1.75v12.5A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25ZM6.5 6.5v8h7.75a.25.25 0 0 0 .25-.25V6.5Zm8-1.5V1.75a.25.25 0 0 0-.25-.25H6.5V5Zm-13 1.5v7.75c0 .138.112.25.25.25H5v-8ZM5 5V1.5H1.75a.25.25 0 0 0-.25.25V5Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Projects
</span>      
</a>
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;DISCUSSIONS&quot;,&quot;label&quot;:null}" id="item-e9e0ffe1-b87f-46be-9a47-a480ec3c0693" href="https://github.com/discussions" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-comment-discussion">
    <path d="M1.75 1h8.5c.966 0 1.75.784 1.75 1.75v5.5A1.75 1.75 0 0 1 10.25 10H7.061l-2.574 2.573A1.458 1.458 0 0 1 2 11.543V10h-.25A1.75 1.75 0 0 1 0 8.25v-5.5C0 1.784.784 1 1.75 1ZM1.5 2.75v5.5c0 .138.112.25.25.25h1a.75.75 0 0 1 .75.75v2.19l2.72-2.72a.749.749 0 0 1 .53-.22h3.5a.25.25 0 0 0 .25-.25v-5.5a.25.25 0 0 0-.25-.25h-8.5a.25.25 0 0 0-.25.25Zm13 2a.25.25 0 0 0-.25-.25h-.5a.75.75 0 0 1 0-1.5h.5c.966 0 1.75.784 1.75 1.75v5.5A1.75 1.75 0 0 1 14.25 12H14v1.543a1.458 1.458 0 0 1-2.487 1.03L9.22 12.28a.749.749 0 0 1 .326-1.275.749.749 0 0 1 .734.215l2.22 2.22v-2.19a.75.75 0 0 1 .75-.75h1a.25.25 0 0 0 .25-.25Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Discussions
</span>      
</a>
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;CODESPACES&quot;,&quot;label&quot;:null}" id="item-e287ef8b-b8b2-4318-80df-e3dcde0300ae" href="https://github.com/codespaces" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-codespaces">
    <path d="M0 11.25c0-.966.784-1.75 1.75-1.75h12.5c.966 0 1.75.784 1.75 1.75v3A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25Zm2-9.5C2 .784 2.784 0 3.75 0h8.5C13.216 0 14 .784 14 1.75v5a1.75 1.75 0 0 1-1.75 1.75h-8.5A1.75 1.75 0 0 1 2 6.75Zm1.75-.25a.25.25 0 0 0-.25.25v5c0 .138.112.25.25.25h8.5a.25.25 0 0 0 .25-.25v-5a.25.25 0 0 0-.25-.25Zm-2 9.5a.25.25 0 0 0-.25.25v3c0 .138.112.25.25.25h12.5a.25.25 0 0 0 .25-.25v-3a.25.25 0 0 0-.25-.25Z"></path><path d="M7 12.75a.75.75 0 0 1 .75-.75h4.5a.75.75 0 0 1 0 1.5h-4.5a.75.75 0 0 1-.75-.75Zm-4 0a.75.75 0 0 1 .75-.75h.5a.75.75 0 0 1 0 1.5h-.5a.75.75 0 0 1-.75-.75Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Codespaces
</span>      
</a>
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;COPILOT&quot;,&quot;label&quot;:null}" id="item-e7b226a8-887b-4883-a853-ea9c1493ef2e" href="https://github.com/copilot" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-copilot">
    <path d="M7.998 15.035c-4.562 0-7.873-2.914-7.998-3.749V9.338c.085-.628.677-1.686 1.588-2.065.013-.07.024-.143.036-.218.029-.183.06-.384.126-.612-.201-.508-.254-1.084-.254-1.656 0-.87.128-1.769.693-2.484.579-.733 1.494-1.124 2.724-1.261 1.206-.134 2.262.034 2.944.765.05.053.096.108.139.165.044-.057.094-.112.143-.165.682-.731 1.738-.899 2.944-.765 1.23.137 2.145.528 2.724 1.261.566.715.693 1.614.693 2.484 0 .572-.053 1.148-.254 1.656.066.228.098.429.126.612.012.076.024.148.037.218.924.385 1.522 1.471 1.591 2.095v1.872c0 .766-3.351 3.795-8.002 3.795Zm0-1.485c2.28 0 4.584-1.11 5.002-1.433V7.862l-.023-.116c-.49.21-1.075.291-1.727.291-1.146 0-2.059-.327-2.71-.991A3.222 3.222 0 0 1 8 6.303a3.24 3.24 0 0 1-.544.743c-.65.664-1.563.991-2.71.991-.652 0-1.236-.081-1.727-.291l-.023.116v4.255c.419.323 2.722 1.433 5.002 1.433ZM6.762 2.83c-.193-.206-.637-.413-1.682-.297-1.019.113-1.479.404-1.713.7-.247.312-.369.789-.369 1.554 0 .793.129 1.171.308 1.371.162.181.519.379 1.442.379.853 0 1.339-.235 1.638-.54.315-.322.527-.827.617-1.553.117-.935-.037-1.395-.241-1.614Zm4.155-.297c-1.044-.116-1.488.091-1.681.297-.204.219-.359.679-.242 1.614.091.726.303 1.231.618 1.553.299.305.784.54 1.638.54.922 0 1.28-.198 1.442-.379.179-.2.308-.578.308-1.371 0-.765-.123-1.242-.37-1.554-.233-.296-.693-.587-1.713-.7Z"></path><path d="M6.25 9.037a.75.75 0 0 1 .75.75v1.501a.75.75 0 0 1-1.5 0V9.787a.75.75 0 0 1 .75-.75Zm4.25.75v1.501a.75.75 0 0 1-1.5 0V9.787a.75.75 0 0 1 1.5 0Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Copilot
</span>      
</a>
  
</li>

        
          <li role="presentation" aria-hidden="true" data-view-component="true" class="ActionList-sectionDivider"></li>
        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;EXPLORE&quot;,&quot;label&quot;:null}" id="item-701018fc-809b-4c5a-bd6b-7f079510903e" href="https://github.com/explore" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-telescope">
    <path d="M14.184 1.143v-.001l1.422 2.464a1.75 1.75 0 0 1-.757 2.451L3.104 11.713a1.75 1.75 0 0 1-2.275-.702l-.447-.775a1.75 1.75 0 0 1 .53-2.32L11.682.573a1.748 1.748 0 0 1 2.502.57Zm-4.709 9.32h-.001l2.644 3.863a.75.75 0 1 1-1.238.848l-1.881-2.75v2.826a.75.75 0 0 1-1.5 0v-2.826l-1.881 2.75a.75.75 0 1 1-1.238-.848l2.049-2.992a.746.746 0 0 1 .293-.253l1.809-.87a.749.749 0 0 1 .944.252ZM9.436 3.92h-.001l-4.97 3.39.942 1.63 5.42-2.61Zm3.091-2.108h.001l-1.85 1.26 1.505 2.605 2.016-.97a.247.247 0 0 0 .13-.151.247.247 0 0 0-.022-.199l-1.422-2.464a.253.253 0 0 0-.161-.119.254.254 0 0 0-.197.038ZM1.756 9.157a.25.25 0 0 0-.075.33l.447.775a.25.25 0 0 0 .325.1l1.598-.769-.83-1.436-1.465 1Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Explore
</span>      
</a>
  
</li>

        
          
<li data-item-id="" data-targets="nav-list.items" data-view-component="true" class="ActionListItem">
    
    
    <a data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;MARKETPLACE&quot;,&quot;label&quot;:null}" id="item-e97a7d40-4bf5-4abf-b53a-e94024bb0cf8" href="https://github.com/marketplace" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-gift">
    <path d="M2 2.75A2.75 2.75 0 0 1 4.75 0c.983 0 1.873.42 2.57 1.232.268.318.497.668.68 1.042.183-.375.411-.725.68-1.044C9.376.42 10.266 0 11.25 0a2.75 2.75 0 0 1 2.45 4h.55c.966 0 1.75.784 1.75 1.75v2c0 .698-.409 1.301-1 1.582v4.918A1.75 1.75 0 0 1 13.25 16H2.75A1.75 1.75 0 0 1 1 14.25V9.332C.409 9.05 0 8.448 0 7.75v-2C0 4.784.784 4 1.75 4h.55c-.192-.375-.3-.8-.3-1.25ZM7.25 9.5H2.5v4.75c0 .138.112.25.25.25h4.5Zm1.5 0v5h4.5a.25.25 0 0 0 .25-.25V9.5Zm0-4V8h5.5a.25.25 0 0 0 .25-.25v-2a.25.25 0 0 0-.25-.25Zm-7 0a.25.25 0 0 0-.25.25v2c0 .138.112.25.25.25h5.5V5.5h-5.5Zm3-4a1.25 1.25 0 0 0 0 2.5h2.309c-.233-.818-.542-1.401-.878-1.793-.43-.502-.915-.707-1.431-.707ZM8.941 4h2.309a1.25 1.25 0 0 0 0-2.5c-.516 0-1 .205-1.43.707-.337.392-.646.975-.879 1.793Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Marketplace
</span>      
</a>
  
</li>

</ul>  </nav-list>
</nav>

        <div data-view-component="true" class="my-3 d-flex flex-justify-center height-full">
          <span data-view-component="true">
  <svg style="box-sizing: content-box; color: var(--color-icon-primary);" width="16" height="16" viewBox="0 0 16 16" fill="none" aria-hidden="true" data-view-component="true" class="anim-rotate">
    <circle cx="8" cy="8" r="7" stroke="currentColor" stroke-opacity="0.25" stroke-width="2" vector-effect="non-scaling-stroke" fill="none"></circle>
    <path d="M15 8a7.002 7.002 0 00-7-7" stroke="currentColor" stroke-width="2" stroke-linecap="round" vector-effect="non-scaling-stroke"></path>
</svg>    <span class="sr-only">Loading</span>
</span>
</div>
</div>
      <div data-view-component="true" class="flex-1"></div>


      <div data-view-component="true" class="px-2">      <p class="color-fg-subtle text-small text-light">© 2025 GitHub, Inc.</p>

      <div data-view-component="true" class="d-flex flex-wrap text-small text-light">
          <a target="_blank" href="https://github.com/about" data-view-component="true" class="Link mr-2">About</a>
          <a target="_blank" href="https://github.blog/" data-view-component="true" class="Link mr-2">Blog</a>
          <a target="_blank" href="https://docs.github.com/site-policy/github-terms/github-terms-of-service" data-view-component="true" class="Link mr-2">Terms</a>
          <a target="_blank" href="https://docs.github.com/site-policy/privacy-policies/github-privacy-statement" data-view-component="true" class="Link mr-2">Privacy</a>
          <a target="_blank" href="https://github.com/security" data-view-component="true" class="Link mr-2">Security</a>
          <a target="_blank" href="https://www.githubstatus.com/" data-view-component="true" class="Link mr-3">Status</a>

</div></div>
</div>
      </scrollable-region>
      
</dialog></dialog-helper>

</include-fragment></deferred-side-panel>
        </div>

        <a class="AppHeader-logo ml-1 " href="https://github.com/" data-hotkey="g d" aria-label="Homepage " data-turbo="false" data-analytics-event="{&quot;category&quot;:&quot;Header&quot;,&quot;action&quot;:&quot;go to dashboard&quot;,&quot;label&quot;:&quot;icon:logo&quot;}">
          <svg height="32" aria-hidden="true" viewBox="0 0 24 24" version="1.1" width="32" data-view-component="true" class="octicon octicon-mark-github v-align-middle">
    <path d="M12 1C5.9225 1 1 5.9225 1 12C1 16.8675 4.14875 20.9787 8.52125 22.4362C9.07125 22.5325 9.2775 22.2025 9.2775 21.9137C9.2775 21.6525 9.26375 20.7862 9.26375 19.865C6.5 20.3737 5.785 19.1912 5.565 18.5725C5.44125 18.2562 4.905 17.28 4.4375 17.0187C4.0525 16.8125 3.5025 16.3037 4.42375 16.29C5.29 16.2762 5.90875 17.0875 6.115 17.4175C7.105 19.0812 8.68625 18.6137 9.31875 18.325C9.415 17.61 9.70375 17.1287 10.02 16.8537C7.5725 16.5787 5.015 15.63 5.015 11.4225C5.015 10.2262 5.44125 9.23625 6.1425 8.46625C6.0325 8.19125 5.6475 7.06375 6.2525 5.55125C6.2525 5.55125 7.17375 5.2625 9.2775 6.67875C10.1575 6.43125 11.0925 6.3075 12.0275 6.3075C12.9625 6.3075 13.8975 6.43125 14.7775 6.67875C16.8813 5.24875 17.8025 5.55125 17.8025 5.55125C18.4075 7.06375 18.0225 8.19125 17.9125 8.46625C18.6138 9.23625 19.04 10.2125 19.04 11.4225C19.04 15.6437 16.4688 16.5787 14.0213 16.8537C14.42 17.1975 14.7638 17.8575 14.7638 18.8887C14.7638 20.36 14.75 21.5425 14.75 21.9137C14.75 22.2025 14.9563 22.5462 15.5063 22.4362C19.8513 20.9787 23 16.8537 23 12C23 5.9225 18.0775 1 12 1Z"></path>
</svg>
        </a>

          <context-region-observer class="AppHeader-context " data-catalyst="">
    <div class="AppHeader-context-compact" data-target="context-region-observer.compactContainer">
        <button aria-expanded="false" aria-haspopup="dialog" aria-label="Page context: AnimeshSatyapragyanPatra / ExamSystem" data-target="context-region-observer.compactContextRegion" data-show-dialog-id="context-region-dialog" id="dialog-show-context-region-dialog" type="button" data-view-component="true" class="AppHeader-context-compact-trigger Truncate Button--secondary Button--medium Button box-shadow-none">  <span class="Button-content">
    <span class="Button-label"><span class="AppHeader-context-compact-lead">
            <span class="AppHeader-context-compact-parentItem">AnimeshSatyapragyanPatra</span>

            <span class="no-wrap">&nbsp;/</span>

        </span>

        <strong class="AppHeader-context-compact-mainItem d-flex flex-items-center Truncate">
  <span class="Truncate-text ">ExamSystem</span>

</strong></span>
  </span>
</button>

<dialog-helper>
  <dialog id="context-region-dialog" aria-modal="true" aria-labelledby="context-region-dialog-title" aria-describedby="context-region-dialog-description" data-view-component="true" class="Overlay Overlay-whenNarrow Overlay--size-medium Overlay--motion-scaleFade Overlay--disableScroll">
    <div data-view-component="true" class="Overlay-header">
  <div class="Overlay-headerContentWrap">
    <div class="Overlay-titleWrap">
      <h1 class="Overlay-title " id="context-region-dialog-title">
        Navigate back to
      </h1>
        
    </div>
    <div class="Overlay-actionWrap">
      <button data-close-dialog-id="context-region-dialog" aria-label="Close" type="button" data-view-component="true" class="close-button Overlay-closeButton"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg></button>
    </div>
  </div>
  
</div>
      <scrollable-region data-labelled-by="context-region-dialog-title" data-catalyst="" style="overflow: auto;">
        <div data-view-component="true" class="Overlay-body">      <ul role="list" class="list-style-none">
    <li>
      <a data-analytics-event="{&quot;category&quot;:&quot;SiteHeaderComponent&quot;,&quot;action&quot;:&quot;context_region_crumb&quot;,&quot;label&quot;:&quot;AnimeshSatyapragyanPatra&quot;,&quot;screen_size&quot;:&quot;compact&quot;}" href="https://github.com/AnimeshSatyapragyanPatra" data-view-component="true" class="Link--primary Truncate d-flex flex-items-center py-1">
        <span class="AppHeader-context-item-label Truncate-text ">
            <svg aria-hidden="true" height="12" viewBox="0 0 16 16" version="1.1" width="12" data-view-component="true" class="octicon octicon-person mr-1">
    <path d="M10.561 8.073a6.005 6.005 0 0 1 3.432 5.142.75.75 0 1 1-1.498.07 4.5 4.5 0 0 0-8.99 0 .75.75 0 0 1-1.498-.07 6.004 6.004 0 0 1 3.431-5.142 3.999 3.999 0 1 1 5.123 0ZM10.5 5a2.5 2.5 0 1 0-5 0 2.5 2.5 0 0 0 5 0Z"></path>
</svg>

          AnimeshSatyapragyanPatra
        </span>

</a>
    </li>
    <li>
      <a data-analytics-event="{&quot;category&quot;:&quot;SiteHeaderComponent&quot;,&quot;action&quot;:&quot;context_region_crumb&quot;,&quot;label&quot;:&quot;ExamSystem&quot;,&quot;screen_size&quot;:&quot;compact&quot;}" href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem" data-view-component="true" class="Link--primary Truncate d-flex flex-items-center py-1">
        <span class="AppHeader-context-item-label Truncate-text ">
            <svg aria-hidden="true" height="12" viewBox="0 0 16 16" version="1.1" width="12" data-view-component="true" class="octicon octicon-repo mr-1">
    <path d="M2 2.5A2.5 2.5 0 0 1 4.5 0h8.75a.75.75 0 0 1 .75.75v12.5a.75.75 0 0 1-.75.75h-2.5a.75.75 0 0 1 0-1.5h1.75v-2h-8a1 1 0 0 0-.714 1.7.75.75 0 1 1-1.072 1.05A2.495 2.495 0 0 1 2 11.5Zm10.5-1h-8a1 1 0 0 0-1 1v6.708A2.486 2.486 0 0 1 4.5 9h8ZM5 12.25a.25.25 0 0 1 .25-.25h3.5a.25.25 0 0 1 .25.25v3.25a.25.25 0 0 1-.4.2l-1.45-1.087a.249.249 0 0 0-.3 0L5.4 15.7a.25.25 0 0 1-.4-.2Z"></path>
</svg>

          ExamSystem
        </span>

</a>
    </li>
</ul>

</div>
      </scrollable-region>
      
</dialog></dialog-helper>

    </div>

  <div class="AppHeader-context-full">
    <nav role="navigation" aria-label="Page context">
        
<context-region role="list" data-action="context-region-changed:context-region-observer#crumbsChanged" data-catalyst="" data-max-items="5">
    <context-region-crumb data-targets="context-region.crumbs" data-label="AnimeshSatyapragyanPatra" data-href="/AnimeshSatyapragyanPatra" data-pre-rendered="" role="listitem" data-catalyst="">
      <a data-analytics-event="{&quot;category&quot;:&quot;SiteHeaderComponent&quot;,&quot;action&quot;:&quot;context_region_crumb&quot;,&quot;label&quot;:&quot;AnimeshSatyapragyanPatra&quot;,&quot;screen_size&quot;:&quot;full&quot;}" data-hovercard-type="user" data-hovercard-url="/users/AnimeshSatyapragyanPatra/hovercard" data-octo-click="hovercard-link-click" data-octo-dimensions="link_type:self" data-target="context-region-crumb.link" href="https://github.com/AnimeshSatyapragyanPatra" data-view-component="true" class="AppHeader-context-item">
        <span data-target="context-region-crumb.labelElement" class="AppHeader-context-item-label  ">AnimeshSatyapragyanPatra</span>

</a>
        <context-region-divider data-target="context-region-crumb.dividerElement" data-pre-rendered="" data-catalyst="">
  <span class="AppHeader-context-item-separator">
    <span class="sr-only">/</span>
    <svg width="16" height="16" viewBox="0 0 16 16" xmlns="http://www.w3.org/2000/svg" aria-hidden="true">
      <path d="M10.956 1.27994L6.06418 14.7201L5 14.7201L9.89181 1.27994L10.956 1.27994Z" fill="currentcolor"></path>
    </svg>
  </span>
</context-region-divider>

    </context-region-crumb>
    <context-region-crumb data-targets="context-region.crumbs" data-label="ExamSystem" data-href="/AnimeshSatyapragyanPatra/ExamSystem" data-pre-rendered="" role="listitem" data-catalyst="">
      <a data-analytics-event="{&quot;category&quot;:&quot;SiteHeaderComponent&quot;,&quot;action&quot;:&quot;context_region_crumb&quot;,&quot;label&quot;:&quot;ExamSystem&quot;,&quot;screen_size&quot;:&quot;full&quot;}" data-target="context-region-crumb.link" href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem" data-view-component="true" class="AppHeader-context-item">
        <span data-target="context-region-crumb.labelElement" class="AppHeader-context-item-label  ">ExamSystem</span>

</a>
        <context-region-divider data-target="context-region-crumb.dividerElement" data-pre-rendered="" data-catalyst="">
  <span class="AppHeader-context-item-separator">
    <span class="sr-only">/</span>
    <svg width="16" height="16" viewBox="0 0 16 16" xmlns="http://www.w3.org/2000/svg" aria-hidden="true">
      <path d="M10.956 1.27994L6.06418 14.7201L5 14.7201L9.89181 1.27994L10.956 1.27994Z" fill="currentcolor"></path>
    </svg>
  </span>
</context-region-divider>

    </context-region-crumb>
</context-region>

    </nav>
  </div>
</context-region-observer>

      </div>
      <div class="AppHeader-globalBar-end">
          <div class="AppHeader-search">
              


<qbsearch-input class="search-input" data-scope="repo:AnimeshSatyapragyanPatra/ExamSystem" data-custom-scopes-path="/search/custom_scopes" data-delete-custom-scopes-csrf="qYq8AUk8xNeXrWvnZ_EYxe4YTxRIpjjwaj8IupD-cIf6b_nE6VpaXVpJZcq8L4e8kRuopPuYSdlXoDLKGuGC6Q" data-max-custom-scopes="10" data-header-redesign-enabled="true" data-initial-value="" data-blackbird-suggestions-path="/search/suggestions" data-jump-to-suggestions-path="/_graphql/GetSuggestedNavigationDestinations" data-current-repository="AnimeshSatyapragyanPatra/ExamSystem" data-current-org="" data-current-owner="AnimeshSatyapragyanPatra" data-logged-in="true" data-copilot-chat-enabled="false" data-nl-search-enabled="false" data-catalyst="">
  <div class="search-input-container search-with-dialog position-relative d-flex flex-row flex-items-center height-auto color-bg-transparent border-0 color-fg-subtle mx-0" data-action="click:qbsearch-input#searchInputContainerClicked">
      
            <button type="button" data-action="click:qbsearch-input#handleExpand" class="AppHeader-button AppHeader-search-whenNarrow" aria-label="Search or jump to…" aria-expanded="false" aria-haspopup="dialog">
            <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-search">
    <path d="M10.68 11.74a6 6 0 0 1-7.922-8.982 6 6 0 0 1 8.982 7.922l3.04 3.04a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215ZM11.5 7a4.499 4.499 0 1 0-8.997 0A4.499 4.499 0 0 0 11.5 7Z"></path>
</svg>
          </button>


<div class="AppHeader-search-whenRegular">
  <div class="AppHeader-search-wrap AppHeader-search-wrap--hasTrailing">
    <div class="AppHeader-search-control AppHeader-search-control-overflow">
      <label for="AppHeader-searchInput" aria-label="Search or jump to…" class="AppHeader-search-visual--leading">
        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-search">
    <path d="M10.68 11.74a6 6 0 0 1-7.922-8.982 6 6 0 0 1 8.982 7.922l3.04 3.04a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215ZM11.5 7a4.499 4.499 0 1 0-8.997 0A4.499 4.499 0 0 0 11.5 7Z"></path>
</svg>
      </label>

                <button type="button" data-target="qbsearch-input.inputButton" data-action="click:qbsearch-input#handleExpand" class="AppHeader-searchButton form-control input-contrast text-left color-fg-subtle no-wrap placeholder" data-hotkey="s,/" data-analytics-event="{&quot;location&quot;:&quot;navbar&quot;,&quot;action&quot;:&quot;searchbar&quot;,&quot;context&quot;:&quot;global&quot;,&quot;tag&quot;:&quot;input&quot;,&quot;label&quot;:&quot;searchbar_input_global_navbar&quot;}" aria-describedby="search-error-message-flash" fdprocessedid="1uyjmh">
            <div class="overflow-hidden">
              <span id="qb-input-query" data-target="qbsearch-input.inputButtonText">
                  Type <kbd class="AppHeader-search-kbd">/</kbd> to search
              </span>
            </div>
          </button>

    </div>


  </div>
</div>

    <input type="hidden" name="type" class="js-site-search-type-field">

    
<div class="Overlay--hidden " data-modal-dialog-overlay="">
  <modal-dialog data-action="close:qbsearch-input#handleClose cancel:qbsearch-input#handleClose" data-target="qbsearch-input.searchSuggestionsDialog" role="dialog" id="search-suggestions-dialog" aria-modal="true" aria-labelledby="search-suggestions-dialog-header" data-view-component="true" class="Overlay Overlay--width-medium Overlay--height-auto">
      <h1 id="search-suggestions-dialog-header" class="sr-only">Search code, repositories, users, issues, pull requests...</h1>
    <div class="Overlay-body Overlay-body--paddingNone">
      
          <div data-view-component="true">        <div class="search-suggestions position-absolute width-full color-shadow-large border color-fg-default color-bg-default overflow-hidden d-flex flex-column query-builder-container" style="border-radius: 12px;" data-target="qbsearch-input.queryBuilderContainer" hidden="">
          <!-- '"` --><!-- </textarea></xmp> --><form id="query-builder-test-form" action="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/blob/main/project.c" accept-charset="UTF-8" method="get">
  <query-builder data-target="qbsearch-input.queryBuilder" id="query-builder-query-builder-test" data-filter-key=":" data-view-component="true" class="QueryBuilder search-query-builder" data-min-width="300" data-catalyst="">
    <div class="FormControl FormControl--fullWidth">
      <label id="query-builder-test-label" for="query-builder-test" class="FormControl-label sr-only">
        Search
      </label>
      <div class="QueryBuilder-StyledInput width-fit " data-target="query-builder.styledInput">
          <span id="query-builder-test-leadingvisual-wrap" class="FormControl-input-leadingVisualWrap QueryBuilder-leadingVisualWrap">
            <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-search FormControl-input-leadingVisual">
    <path d="M10.68 11.74a6 6 0 0 1-7.922-8.982 6 6 0 0 1 8.982 7.922l3.04 3.04a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215ZM11.5 7a4.499 4.499 0 1 0-8.997 0A4.499 4.499 0 0 0 11.5 7Z"></path>
</svg>
          </span>
        <div data-target="query-builder.styledInputContainer" class="QueryBuilder-StyledInputContainer">
          <div aria-hidden="true" class="QueryBuilder-StyledInputContent" data-target="query-builder.styledInputContent"></div>
          <div class="QueryBuilder-InputWrapper">
            <div aria-hidden="true" class="QueryBuilder-Sizer" data-target="query-builder.sizer"><span></span></div>
            <input id="query-builder-test" name="query-builder-test" value="" autocomplete="off" type="text" role="combobox" spellcheck="false" aria-expanded="false" aria-describedby="validation-f01110e8-ad16-44f5-9c90-c2b4ff1086d7" data-target="query-builder.input" data-action="
          input:query-builder#inputChange
          blur:query-builder#inputBlur
          keydown:query-builder#inputKeydown
          focus:query-builder#inputFocus
        " data-view-component="true" class="FormControl-input QueryBuilder-Input FormControl-medium" aria-controls="query-builder-test-results" aria-autocomplete="list" aria-haspopup="listbox" style="width: 300px;">
          </div>
        </div>
          <span class="sr-only" id="query-builder-test-clear">Clear</span>
          <button role="button" id="query-builder-test-clear-button" aria-labelledby="query-builder-test-clear query-builder-test-label" data-target="query-builder.clearButton" data-action="
                click:query-builder#clear
                focus:query-builder#clearButtonFocus
                blur:query-builder#clearButtonBlur
              " variant="small" hidden="" type="button" data-view-component="true" class="Button Button--iconOnly Button--invisible Button--medium mr-1 px-2 py-0 d-flex flex-items-center rounded-1 color-fg-muted">  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x-circle-fill Button-visual">
    <path d="M2.343 13.657A8 8 0 1 1 13.658 2.343 8 8 0 0 1 2.343 13.657ZM6.03 4.97a.751.751 0 0 0-1.042.018.751.751 0 0 0-.018 1.042L6.94 8 4.97 9.97a.749.749 0 0 0 .326 1.275.749.749 0 0 0 .734-.215L8 9.06l1.97 1.97a.749.749 0 0 0 1.275-.326.749.749 0 0 0-.215-.734L9.06 8l1.97-1.97a.749.749 0 0 0-.326-1.275.749.749 0 0 0-.734.215L8 6.94Z"></path>
</svg>
</button>

      </div>
      <template id="search-icon"></template>

<template id="code-icon"></template>

<template id="file-code-icon"></template>

<template id="history-icon"></template>

<template id="repo-icon"></template>

<template id="bookmark-icon"></template>

<template id="plus-circle-icon"></template>

<template id="circle-icon"></template>

<template id="trash-icon"></template>

<template id="team-icon"></template>

<template id="project-icon"></template>

<template id="pencil-icon"></template>

<template id="copilot-icon"></template>

<template id="copilot-error-icon"></template>

<template id="workflow-icon"></template>

<template id="book-icon"></template>

<template id="code-review-icon"></template>

<template id="codespaces-icon"></template>

<template id="comment-icon"></template>

<template id="comment-discussion-icon"></template>

<template id="organization-icon"></template>

<template id="rocket-icon"></template>

<template id="shield-check-icon"></template>

<template id="heart-icon"></template>

<template id="server-icon"></template>

<template id="globe-icon"></template>

<template id="issue-opened-icon"></template>

<template id="device-mobile-icon"></template>

<template id="package-icon"></template>

<template id="credit-card-icon"></template>

<template id="play-icon"></template>

<template id="gift-icon"></template>

<template id="code-square-icon"></template>

<template id="device-desktop-icon"></template>

        <div class="position-relative">
                <ul role="listbox" class="ActionListWrap QueryBuilder-ListWrap" aria-label="Suggestions" data-action="
                    combobox-commit:query-builder#comboboxCommit
                    mousedown:query-builder#resultsMousedown
                  " data-target="query-builder.resultsList" data-persist-list="false" id="query-builder-test-results"></ul>
        </div>
      <div class="FormControl-inlineValidation" id="validation-f01110e8-ad16-44f5-9c90-c2b4ff1086d7" hidden="hidden">
        <span class="FormControl-inlineValidation--visual">
          <svg aria-hidden="true" height="12" viewBox="0 0 12 12" version="1.1" width="12" data-view-component="true" class="octicon octicon-alert-fill">
    <path d="M4.855.708c.5-.896 1.79-.896 2.29 0l4.675 8.351a1.312 1.312 0 0 1-1.146 1.954H1.33A1.313 1.313 0 0 1 .183 9.058ZM7 7V3H5v4Zm-1 3a1 1 0 1 0 0-2 1 1 0 0 0 0 2Z"></path>
</svg>
        </span>
        <span></span>
</div>    </div>
    <div data-target="query-builder.screenReaderFeedback" aria-live="polite" aria-atomic="true" class="sr-only">0 suggestions.</div>
</query-builder></form>
          <div class="d-flex flex-row color-fg-muted px-3 text-small color-bg-default search-feedback-prompt">
            <a target="_blank" href="https://docs.github.com/search-github/github-code-search/understanding-github-code-search-syntax" data-view-component="true" class="Link color-fg-accent text-normal ml-2">Search syntax tips</a>            <div class="d-flex flex-1"></div>
              <button data-action="click:qbsearch-input#showFeedbackDialog" type="button" data-view-component="true" class="Button--link Button--medium Button color-fg-accent text-normal ml-2">  <span class="Button-content">
    <span class="Button-label">Give feedback</span>
  </span>
</button>
          </div>
        </div>
</div>

    </div>
</modal-dialog></div>
  </div>
  <div data-action="click:qbsearch-input#retract" class="dark-backdrop position-fixed" hidden="" data-target="qbsearch-input.darkBackdrop"></div>
  <div class="color-fg-default">
    
<dialog-helper>
  <dialog data-target="qbsearch-input.feedbackDialog" data-action="close:qbsearch-input#handleDialogClose cancel:qbsearch-input#handleDialogClose" id="feedback-dialog" aria-modal="true" aria-labelledby="feedback-dialog-title" aria-describedby="feedback-dialog-description" data-view-component="true" class="Overlay Overlay-whenNarrow Overlay--size-medium Overlay--motion-scaleFade Overlay--disableScroll">
    <div data-view-component="true" class="Overlay-header">
  <div class="Overlay-headerContentWrap">
    <div class="Overlay-titleWrap">
      <h1 class="Overlay-title " id="feedback-dialog-title">
        Provide feedback
      </h1>
        
    </div>
    <div class="Overlay-actionWrap">
      <button data-close-dialog-id="feedback-dialog" aria-label="Close" type="button" data-view-component="true" class="close-button Overlay-closeButton"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg></button>
    </div>
  </div>
  
</div>
      <scrollable-region data-labelled-by="feedback-dialog-title" data-catalyst="" style="overflow: auto;">
        <div data-view-component="true" class="Overlay-body">        <!-- '"` --><!-- </textarea></xmp> --><form id="code-search-feedback-form" data-turbo="false" action="https://github.com/search/feedback" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="Yx0n-krDWDrdipqVRL4apWl58he8peDIRubro00OyihEkSuLNoqufrtkmmehQOJkU2owqNwYWBEsCCcpO3mZkQ">
          <p>We read every piece of feedback, and take your input very seriously.</p>
          <textarea name="feedback" class="form-control width-full mb-2" style="height: 120px" id="feedback"></textarea>
          <input name="include_email" id="include_email" aria-label="Include my email address so I can be contacted" class="form-control mr-2" type="checkbox">
          <label for="include_email" style="font-weight: normal">Include my email address so I can be contacted</label>
</form></div>
      </scrollable-region>
      <div data-view-component="true" class="Overlay-footer Overlay-footer--alignEnd">          <button data-close-dialog-id="feedback-dialog" type="button" data-view-component="true" class="btn">    Cancel
</button>
          <button form="code-search-feedback-form" data-action="click:qbsearch-input#submitFeedback" type="submit" data-view-component="true" class="btn-primary btn">    Submit feedback
</button>
</div>
</dialog></dialog-helper>

    <custom-scopes data-target="qbsearch-input.customScopesManager" data-catalyst="">
    
<dialog-helper>
  <dialog data-target="custom-scopes.customScopesModalDialog" data-action="close:qbsearch-input#handleDialogClose cancel:qbsearch-input#handleDialogClose" id="custom-scopes-dialog" aria-modal="true" aria-labelledby="custom-scopes-dialog-title" aria-describedby="custom-scopes-dialog-description" data-view-component="true" class="Overlay Overlay-whenNarrow Overlay--size-medium Overlay--motion-scaleFade Overlay--disableScroll">
    <div data-view-component="true" class="Overlay-header Overlay-header--divided">
  <div class="Overlay-headerContentWrap">
    <div class="Overlay-titleWrap">
      <h1 class="Overlay-title " id="custom-scopes-dialog-title">
        Saved searches
      </h1>
        <h2 id="custom-scopes-dialog-description" class="Overlay-description">Use saved searches to filter your results more quickly</h2>
    </div>
    <div class="Overlay-actionWrap">
      <button data-close-dialog-id="custom-scopes-dialog" aria-label="Close" type="button" data-view-component="true" class="close-button Overlay-closeButton"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg></button>
    </div>
  </div>
  
</div>
      <scrollable-region data-labelled-by="custom-scopes-dialog-title" data-catalyst="" style="overflow: auto;">
        <div data-view-component="true" class="Overlay-body">        <div data-target="custom-scopes.customScopesModalDialogFlash"></div>

        <div hidden="" class="create-custom-scope-form" data-target="custom-scopes.createCustomScopeForm">
        <!-- '"` --><!-- </textarea></xmp> --><form id="custom-scopes-dialog-form" data-turbo="false" action="https://github.com/search/custom_scopes" accept-charset="UTF-8" method="post"><input type="hidden" name="authenticity_token" value="enk7UJSnUJ0XEJNdCkc1S1KUaDOpa6D7Ds2hdkJYEcjjnHLEuZe8KkI5qbFYr64HGTMxBhHychJV11qm_an74g">
          <div data-target="custom-scopes.customScopesModalDialogFlash"></div>

          <input type="hidden" id="custom_scope_id" name="custom_scope_id" data-target="custom-scopes.customScopesIdField">

          <div class="form-group">
            <label for="custom_scope_name">Name</label>
            <auto-check src="/search/custom_scopes/check_name" required="">
              <input type="text" name="custom_scope_name" id="custom_scope_name" data-target="custom-scopes.customScopesNameField" class="form-control" autocomplete="off" placeholder="github-ruby" required="" maxlength="50" spellcheck="false">
              <input type="hidden" value="wwdADQhFgUiUPPVlySg3dW0woKsEZKo-MkpR7fNR3w7aNdzkp34r6ctPooIyX094ChOTbwAIyHxOq1648irhkw" data-csrf="true">
            </auto-check>
          </div>

          <div class="form-group">
            <label for="custom_scope_query">Query</label>
            <input type="text" name="custom_scope_query" id="custom_scope_query" data-target="custom-scopes.customScopesQueryField" class="form-control" autocomplete="off" placeholder="(repo:mona/a OR repo:mona/b) AND lang:python" required="" maxlength="500">
          </div>

          <p class="text-small color-fg-muted">
            To see all available qualifiers, see our <a class="Link--inTextBlock" href="https://docs.github.com/search-github/github-code-search/understanding-github-code-search-syntax">documentation</a>.
          </p>
</form>        </div>

        <div data-target="custom-scopes.manageCustomScopesForm">
          <div data-target="custom-scopes.list"></div>
        </div>

</div>
      </scrollable-region>
      <div data-view-component="true" class="Overlay-footer Overlay-footer--alignEnd Overlay-footer--divided">          <button data-action="click:custom-scopes#customScopesCancel" type="button" data-view-component="true" class="btn">    Cancel
</button>
          <button form="custom-scopes-dialog-form" data-action="click:custom-scopes#customScopesSubmit" data-target="custom-scopes.customScopesSubmitButton" type="submit" data-view-component="true" class="btn-primary btn">    Create saved search
</button>
</div>
</dialog></dialog-helper>
    </custom-scopes>
  </div>
</qbsearch-input>  <input type="hidden" value="wcQ6jDiYuxfBnU41NyrssOdcHrYjsSv91MEIl2P9Gdysq-_ej_Y8OKTIrjKnoV8BhJFp50GvPqnT_eUJ0FnEJQ" data-csrf="true" class="js-data-jump-to-suggestions-path-csrf">


          </div>

        
          <div class="AppHeader-CopilotChat hide-sm hide-md">
  <react-partial-anchor data-catalyst="">
      <a href="https://github.com/copilot" data-target="react-partial-anchor.anchor" id="copilot-chat-header-button" aria-expanded="false" aria-controls="copilot-chat-panel" aria-labelledby="tooltip-95938804-9f15-40b3-90c1-98cc62308d35" data-view-component="true" class="Button Button--iconOnly Button--secondary Button--medium AppHeader-button AppHeader-buttonLeft">  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-copilot Button-visual">
    <path d="M7.998 15.035c-4.562 0-7.873-2.914-7.998-3.749V9.338c.085-.628.677-1.686 1.588-2.065.013-.07.024-.143.036-.218.029-.183.06-.384.126-.612-.201-.508-.254-1.084-.254-1.656 0-.87.128-1.769.693-2.484.579-.733 1.494-1.124 2.724-1.261 1.206-.134 2.262.034 2.944.765.05.053.096.108.139.165.044-.057.094-.112.143-.165.682-.731 1.738-.899 2.944-.765 1.23.137 2.145.528 2.724 1.261.566.715.693 1.614.693 2.484 0 .572-.053 1.148-.254 1.656.066.228.098.429.126.612.012.076.024.148.037.218.924.385 1.522 1.471 1.591 2.095v1.872c0 .766-3.351 3.795-8.002 3.795Zm0-1.485c2.28 0 4.584-1.11 5.002-1.433V7.862l-.023-.116c-.49.21-1.075.291-1.727.291-1.146 0-2.059-.327-2.71-.991A3.222 3.222 0 0 1 8 6.303a3.24 3.24 0 0 1-.544.743c-.65.664-1.563.991-2.71.991-.652 0-1.236-.081-1.727-.291l-.023.116v4.255c.419.323 2.722 1.433 5.002 1.433ZM6.762 2.83c-.193-.206-.637-.413-1.682-.297-1.019.113-1.479.404-1.713.7-.247.312-.369.789-.369 1.554 0 .793.129 1.171.308 1.371.162.181.519.379 1.442.379.853 0 1.339-.235 1.638-.54.315-.322.527-.827.617-1.553.117-.935-.037-1.395-.241-1.614Zm4.155-.297c-1.044-.116-1.488.091-1.681.297-.204.219-.359.679-.242 1.614.091.726.303 1.231.618 1.553.299.305.784.54 1.638.54.922 0 1.28-.198 1.442-.379.179-.2.308-.578.308-1.371 0-.765-.123-1.242-.37-1.554-.233-.296-.693-.587-1.713-.7Z"></path><path d="M6.25 9.037a.75.75 0 0 1 .75.75v1.501a.75.75 0 0 1-1.5 0V9.787a.75.75 0 0 1 .75-.75Zm4.25.75v1.501a.75.75 0 0 1-1.5 0V9.787a.75.75 0 0 1 1.5 0Z"></path>
</svg>
</a><tool-tip id="tooltip-95938804-9f15-40b3-90c1-98cc62308d35" for="copilot-chat-header-button" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="sr-only position-absolute" aria-hidden="true" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        --tooltip-top: var(--tool-tip-position-top, 0);
        --tooltip-left: var(--tool-tip-position-left, 0);
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--tooltip-fgColor, var(--fgColor-onEmphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--tooltip-bgColor, var(--bgColor-emphasis)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tooltip-top) auto auto var(--tooltip-left) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host(:is(.tooltip-n, .tooltip-nw, .tooltip-ne)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) - var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(:is(.tooltip-s, .tooltip-sw, .tooltip-se)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) + var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(.tooltip-w) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) - var(--overlay-offset, 0.25rem));
      }

      :host(.tooltip-e) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) + var(--overlay-offset, 0.25rem));
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: var(--overlay-offset, 0.25rem);
        content: "";
      }

      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }

      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open) {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      @media (forced-colors: active) {
        :host {
          outline: solid 1px transparent;
        }

        :host:before {
          display: none;
        }
      }
    </style><slot></slot></template>Chat with Copilot</tool-tip>

    
  
      <script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_tanstack_query-core_build_modern_queryObserver_js-node_modules_tanstack_-defd52-4fadb0b8d069.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_react-relay_index_js-9b3ae543a201.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_remark-gfm_lib_index_js-node_modules_remark-parse_lib_index_js-node_modu-44d0fc-eab34ca54a6e.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_hastscript_lib_index_js-node_modules_lowlight_lib_all_js-node_modules_re-713cc1-92f7ef60ce8a.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_github_mini-throttle_dist_decorators_js-node_modules_accname_dist_access-690142-ee71f0becd82.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_github_combobox-nav_dist_index_js-node_modules_github_hotkey_dist_index_-9adaba-089d939a2d17.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/ui_packages_item-picker_components_RepositoryPicker_tsx-8698dae1910d.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/ui_packages_copilot-chat_utils_copilot-chat-helpers_ts-f9ff41f1a3c0.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/ui_packages_copilot-markdown_MarkdownRenderer_tsx-0e74c45a3998.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/ui_packages_copilot-chat_utils_CopilotChatContext_tsx-a5918640a1bc.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/ui_packages_copilot-chat_components_CopilotIconAnimation_tsx-ui_packages_copilot-chat_compone-8be2e4-c501512d8f6f.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/copilot-chat-de63cd16dbb0.js.download"></script>
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./project_files/primer-react.34abd6a35dee74c6730e.module.css">
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./project_files/copilot-chat.2d6438ee653f16b4981b.module.css">
      <link crossorigin="anonymous" media="all" rel="stylesheet" href="./project_files/copilot-markdown-rendering-f6845e8f5d6b.css">
      <script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/primer-react-cf8d019de009.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/react-core-2e45a8c586a0.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/react-lib-248ff5a58e4e.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/octicons-react-9fd6ca6872cc.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_emotion_is-prop-valid_dist_emotion-is-prop-valid_esm_js-node_modules_emo-b1c483-9589ee80fc4f.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_github_catalyst_lib_index_js-node_modules_primer_live-region-element_dis-b2aea6-980db0e5dd58.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_dompurify_dist_purify_es_mjs-d13e3af1f7a5.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_tanstack_query-core_build_modern_queryObserver_js-node_modules_tanstack_-defd52-4fadb0b8d069.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_react-relay_index_js-9b3ae543a201.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_remark-gfm_lib_index_js-node_modules_remark-parse_lib_index_js-node_modu-44d0fc-eab34ca54a6e.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_hastscript_lib_index_js-node_modules_lowlight_lib_all_js-node_modules_re-713cc1-92f7ef60ce8a.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_github_mini-throttle_dist_decorators_js-node_modules_accname_dist_access-690142-ee71f0becd82.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_focus-visible_dist_focus-visible_js-node_modules_github_hydro-analytics--e21ffd-34e19bb44764.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/vendors-node_modules_github_combobox-nav_dist_index_js-node_modules_github_hotkey_dist_index_-9adaba-089d939a2d17.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/ui_packages_paths_index_ts-08fcbb3f0e88.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/ui_packages_ui-commands_ui-commands_ts-6df6756b79a5.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/ui_packages_item-picker_components_RepositoryPicker_tsx-8698dae1910d.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/ui_packages_copilot-chat_utils_copilot-chat-helpers_ts-f9ff41f1a3c0.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/ui_packages_copilot-markdown_MarkdownRenderer_tsx-0e74c45a3998.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/ui_packages_copilot-chat_utils_CopilotChatContext_tsx-a5918640a1bc.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/ui_packages_copilot-chat_components_CopilotIconAnimation_tsx-ui_packages_copilot-chat_compone-8be2e4-c501512d8f6f.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/copilot-chat-de63cd16dbb0.js.download"></script>
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./project_files/primer-react.34abd6a35dee74c6730e.module.css">
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./project_files/copilot-chat.2d6438ee653f16b4981b.module.css">

<react-partial partial-name="copilot-chat" data-ssr="false" data-attempted-ssr="false" data-catalyst="" class="loaded">
  
  <script type="application/json" data-target="react-partial.embeddedData">{"props":{"currentTopic":{"id":984055845,"name":"ExamSystem","ownerLogin":"AnimeshSatyapragyanPatra","ownerType":"User","readmePath":"README.md","description":"ExamSphere is a C-based terminal digital exam system using a client-server model. It ensures secure, instructor-controlled assessments with anti-cheating mechanisms and role-based access. Students and instructors interact via a structured workflow.","commitOID":"8ca40bcbdfbe45a48440c6c24a0a2d01ee8f87d1","ref":"refs/heads/main","refInfo":{"name":"main","type":"branch"},"visibility":"public","languages":[{"name":"C","percent":100.0}],"customInstructions":[]},"findFileWorkerPath":"/assets-cdn/worker/find-file-worker-263cab1760dd.js","renderPopover":false,"renderBetaLabel":false,"chatIsVisible":true,"chatVisibleSettingPath":"/users/sahelidgp/copilot_chat/settings/copilot_chat_visibility","ssoOrganizations":[],"apiVersion":null,"agentsPath":"/github-copilot/chat/agents","apiURL":"https://api.individual.githubcopilot.com","currentUserLogin":"sahelidgp","customInstructions":null,"renderKnowledgeBases":false,"optedInToPreviewFeatures":false,"optedInToUserFeedback":false,"renderAttachKnowledgeBaseHerePopover":true,"renderKnowledgeBaseAttachedToChatPopover":true,"personalInstructions":null,"reviewLab":false,"realIp":null,"scrollToTop":false,"hasCEorCBAccess":false,"licenseType":"unlicensed","plan":null,"quotas":null,"icebreakers":[{"type":"functional","data":[{"id":"open-issues-in-react","message":"Get a list of the latest open issues in the facebook/react repository, including all their labels.","titleHtml":"Open issues in \u003cspan class=\"fgColor-muted\"\u003efacebook/react\u003c/span\u003e","icon":"issue-opened","color":"var(--display-green-fgColor)"},{"id":"pulls-in-vscode","message":"Retrieve pull requests in microsoft/vscode.","titleHtml":"Pull requests in \u003cspan class=\"fgColor-muted\"\u003emicrosoft/vscode\u003c/span\u003e","icon":"git-pull-request","color":"var(--display-green-fgColor)"},{"id":"commits-in-linux","message":"Show recent commits in torvalds/linux.","titleHtml":"Recent commits in \u003cspan class=\"fgColor-muted\"\u003etorvalds/linux\u003c/span\u003e","icon":"git-commit","color":"var(--display-blue-fgColor)"},{"id":"my-latest-issues","message":"Find the five latest issues assigned to me.","titleHtml":"Find issues assigned to me","icon":"issue-opened","color":"var(--display-green-fgColor)"},{"id":"latest-node-release","message":"Fetch the latest release of nodejs/node and highlight the changes.","titleHtml":"Latest \u003cspan class=\"fgColor-muted\"\u003enodejs/node\u003c/span\u003e release","icon":"tag","color":"var(--display-purple-fgColor)"},{"id":"create-profile-readme","message":"Create a profile README for $$USERNAME$$.","titleHtml":"Create a profile README for me","icon":"rocket","color":"var(--display-pink-fgColor)"},{"id":"bugs-in-primer","message":"Show recent bugs in primer/react.","titleHtml":"Recent bugs in \u003cspan class=\"fgColor-muted\"\u003eprimer/react\u003c/span\u003e","icon":"bug","color":"var(--display-purple-fgColor)"},{"id":"my-open-pulls","message":"Find my open pull requests.","titleHtml":"My open pull requests","icon":"git-pull-request","color":"var(--display-green-fgColor)"},{"id":"generate-html-calculator","message":"Generate a simple calculator using HTML, CSS, and JavaScript.","titleHtml":"Generate an HTML/JS calculator","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"python-strong-password-endpoint","message":"Generate a Python endpoint for signing up that only allows strong passwords.","titleHtml":"Python password endpoint","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"rails-auth-endpoint","message":"Generate a Rails endpoint for authenticating with email and password.","titleHtml":"Rails authentication endpoint","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"python-pandas-data-analysis","message":"Write a Python script that analyzes a dataset using Pandas.","titleHtml":"Python Panda data analysis","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"explain-restful-basics","message":"Explain REST architectural principles and how to implement RESTful web services.","titleHtml":"Explain RESTful basics","icon":"book","color":"var(--display-blue-fgColor)"},{"id":"compare-http-post-vs-put","message":"Compare HTTP POST and PUT methods, explaining their proper usage in RESTful APIs.","titleHtml":"Compare HTTP POST vs PUT","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"explain-json-content-types","message":"Explain proper JSON MIME types and content-type headers for different scenarios and platforms.","titleHtml":"Explain JSON content types","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"compare-dates-and-times","message":"Explain strategies for accurately comparing dates and times across different timezones and formats.","titleHtml":"Compare dates and times","icon":"clock","color":"var(--display-blue-fgColor)"},{"id":"compare-json-comment-options","message":"Explain JSON syntax limitations regarding comments and alternative approaches for documentation.","titleHtml":"Compare JSON comment options","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"explain-stack-and-heap-memory","message":"Compare stack and heap memory allocation, their characteristics, and use cases in programming.","titleHtml":"Explain stack and heap memory","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"compare-api-version-strategies","message":"Explain different approaches to API versioning including URL, header, and content negotiation.","titleHtml":"Compare API version strategies","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"how-to-fix-git-submodules","message":"Troubleshoot and resolve issues with uninitialized Git submodules, explaining initialization commands and common pitfalls.","titleHtml":"How to fix Git submodules","icon":"git-merge","color":"var(--display-green-fgColor)"},{"id":"compare-git-fork-and-clone","message":"Compare and contrast Git clones versus forks, explaining their technical differences, use cases, and relationship to original repositories.","titleHtml":"Compare Git fork and clone","icon":"git-branch","color":"var(--display-green-fgColor)"},{"id":"explain-pull-request-basics","message":"Walk through the complete process of creating, submitting, and managing pull requests on GitHub, from forking to merging.","titleHtml":"Explain pull request basics","icon":"git-pull-request","color":"var(--display-green-fgColor)"},{"id":"git-history-cleanup-guide","message":"Provide a complete guide to permanently removing files from Git history, including BFG and filter-repo approaches with safety considerations.","titleHtml":"Git history cleanup guide","icon":"trash","color":"var(--display-blue-fgColor)"},{"id":"git-credential-management","message":"Explain the different methods for caching HTTPS credentials when pushing Git commits, including credential helpers, personal access tokens, and their security implications.","titleHtml":"Git credential management","icon":"key","color":"var(--display-purple-fgColor)"},{"id":"compare-origin-and-upstream","message":"Explain the conceptual and functional differences between origin and upstream remote repositories in Git, with examples of how they're used in workflow.","titleHtml":"Compare origin and upstream","icon":"git-branch","color":"var(--display-green-fgColor)"},{"id":"how-to-download-github-folders","message":"Describe various methods to download specific folders from GitHub repositories without cloning the entire project.","titleHtml":"How to download GitHub folders","icon":"download","color":"var(--display-blue-fgColor)"},{"id":"git-path-configurations","message":"Provide cross-platform instructions for properly configuring GitHub Desktop to include Git in the system PATH, enabling command-line Git operations alongside the GUI client on Windows, macOS, and Linux systems.","titleHtml":"Git PATH configurations","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"explain-fork-sync-process","message":"Provide step-by-step instructions for synchronizing a forked GitHub repository with its original upstream repository, including both command line methods and GitHub interface options.","titleHtml":"Explain fork sync process","icon":"git-merge","color":"var(--display-green-fgColor)"},{"id":"list-git-history-danger-zones","message":"List and explain potentially dangerous Git commands that can alter repository history, with guidelines on when and how to use them safely.","titleHtml":"List Git history danger zones","icon":"history","color":"var(--display-blue-fgColor)"},{"id":"explain-cli-repository-setup","message":"Explain methods for creating GitHub repositories entirely from the command line using GitHub CLI, API tokens, and other headless approaches.","titleHtml":"Explain CLI repository setup","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"how-to-migrate-git-remote","message":"Detail the process of migrating an existing Git repository to a different remote server while preserving history, branches, and tags, with command examples.","titleHtml":"How to migrate Git remote","icon":"git-commit","color":"var(--display-blue-fgColor)"},{"id":"compare-git-and-github","message":"Explain the fundamental differences between Git (the distributed version control system) and GitHub (the web-based hosting service), clarifying their relationship, unique features, and how they complement each other in modern development workflows.","titleHtml":"Compare Git and GitHub","icon":"git-branch","color":"var(--display-green-fgColor)"},{"id":"learn-git-multi-remote-setup","message":"Explain the process of configuring a Git repository to push commits simultaneously to multiple remote repositories, including setting up multiple remotes and creating automated push workflows.","titleHtml":"Learn Git multi remote setup","icon":"git-commit","color":"var(--display-blue-fgColor)"},{"id":"convert-single-branch-clone","message":"Explain methods for converting a single-branch Git clone into a full repository clone with access to all remote branches, including fetch commands and configuration changes.","titleHtml":"Convert single branch clone","icon":"git-branch","color":"var(--display-green-fgColor)"},{"id":"multiple-github-account-guide","message":"Provide step-by-step instructions for configuring and managing multiple GitHub accounts on a single computer, including SSH key setup and Git configuration.","titleHtml":"Multiple GitHub account guide","icon":"mark-github","color":"var(--display-purple-fgColor)"},{"id":"explore-java-map-iterations","message":"Compare different methods for efficiently iterating over Map entries in Java.","titleHtml":"Explore Java Map Iterations","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"understand-java-access-levels","message":"Explain differences between Java's access modifiers with practical examples.","titleHtml":"Understand Java access levels","icon":"lock","color":"var(--display-purple-fgColor)"},{"id":"compare-java-password-types","message":"Compare char[] vs String for password storage in Java with security implications.","titleHtml":"Compare Java password types","icon":"key","color":"var(--display-purple-fgColor)"},{"id":"compare-java-hashmap-hashtable","message":"Compare HashMap and Hashtable in Java, explaining their key differences including thread safety, null handling, synchronization overhead, and performance characteristics with practical examples.","titleHtml":"Compare Java HashMap/Hashtable","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"learn-java-array-sorting-perf","message":"Explain how CPU branch prediction and cache optimization affect Java array processing performance, demonstrating the speed difference between sorted and unsorted arrays with examples.","titleHtml":"Learn Java array sorting perf","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"java-operator-casting-basics","message":"Explain why compound assignment operators in Java don't require explicit casting.","titleHtml":"Java operator casting basics","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"explain-java-char-for-password","message":"Explain why char[] is preferred over String for passwords in Java, including security implications.","titleHtml":"Explain Java char[] for password","icon":"key","color":"var(--display-purple-fgColor)"},{"id":"compare-java-pass-by-value-ref","message":"Explain whether Java is pass-by-reference or pass-by-value with examples.","titleHtml":"Compare Java pass by value/ref","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"learn-js-import-patterns","message":"Explain different approaches to importing JavaScript files, including modern ES6 modules.","titleHtml":"Learn JS import patterns","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"explore-js-array-loops","message":"Compare different methods for iterating over arrays in JavaScript with use cases.","titleHtml":"Explore JS array loops","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"understand-js-strict-mode-usage","message":"Explain the purpose and benefits of strict mode in JavaScript, including common pitfalls it prevents.","titleHtml":"Understand JS strict mode usage","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"learn-js-closures","message":"Explain JavaScript closure concept with practical examples showing scope and data privacy.","titleHtml":"Learn JS closures","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"compare-js-equality-operators","message":"Compare the behavior and use cases of == and === operators in JavaScript, explaining type coercion and best practices.","titleHtml":"Compare JS equality operators","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"learn-js-sleep-function","message":"Explain how to implement delay/sleep functionality in JavaScript using promises and async/await.","titleHtml":"Learn JS sleep function","icon":"clock","color":"var(--display-blue-fgColor)"},{"id":"compare-js-substring-checks","message":"Compare methods for checking substrings in JavaScript strings, with performance considerations.","titleHtml":"Compare JS substring checks","icon":"search","color":"var(--display-blue-fgColor)"},{"id":"how-to-handle-js-async-response","message":"Explain handling asynchronous operations in JavaScript using promises, async/await, and callbacks.","titleHtml":"How to handle JS async response","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"python-slice-syntax","message":"Explain Python's list slicing syntax, including step values and negative indices.","titleHtml":"Python slice syntax","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"how-to-flatten-lists-in-python","message":"Compare methods for flattening nested lists in Python, from simple to complex cases.","titleHtml":"How to flatten lists in Python","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"learn-python-main-check","message":"Explain the purpose and usage of if name == \"main\" in Python, including module behavior and best practices.","titleHtml":"Learn Python main check","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"python-env-variables-guide","message":"Explain how to access and manage environment variables in Python applications.","titleHtml":"Python env variables guide","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"learn-python-star-operators","message":"Explain the difference between single and double asterisk operators in Python for parameter packing and unpacking.","titleHtml":"Learn Python star operators","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"explain-python-yield","message":"Explain Python generators and the yield keyword with examples of memory-efficient iteration.","titleHtml":"Explain Python yield","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"python-variable-passing-guide","message":"Explain Python's pass-by-object-reference behavior with examples of mutable and immutable objects.","titleHtml":"Python variable passing guide","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"generate-curl-json-post","message":"Demonstrate how to send JSON data using cURL, including headers and authentication.","titleHtml":"Generate cURL JSON POST","icon":"terminal","color":"var(--display-gray-fgColor)"},{"id":"show-linux-text-search","message":"Demonstrate commands and techniques for searching text within files on Linux systems.","titleHtml":"Show Linux text search","icon":"search","color":"var(--display-blue-fgColor)"},{"id":"learn-to-check-visibility-in-js","message":"Demonstrate methods for detecting hidden elements in JavaScript, including various visibility states.","titleHtml":"Learn to check visibility in JS","icon":"eye","color":"var(--display-purple-fgColor)"},{"id":"find-bash-script-location","message":"Show methods for determining a Bash script's directory location during execution.","titleHtml":"Find Bash script location","icon":"terminal","color":"var(--display-gray-fgColor)"},{"id":"explain-special-char-escape","message":"Demonstrate different methods for escaping special characters in various programming contexts.","titleHtml":"Explain special char escape","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"show-directory-exists","message":"Show different methods for checking directory existence in Bash with error handling.","titleHtml":"Show directory exists","icon":"terminal","color":"var(--display-gray-fgColor)"},{"id":"webpage-redirect-methods","message":"Show different techniques for implementing webpage redirects using HTML, JavaScript and server-side approaches.","titleHtml":"Webpage redirect methods","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"branch-sync-patterns","message":"Demonstrate Git commands for synchronizing branches, including reset, rebase, and merge techniques with their implications.","titleHtml":"Branch sync patterns","icon":"git-merge","color":"var(--display-green-fgColor)"},{"id":"how-to-recover-deleted-git-files","message":"Demonstrate techniques for locating and recovering files that were deleted in previous commits, including Git log commands, filtering options, and restoration methods.","titleHtml":"How to recover deleted Git files","icon":"history","color":"var(--display-blue-fgColor)"},{"id":"how-to-load-remote-js-script","message":"Provide code examples and best practices for linking to and executing JavaScript files hosted on GitHub in web applications.","titleHtml":"How to load remote JS script","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"how-to-npm-install-from-github","message":"Demonstrate different methods for installing npm packages directly from GitHub repositories, including syntax examples and troubleshooting tips.","titleHtml":"How to npm install from GitHub","icon":"package","color":"var(--display-blue-fgColor)"},{"id":"demo-java-linkedlist-arraylist","message":"Show different methods for initializing ArrayLists in Java in a single line.","titleHtml":"Demo Java LinkedList/ArrayList","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"learn-java-memory-issues","message":"Demonstrate common causes of memory leaks in Java and how to prevent them.","titleHtml":"Learn Java memory issues","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"learn-java-stream-conversion","message":"Show different methods for converting an InputStream to a String in Java, comparing performance.","titleHtml":"Learn Java stream conversion","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"java-null-handling-patterns","message":"Demonstrate best practices for handling null values in Java using Optional and other patterns.","titleHtml":"Java null handling patterns","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"java-list-conversion-guide","message":"Show different approaches to convert arrays to ArrayLists in Java with examples.","titleHtml":"Java List conversion guide","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"js-email-validation-guide","message":"Demonstrate robust email validation techniques in JavaScript, from regex patterns to validation APIs.","titleHtml":"JS email validation guide","icon":"mail","color":"var(--display-blue-fgColor)"},{"id":"prototype-js-array-iteration","message":"Demonstrate methods for removing specific items from JavaScript arrays with examples.","titleHtml":"Prototype JS array iteration","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"explore-js-object-checks","message":"Show different methods for detecting empty objects in JavaScript, considering various edge cases.","titleHtml":"Explore JS object checks","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"how-to-js-remove-object-props","message":"Demonstrate different methods for removing properties from JavaScript objects and their implications.","titleHtml":"How to JS remove object props","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"how-to-merge-python-dicts","message":"Show different methods for merging Python dictionaries, including dictionary unpacking and update methods.","titleHtml":"How to merge Python dicts","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"explore-python-ternary-syntax","message":"Demonstrate Python's ternary conditional operator with examples comparing it to traditional if-else statements.","titleHtml":"Explore Python ternary syntax","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"demo-python-loop-with-index","message":"Demonstrate different ways to access index values in Python for loops using enumerate and range.","titleHtml":"Demo Python loop with index","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"demo-sorting-python-dictionary","message":"Demonstrate methods for sorting Python dictionaries by values using different approaches and sorting criteria.","titleHtml":"Demo sorting Python dictionary","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"learn-python-file-checks","message":"Show methods for checking file existence in Python without raising exceptions.","titleHtml":"Learn Python file checks","icon":"file","color":"var(--display-blue-fgColor)"},{"id":"demo-python-run-system-command","message":"Demonstrate various methods for executing system commands in Python using subprocess and other modules.","titleHtml":"Demo Python run system command","icon":"terminal","color":"var(--display-gray-fgColor)"},{"id":"compare-python-method-decorators","message":"Compare @staticmethod and @classmethod decorators in Python, explaining their use cases.","titleHtml":"Compare Python method decorators","icon":"code","color":"var(--display-gray-fgColor)"}]},{"type":"instructional","data":[{"id":"what-can-i-do-with-github-copilot-chat","message":"What can I do with GitHub Copilot Chat?","titleHtml":"What can I do here?","icon":"light-bulb","color":"var(--display-purple-fgColor)"}]},{"type":"interactional","data":[{"id":"to-do-app-local-storage","message":"Create a to-do list application with local storage functionality.","titleHtml":"To-do list with local storage","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"digital-clock-time-zones","message":"Create a digital clock that displays the current time in different time zones.","titleHtml":"A digital time zone clock","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"weather-dashboard-app","message":"Develop a weather dashboard that fetches data from a public weather API.","titleHtml":"Develop a weather dashboard","icon":"code","color":"var(--display-gray-fgColor)"},{"id":"create-joke-generator","message":"Create a random joke generator using an external API.","titleHtml":"Create a joke generator","icon":"code","color":"var(--display-gray-fgColor)"}]}],"canShareThread":true}}</script>
  <div data-target="react-partial.reactRoot"><div class="Box-sc-g0xbh4-0 bpDFns"></div><div class="Box-sc-g0xbh4-0 hmHhrt"></div><script type="application/json" id="__PRIMER_DATA_:r1b:__">{"resolvedServerColorMode":"night"}</script></div>
</react-partial>


    </react-partial-anchor>
  <react-partial-anchor data-catalyst="">
    <button id="global-copilot-menu-button" data-target="react-partial-anchor.anchor" aria-expanded="false" aria-labelledby="tooltip-526ac187-1b17-48fd-bf60-b7d1f72d728b" type="button" data-view-component="true" class="Button Button--iconOnly Button--secondary Button--medium AppHeader-button AppHeader-buttonRight" aria-haspopup="true" fdprocessedid="rtpqgm">  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-triangle-down Button-visual">
    <path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path>
</svg>
</button><tool-tip id="tooltip-526ac187-1b17-48fd-bf60-b7d1f72d728b" for="global-copilot-menu-button" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="position-absolute sr-only" aria-hidden="true" role="tooltip" style="--tool-tip-position-top: 48px; --tool-tip-position-left: 1200.7562255859375px;"><template shadowrootmode="open"><style>
      :host {
        --tooltip-top: var(--tool-tip-position-top, 0);
        --tooltip-left: var(--tool-tip-position-left, 0);
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--tooltip-fgColor, var(--fgColor-onEmphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--tooltip-bgColor, var(--bgColor-emphasis)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tooltip-top) auto auto var(--tooltip-left) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host(:is(.tooltip-n, .tooltip-nw, .tooltip-ne)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) - var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(:is(.tooltip-s, .tooltip-sw, .tooltip-se)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) + var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(.tooltip-w) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) - var(--overlay-offset, 0.25rem));
      }

      :host(.tooltip-e) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) + var(--overlay-offset, 0.25rem));
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: var(--overlay-offset, 0.25rem);
        content: "";
      }

      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }

      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open) {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      @media (forced-colors: active) {
        :host {
          outline: solid 1px transparent;
        }

        :host:before {
          display: none;
        }
      }
    </style><slot></slot></template>Open Copilot…</tool-tip>

    
  
      <script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/global-copilot-menu-b44724f89545.js.download"></script>
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./project_files/primer-react.34abd6a35dee74c6730e.module.css">
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./project_files/global-copilot-menu.a25fe62bfab0eee51ddb.module.css">

<react-partial partial-name="global-copilot-menu" data-ssr="false" data-attempted-ssr="false" data-catalyst="" class="loaded">
  
  <script type="application/json" data-target="react-partial.embeddedData">{"props":{}}</script>
  <div data-target="react-partial.reactRoot"><div class="d-none"></div><script type="application/json" id="__PRIMER_DATA_:r13:__">{"resolvedServerColorMode":"night"}</script></div>
</react-partial>

    </react-partial-anchor>
</div>


        <div class="AppHeader-actions position-relative">
             <react-partial-anchor data-catalyst="">
      <button id="global-create-menu-anchor" aria-label="Create something new" data-target="react-partial-anchor.anchor" type="button" data-view-component="true" class="AppHeader-button global-create-button Button--secondary Button--medium Button width-auto color-fg-muted" aria-describedby="tooltip-7537ba8f-08fb-46c4-a918-5d3567f60dee" aria-expanded="false" aria-haspopup="true" fdprocessedid="j9asxe">  <span class="Button-content">
      <span class="Button-visual Button-leadingVisual">
        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-plus">
    <path d="M7.75 2a.75.75 0 0 1 .75.75V7h4.25a.75.75 0 0 1 0 1.5H8.5v4.25a.75.75 0 0 1-1.5 0V8.5H2.75a.75.75 0 0 1 0-1.5H7V2.75A.75.75 0 0 1 7.75 2Z"></path>
</svg>
      </span>
    <span class="Button-label"><svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-triangle-down">
    <path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path>
</svg></span>
  </span>
</button><tool-tip id="tooltip-7537ba8f-08fb-46c4-a918-5d3567f60dee" for="global-create-menu-anchor" popover="manual" data-direction="s" data-type="description" data-view-component="true" class="position-absolute sr-only" role="tooltip" style="--tool-tip-position-top: 48px; --tool-tip-position-left: 1272.8187274932861px;"><template shadowrootmode="open"><style>
      :host {
        --tooltip-top: var(--tool-tip-position-top, 0);
        --tooltip-left: var(--tool-tip-position-left, 0);
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--tooltip-fgColor, var(--fgColor-onEmphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--tooltip-bgColor, var(--bgColor-emphasis)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tooltip-top) auto auto var(--tooltip-left) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host(:is(.tooltip-n, .tooltip-nw, .tooltip-ne)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) - var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(:is(.tooltip-s, .tooltip-sw, .tooltip-se)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) + var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(.tooltip-w) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) - var(--overlay-offset, 0.25rem));
      }

      :host(.tooltip-e) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) + var(--overlay-offset, 0.25rem));
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: var(--overlay-offset, 0.25rem);
        content: "";
      }

      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }

      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open) {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      @media (forced-colors: active) {
        :host {
          outline: solid 1px transparent;
        }

        :host:before {
          display: none;
        }
      }
    </style><slot></slot></template>Create new...</tool-tip>

      
    
        <script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/ui_packages_document-metadata_document-metadata_ts-ui_packages_promise-with-resolvers-polyfil-b81d9e-a079b289fa52.js.download"></script>
<script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/global-create-menu-c0e8b2269991.js.download"></script>
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./project_files/primer-react.34abd6a35dee74c6730e.module.css">
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./project_files/global-create-menu.b1ee6a6bae56a89148b1.module.css">

<react-partial partial-name="global-create-menu" data-ssr="false" data-attempted-ssr="false" data-catalyst="" class="loaded">
  
  <script type="application/json" data-target="react-partial.embeddedData">{"props":{"createRepo":true,"importRepo":true,"codespaces":true,"spark":false,"gist":true,"createOrg":true,"createProject":false,"createProjectUrl":"/sahelidgp?tab=projects","createLegacyProject":false,"createIssue":false,"org":null,"owner":"AnimeshSatyapragyanPatra","repo":"ExamSystem"}}</script>
  <div data-target="react-partial.reactRoot"><script type="application/json" id="__PRIMER_DATA_:r17:__">{"resolvedServerColorMode":"night"}</script></div>
</react-partial>

      </react-partial-anchor>


            <a href="https://github.com/issues" data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;ISSUES_HEADER&quot;,&quot;label&quot;:null}" id="icon-button-8a5a7a53-0157-448f-9872-fecab4e59cf9" aria-labelledby="tooltip-1d1b87a7-25e0-4431-a9db-71fbc003f850" data-view-component="true" class="Button Button--iconOnly Button--secondary Button--medium AppHeader-button color-fg-muted">  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-issue-opened Button-visual">
    <path d="M8 9.5a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path><path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0ZM1.5 8a6.5 6.5 0 1 0 13 0 6.5 6.5 0 0 0-13 0Z"></path>
</svg>
</a><tool-tip id="tooltip-1d1b87a7-25e0-4431-a9db-71fbc003f850" for="icon-button-8a5a7a53-0157-448f-9872-fecab4e59cf9" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="sr-only position-absolute" aria-hidden="true" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        --tooltip-top: var(--tool-tip-position-top, 0);
        --tooltip-left: var(--tool-tip-position-left, 0);
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--tooltip-fgColor, var(--fgColor-onEmphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--tooltip-bgColor, var(--bgColor-emphasis)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tooltip-top) auto auto var(--tooltip-left) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host(:is(.tooltip-n, .tooltip-nw, .tooltip-ne)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) - var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(:is(.tooltip-s, .tooltip-sw, .tooltip-se)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) + var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(.tooltip-w) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) - var(--overlay-offset, 0.25rem));
      }

      :host(.tooltip-e) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) + var(--overlay-offset, 0.25rem));
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: var(--overlay-offset, 0.25rem);
        content: "";
      }

      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }

      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open) {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      @media (forced-colors: active) {
        :host {
          outline: solid 1px transparent;
        }

        :host:before {
          display: none;
        }
      }
    </style><slot></slot></template>Your issues</tool-tip>

            <a href="https://github.com/pulls" data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;PULL_REQUESTS_HEADER&quot;,&quot;label&quot;:null}" id="icon-button-b128c0cf-a133-4a25-ae9f-fc738392abbb" aria-labelledby="tooltip-a5b9ba68-b748-4bf7-9e36-6d6c5bd5df9f" data-view-component="true" class="Button Button--iconOnly Button--secondary Button--medium AppHeader-button color-fg-muted">  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-git-pull-request Button-visual">
    <path d="M1.5 3.25a2.25 2.25 0 1 1 3 2.122v5.256a2.251 2.251 0 1 1-1.5 0V5.372A2.25 2.25 0 0 1 1.5 3.25Zm5.677-.177L9.573.677A.25.25 0 0 1 10 .854V2.5h1A2.5 2.5 0 0 1 13.5 5v5.628a2.251 2.251 0 1 1-1.5 0V5a1 1 0 0 0-1-1h-1v1.646a.25.25 0 0 1-.427.177L7.177 3.427a.25.25 0 0 1 0-.354ZM3.75 2.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm0 9.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm8.25.75a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0Z"></path>
</svg>
</a><tool-tip id="tooltip-a5b9ba68-b748-4bf7-9e36-6d6c5bd5df9f" for="icon-button-b128c0cf-a133-4a25-ae9f-fc738392abbb" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="sr-only position-absolute" aria-hidden="true" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        --tooltip-top: var(--tool-tip-position-top, 0);
        --tooltip-left: var(--tool-tip-position-left, 0);
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--tooltip-fgColor, var(--fgColor-onEmphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--tooltip-bgColor, var(--bgColor-emphasis)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tooltip-top) auto auto var(--tooltip-left) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host(:is(.tooltip-n, .tooltip-nw, .tooltip-ne)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) - var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(:is(.tooltip-s, .tooltip-sw, .tooltip-se)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) + var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(.tooltip-w) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) - var(--overlay-offset, 0.25rem));
      }

      :host(.tooltip-e) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) + var(--overlay-offset, 0.25rem));
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: var(--overlay-offset, 0.25rem);
        content: "";
      }

      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }

      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open) {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      @media (forced-colors: active) {
        :host {
          outline: solid 1px transparent;
        }

        :host:before {
          display: none;
        }
      }
    </style><slot></slot></template>Your pull requests</tool-tip>

        </div>

          <notification-indicator data-channel="eyJjIjoibm90aWZpY2F0aW9uLWNoYW5nZWQ6MTc2MTYyMTEwIiwidCI6MTc0NzQxMzEzNH0=--01842c78b8b0b6e7f994736209821e3fd5fa722dbd8ab87f254963aee7491ca1" data-indicator-mode="none" data-tooltip-global="You have unread notifications" data-tooltip-unavailable="Notifications are unavailable at the moment." data-tooltip-none="You have no unread notifications" data-header-redesign-enabled="true" data-fetch-indicator-src="/notifications/indicator" data-fetch-indicator-enabled="true" data-view-component="true" class="js-socket-channel" data-fetch-retry-delay-time="500" data-catalyst="">
    <a id="AppHeader-notifications-button" href="https://github.com/notifications" aria-labelledby="notification-indicator-tooltip" data-hotkey="g n" data-target="notification-indicator.link" data-analytics-event="{&quot;category&quot;:&quot;Global navigation&quot;,&quot;action&quot;:&quot;NOTIFICATIONS_HEADER&quot;,&quot;label&quot;:&quot;icon:read&quot;}" data-view-component="true" class="Button Button--iconOnly Button--secondary Button--medium AppHeader-button color-fg-muted">  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-inbox Button-visual">
    <path d="M2.8 2.06A1.75 1.75 0 0 1 4.41 1h7.18c.7 0 1.333.417 1.61 1.06l2.74 6.395c.04.093.06.194.06.295v4.5A1.75 1.75 0 0 1 14.25 15H1.75A1.75 1.75 0 0 1 0 13.25v-4.5c0-.101.02-.202.06-.295Zm1.61.44a.25.25 0 0 0-.23.152L1.887 8H4.75a.75.75 0 0 1 .6.3L6.625 10h2.75l1.275-1.7a.75.75 0 0 1 .6-.3h2.863L11.82 2.652a.25.25 0 0 0-.23-.152Zm10.09 7h-2.875l-1.275 1.7a.75.75 0 0 1-.6.3h-3.5a.75.75 0 0 1-.6-.3L4.375 9.5H1.5v3.75c0 .138.112.25.25.25h12.5a.25.25 0 0 0 .25-.25Z"></path>
</svg>
</a>

    <tool-tip id="notification-indicator-tooltip" data-target="notification-indicator.tooltip" for="AppHeader-notifications-button" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="sr-only position-absolute" aria-hidden="true" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        --tooltip-top: var(--tool-tip-position-top, 0);
        --tooltip-left: var(--tool-tip-position-left, 0);
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--tooltip-fgColor, var(--fgColor-onEmphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--tooltip-bgColor, var(--bgColor-emphasis)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tooltip-top) auto auto var(--tooltip-left) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host(:is(.tooltip-n, .tooltip-nw, .tooltip-ne)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) - var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(:is(.tooltip-s, .tooltip-sw, .tooltip-se)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) + var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(.tooltip-w) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) - var(--overlay-offset, 0.25rem));
      }

      :host(.tooltip-e) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) + var(--overlay-offset, 0.25rem));
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: var(--overlay-offset, 0.25rem);
        content: "";
      }

      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }

      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open) {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      @media (forced-colors: active) {
        :host {
          outline: solid 1px transparent;
        }

        :host:before {
          display: none;
        }
      }
    </style><slot></slot></template>You have no unread notifications</tool-tip>
</notification-indicator>

        <div class="AppHeader-user">
          <deferred-side-panel data-url="/_side-panels/user?repository_id=984055845" data-catalyst="">
  <include-fragment data-target="deferred-side-panel.fragment" data-nonce="v2:573ebb07-f99a-93aa-2b7b-35a6b80c1297" data-view-component="true"><template shadowrootmode="open"><style>:host {display: block;}</style><slot></slot></template>
    <react-partial-anchor data-catalyst="">
  <button data-target="react-partial-anchor.anchor" data-login="sahelidgp" aria-label="Open user navigation menu" type="button" data-view-component="true" class="Button--invisible Button--medium Button Button--invisible-noVisuals color-bg-transparent p-0" aria-expanded="false" aria-haspopup="true" fdprocessedid="jfmnvi">  <span class="Button-content">
    <span class="Button-label"><img src="./project_files/176162110" alt="" size="32" height="32" width="32" data-view-component="true" class="avatar circle"></span>
  </span>
</button>
  

    <script crossorigin="anonymous" defer="defer" type="application/javascript" src="./project_files/global-user-nav-drawer-f008e700d182.js.download"></script>
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./project_files/primer-react.34abd6a35dee74c6730e.module.css">
<link crossorigin="anonymous" media="all" rel="stylesheet" href="./project_files/global-user-nav-drawer.eeb7d39a21c5b49acbe0.module.css">

<react-partial partial-name="global-user-nav-drawer" data-ssr="false" data-attempted-ssr="false" data-catalyst="" class="loaded">
  
  <script type="application/json" data-target="react-partial.embeddedData">{"props":{"owner":{"login":"sahelidgp","name":null,"avatarUrl":"https://avatars.githubusercontent.com/u/176162110?v=4"},"drawerId":"global-user-nav-drawer","lazyLoadItemDataFetchUrl":"/_side-panels/user.json","canAddAccount":true,"addAccountPath":"/login?add_account=1\u0026return_to=https%3A%2F%2Fgithub.com%2FAnimeshSatyapragyanPatra%2FExamSystem%2Fblob%2Fmain%2FREADME.md","switchAccountPath":"/switch_account","loginAccountPath":"/login?add_account=1","projectsPath":"/sahelidgp?tab=projects","gistsUrl":"https://gist.github.com/mine","docsUrl":"https://docs.github.com","yourEnterpriseUrl":null,"enterpriseSettingsUrl":null,"supportUrl":"https://support.github.com","showAccountSwitcher":true,"showCopilot":true,"showEnterprises":true,"showEnterprise":false,"showGists":true,"showOrganizations":true,"showSponsors":true,"showUpgrade":true,"showFeaturesPreviews":true,"showEnterpriseSettings":false,"createMenuProps":{"createRepo":true,"importRepo":true,"codespaces":true,"spark":false,"gist":true,"createOrg":true,"createProject":false,"createProjectUrl":"/sahelidgp?tab=projects","createLegacyProject":false,"createIssue":false,"org":null,"owner":"AnimeshSatyapragyanPatra","repo":"ExamSystem"}}}</script>
  <div data-target="react-partial.reactRoot"><script type="application/json" id="__PRIMER_DATA_:r1a:__">{"resolvedServerColorMode":"night"}</script></div>
</react-partial>

  </react-partial-anchor>

</include-fragment></deferred-side-panel>
        </div>

        <div class="position-absolute mt-2">
            
<site-header-logged-in-user-menu data-catalyst="">

</site-header-logged-in-user-menu>

        </div>
      </div>
    </div>


    
        <div class="AppHeader-localBar">
          <nav data-pjax="#js-repo-pjax-container" aria-label="Repository" data-view-component="true" class="js-repo-nav js-sidenav-container-pjax js-responsive-underlinenav overflow-hidden UnderlineNav">

  <ul data-view-component="true" class="UnderlineNav-body list-style-none">
      <li data-view-component="true" class="d-inline-flex">
  <a id="code-tab" href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem" data-tab-item="i0code-tab" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches repo_packages repo_deployments repo_attestations /AnimeshSatyapragyanPatra/ExamSystem" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" data-hotkey="g c" data-analytics-event="{&quot;category&quot;:&quot;Underline navbar&quot;,&quot;action&quot;:&quot;Click tab&quot;,&quot;label&quot;:&quot;Code&quot;,&quot;target&quot;:&quot;UNDERLINE_NAV.TAB&quot;}" data-view-component="true" class="UnderlineNav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item selected" aria-current="page">
    
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-code UnderlineNav-octicon d-none d-sm-inline">
    <path d="m11.28 3.22 4.25 4.25a.75.75 0 0 1 0 1.06l-4.25 4.25a.749.749 0 0 1-1.275-.326.749.749 0 0 1 .215-.734L13.94 8l-3.72-3.72a.749.749 0 0 1 .326-1.275.749.749 0 0 1 .734.215Zm-6.56 0a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042L2.06 8l3.72 3.72a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L.47 8.53a.75.75 0 0 1 0-1.06Z"></path>
</svg>
        <span data-content="Code">Code</span>
          <span id="code-repo-tab-count" data-pjax-replace="" data-turbo-replace="" title="Not available" data-view-component="true" class="Counter"></span>


    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="issues-tab" href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/issues" data-tab-item="i1issues-tab" data-selected-links="repo_issues repo_labels repo_milestones /AnimeshSatyapragyanPatra/ExamSystem/issues" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" data-hotkey="g i" data-analytics-event="{&quot;category&quot;:&quot;Underline navbar&quot;,&quot;action&quot;:&quot;Click tab&quot;,&quot;label&quot;:&quot;Issues&quot;,&quot;target&quot;:&quot;UNDERLINE_NAV.TAB&quot;}" data-view-component="true" class="UnderlineNav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-issue-opened UnderlineNav-octicon d-none d-sm-inline">
    <path d="M8 9.5a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path><path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0ZM1.5 8a6.5 6.5 0 1 0 13 0 6.5 6.5 0 0 0-13 0Z"></path>
</svg>
        <span data-content="Issues">Issues</span>
          <span id="issues-repo-tab-count" data-pjax-replace="" data-turbo-replace="" title="0" hidden="hidden" data-view-component="true" class="Counter">0</span>


    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="pull-requests-tab" href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/pulls" data-tab-item="i2pull-requests-tab" data-selected-links="repo_pulls checks /AnimeshSatyapragyanPatra/ExamSystem/pulls" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" data-hotkey="g p" data-analytics-event="{&quot;category&quot;:&quot;Underline navbar&quot;,&quot;action&quot;:&quot;Click tab&quot;,&quot;label&quot;:&quot;Pull requests&quot;,&quot;target&quot;:&quot;UNDERLINE_NAV.TAB&quot;}" data-view-component="true" class="UnderlineNav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-git-pull-request UnderlineNav-octicon d-none d-sm-inline">
    <path d="M1.5 3.25a2.25 2.25 0 1 1 3 2.122v5.256a2.251 2.251 0 1 1-1.5 0V5.372A2.25 2.25 0 0 1 1.5 3.25Zm5.677-.177L9.573.677A.25.25 0 0 1 10 .854V2.5h1A2.5 2.5 0 0 1 13.5 5v5.628a2.251 2.251 0 1 1-1.5 0V5a1 1 0 0 0-1-1h-1v1.646a.25.25 0 0 1-.427.177L7.177 3.427a.25.25 0 0 1 0-.354ZM3.75 2.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm0 9.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm8.25.75a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0Z"></path>
</svg>
        <span data-content="Pull requests">Pull requests</span>
          <span id="pull-requests-repo-tab-count" data-pjax-replace="" data-turbo-replace="" title="0" hidden="hidden" data-view-component="true" class="Counter">0</span>


    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="actions-tab" href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/actions" data-tab-item="i3actions-tab" data-selected-links="repo_actions /AnimeshSatyapragyanPatra/ExamSystem/actions" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" data-hotkey="g a" data-analytics-event="{&quot;category&quot;:&quot;Underline navbar&quot;,&quot;action&quot;:&quot;Click tab&quot;,&quot;label&quot;:&quot;Actions&quot;,&quot;target&quot;:&quot;UNDERLINE_NAV.TAB&quot;}" data-view-component="true" class="UnderlineNav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-play UnderlineNav-octicon d-none d-sm-inline">
    <path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0ZM1.5 8a6.5 6.5 0 1 0 13 0 6.5 6.5 0 0 0-13 0Zm4.879-2.773 4.264 2.559a.25.25 0 0 1 0 .428l-4.264 2.559A.25.25 0 0 1 6 10.559V5.442a.25.25 0 0 1 .379-.215Z"></path>
</svg>
        <span data-content="Actions">Actions</span>
          <span id="actions-repo-tab-count" data-pjax-replace="" data-turbo-replace="" title="Not available" data-view-component="true" class="Counter"></span>


    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="projects-tab" href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/projects" data-tab-item="i4projects-tab" data-selected-links="repo_projects new_repo_project repo_project /AnimeshSatyapragyanPatra/ExamSystem/projects" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" data-hotkey="g b" data-analytics-event="{&quot;category&quot;:&quot;Underline navbar&quot;,&quot;action&quot;:&quot;Click tab&quot;,&quot;label&quot;:&quot;Projects&quot;,&quot;target&quot;:&quot;UNDERLINE_NAV.TAB&quot;}" data-view-component="true" class="UnderlineNav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-table UnderlineNav-octicon d-none d-sm-inline">
    <path d="M0 1.75C0 .784.784 0 1.75 0h12.5C15.216 0 16 .784 16 1.75v12.5A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25ZM6.5 6.5v8h7.75a.25.25 0 0 0 .25-.25V6.5Zm8-1.5V1.75a.25.25 0 0 0-.25-.25H6.5V5Zm-13 1.5v7.75c0 .138.112.25.25.25H5v-8ZM5 5V1.5H1.75a.25.25 0 0 0-.25.25V5Z"></path>
</svg>
        <span data-content="Projects">Projects</span>
          <span id="projects-repo-tab-count" data-pjax-replace="" data-turbo-replace="" title="0" hidden="hidden" data-view-component="true" class="Counter">0</span>


    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="security-tab" href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/security" data-tab-item="i5security-tab" data-selected-links="security overview alerts policy token_scanning code_scanning /AnimeshSatyapragyanPatra/ExamSystem/security" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" data-hotkey="g s" data-analytics-event="{&quot;category&quot;:&quot;Underline navbar&quot;,&quot;action&quot;:&quot;Click tab&quot;,&quot;label&quot;:&quot;Security&quot;,&quot;target&quot;:&quot;UNDERLINE_NAV.TAB&quot;}" data-view-component="true" class="UnderlineNav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-shield UnderlineNav-octicon d-none d-sm-inline">
    <path d="M7.467.133a1.748 1.748 0 0 1 1.066 0l5.25 1.68A1.75 1.75 0 0 1 15 3.48V7c0 1.566-.32 3.182-1.303 4.682-.983 1.498-2.585 2.813-5.032 3.855a1.697 1.697 0 0 1-1.33 0c-2.447-1.042-4.049-2.357-5.032-3.855C1.32 10.182 1 8.566 1 7V3.48a1.75 1.75 0 0 1 1.217-1.667Zm.61 1.429a.25.25 0 0 0-.153 0l-5.25 1.68a.25.25 0 0 0-.174.238V7c0 1.358.275 2.666 1.057 3.86.784 1.194 2.121 2.34 4.366 3.297a.196.196 0 0 0 .154 0c2.245-.956 3.582-2.104 4.366-3.298C13.225 9.666 13.5 8.36 13.5 7V3.48a.251.251 0 0 0-.174-.237l-5.25-1.68ZM8.75 4.75v3a.75.75 0 0 1-1.5 0v-3a.75.75 0 0 1 1.5 0ZM9 10.5a1 1 0 1 1-2 0 1 1 0 0 1 2 0Z"></path>
</svg>
        <span data-content="Security">Security</span>
          

    
</a></li>
      <li data-view-component="true" class="d-inline-flex">
  <a id="insights-tab" href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/pulse" data-tab-item="i6insights-tab" data-selected-links="repo_graphs repo_contributors dependency_graph dependabot_updates pulse people community /AnimeshSatyapragyanPatra/ExamSystem/pulse" data-pjax="#repo-content-pjax-container" data-turbo-frame="repo-content-turbo-frame" data-analytics-event="{&quot;category&quot;:&quot;Underline navbar&quot;,&quot;action&quot;:&quot;Click tab&quot;,&quot;label&quot;:&quot;Insights&quot;,&quot;target&quot;:&quot;UNDERLINE_NAV.TAB&quot;}" data-view-component="true" class="UnderlineNav-item no-wrap js-responsive-underlinenav-item js-selected-navigation-item">
    
              <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-graph UnderlineNav-octicon d-none d-sm-inline">
    <path d="M1.5 1.75V13.5h13.75a.75.75 0 0 1 0 1.5H.75a.75.75 0 0 1-.75-.75V1.75a.75.75 0 0 1 1.5 0Zm14.28 2.53-5.25 5.25a.75.75 0 0 1-1.06 0L7 7.06 4.28 9.78a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042l3.25-3.25a.75.75 0 0 1 1.06 0L10 7.94l4.72-4.72a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042Z"></path>
</svg>
        <span data-content="Insights">Insights</span>
          <span id="insights-repo-tab-count" data-pjax-replace="" data-turbo-replace="" title="Not available" data-view-component="true" class="Counter"></span>


    
</a></li>
</ul>
    <div style="visibility:hidden;" data-view-component="true" class="UnderlineNav-actions js-responsive-underlinenav-overflow position-absolute pr-3 pr-md-4 pr-lg-5 right-0">      <action-menu data-select-variant="none" data-view-component="true" data-catalyst="" data-ready="true">
  <focus-group direction="vertical" mnemonics="" retain="">
    <button id="action-menu-f0096b30-53e7-40c4-a074-1317d04fd7f1-button" popovertarget="action-menu-f0096b30-53e7-40c4-a074-1317d04fd7f1-overlay" aria-controls="action-menu-f0096b30-53e7-40c4-a074-1317d04fd7f1-list" aria-haspopup="true" aria-labelledby="tooltip-8d9b97d8-e5f6-4e15-869e-7176b3330886" type="button" data-view-component="true" class="Button Button--iconOnly Button--secondary Button--medium UnderlineNav-item">  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-kebab-horizontal Button-visual">
    <path d="M8 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3ZM1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Zm13 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path>
</svg>
</button><tool-tip id="tooltip-8d9b97d8-e5f6-4e15-869e-7176b3330886" for="action-menu-f0096b30-53e7-40c4-a074-1317d04fd7f1-button" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="sr-only position-absolute" aria-hidden="true" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        --tooltip-top: var(--tool-tip-position-top, 0);
        --tooltip-left: var(--tool-tip-position-left, 0);
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--tooltip-fgColor, var(--fgColor-onEmphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--tooltip-bgColor, var(--bgColor-emphasis)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tooltip-top) auto auto var(--tooltip-left) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host(:is(.tooltip-n, .tooltip-nw, .tooltip-ne)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) - var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(:is(.tooltip-s, .tooltip-sw, .tooltip-se)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) + var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(.tooltip-w) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) - var(--overlay-offset, 0.25rem));
      }

      :host(.tooltip-e) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) + var(--overlay-offset, 0.25rem));
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: var(--overlay-offset, 0.25rem);
        content: "";
      }

      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }

      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open) {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      @media (forced-colors: active) {
        :host {
          outline: solid 1px transparent;
        }

        :host:before {
          display: none;
        }
      }
    </style><slot></slot></template>Additional navigation options</tool-tip>


<anchored-position data-target="action-menu.overlay" id="action-menu-f0096b30-53e7-40c4-a074-1317d04fd7f1-overlay" anchor="action-menu-f0096b30-53e7-40c4-a074-1317d04fd7f1-button" align="start" side="outside-bottom" anchor-offset="normal" popover="auto" data-view-component="true" style="inset: 36px auto auto 0px;">
  <div data-view-component="true" class="Overlay Overlay--size-auto">
    
      <div data-view-component="true" class="Overlay-body Overlay-body--paddingNone">          <action-list data-catalyst="">
  <div data-view-component="true">
    <ul aria-labelledby="action-menu-f0096b30-53e7-40c4-a074-1317d04fd7f1-button" id="action-menu-f0096b30-53e7-40c4-a074-1317d04fd7f1-list" role="menu" data-view-component="true" class="ActionListWrap--inset ActionListWrap">
        <li hidden="" data-menu-item="i0code-tab" data-targets="action-list.items" role="none" data-view-component="true" class="ActionListItem">
    
    
    <a tabindex="-1" id="item-16140c6d-1686-4590-b4ae-1aec96b57d8a" href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem" role="menuitem" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-code">
    <path d="m11.28 3.22 4.25 4.25a.75.75 0 0 1 0 1.06l-4.25 4.25a.749.749 0 0 1-1.275-.326.749.749 0 0 1 .215-.734L13.94 8l-3.72-3.72a.749.749 0 0 1 .326-1.275.749.749 0 0 1 .734.215Zm-6.56 0a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042L2.06 8l3.72 3.72a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L.47 8.53a.75.75 0 0 1 0-1.06Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Code
</span>      
</a>
  
</li>
        <li hidden="" data-menu-item="i1issues-tab" data-targets="action-list.items" role="none" data-view-component="true" class="ActionListItem">
    
    
    <a tabindex="-1" id="item-74403747-c093-46dd-829e-5480315639d6" href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/issues" role="menuitem" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-issue-opened">
    <path d="M8 9.5a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path><path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0ZM1.5 8a6.5 6.5 0 1 0 13 0 6.5 6.5 0 0 0-13 0Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Issues
</span>      
</a>
  
</li>
        <li hidden="" data-menu-item="i2pull-requests-tab" data-targets="action-list.items" role="none" data-view-component="true" class="ActionListItem">
    
    
    <a tabindex="-1" id="item-8fa6f51f-4563-46fe-b695-f2830e65756b" href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/pulls" role="menuitem" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-git-pull-request">
    <path d="M1.5 3.25a2.25 2.25 0 1 1 3 2.122v5.256a2.251 2.251 0 1 1-1.5 0V5.372A2.25 2.25 0 0 1 1.5 3.25Zm5.677-.177L9.573.677A.25.25 0 0 1 10 .854V2.5h1A2.5 2.5 0 0 1 13.5 5v5.628a2.251 2.251 0 1 1-1.5 0V5a1 1 0 0 0-1-1h-1v1.646a.25.25 0 0 1-.427.177L7.177 3.427a.25.25 0 0 1 0-.354ZM3.75 2.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm0 9.5a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Zm8.25.75a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Pull requests
</span>      
</a>
  
</li>
        <li hidden="" data-menu-item="i3actions-tab" data-targets="action-list.items" role="none" data-view-component="true" class="ActionListItem">
    
    
    <a tabindex="-1" id="item-3f6e70f7-3f48-44bf-a633-3db0825ed88a" href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/actions" role="menuitem" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-play">
    <path d="M8 0a8 8 0 1 1 0 16A8 8 0 0 1 8 0ZM1.5 8a6.5 6.5 0 1 0 13 0 6.5 6.5 0 0 0-13 0Zm4.879-2.773 4.264 2.559a.25.25 0 0 1 0 .428l-4.264 2.559A.25.25 0 0 1 6 10.559V5.442a.25.25 0 0 1 .379-.215Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Actions
</span>      
</a>
  
</li>
        <li hidden="" data-menu-item="i4projects-tab" data-targets="action-list.items" role="none" data-view-component="true" class="ActionListItem">
    
    
    <a tabindex="-1" id="item-18d5c43d-f72c-42ad-ad6d-fa399a43beb2" href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/projects" role="menuitem" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-table">
    <path d="M0 1.75C0 .784.784 0 1.75 0h12.5C15.216 0 16 .784 16 1.75v12.5A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25ZM6.5 6.5v8h7.75a.25.25 0 0 0 .25-.25V6.5Zm8-1.5V1.75a.25.25 0 0 0-.25-.25H6.5V5Zm-13 1.5v7.75c0 .138.112.25.25.25H5v-8ZM5 5V1.5H1.75a.25.25 0 0 0-.25.25V5Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Projects
</span>      
</a>
  
</li>
        <li hidden="" data-menu-item="i5security-tab" data-targets="action-list.items" role="none" data-view-component="true" class="ActionListItem">
    
    
    <a tabindex="-1" id="item-6ed3ff47-1d49-422a-8fdc-742cf40202f9" href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/security" role="menuitem" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-shield">
    <path d="M7.467.133a1.748 1.748 0 0 1 1.066 0l5.25 1.68A1.75 1.75 0 0 1 15 3.48V7c0 1.566-.32 3.182-1.303 4.682-.983 1.498-2.585 2.813-5.032 3.855a1.697 1.697 0 0 1-1.33 0c-2.447-1.042-4.049-2.357-5.032-3.855C1.32 10.182 1 8.566 1 7V3.48a1.75 1.75 0 0 1 1.217-1.667Zm.61 1.429a.25.25 0 0 0-.153 0l-5.25 1.68a.25.25 0 0 0-.174.238V7c0 1.358.275 2.666 1.057 3.86.784 1.194 2.121 2.34 4.366 3.297a.196.196 0 0 0 .154 0c2.245-.956 3.582-2.104 4.366-3.298C13.225 9.666 13.5 8.36 13.5 7V3.48a.251.251 0 0 0-.174-.237l-5.25-1.68ZM8.75 4.75v3a.75.75 0 0 1-1.5 0v-3a.75.75 0 0 1 1.5 0ZM9 10.5a1 1 0 1 1-2 0 1 1 0 0 1 2 0Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Security
</span>      
</a>
  
</li>
        <li hidden="" data-menu-item="i6insights-tab" data-targets="action-list.items" role="none" data-view-component="true" class="ActionListItem">
    
    
    <a tabindex="-1" id="item-c6341c0a-97ff-4c30-a465-d993cce29f82" href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/pulse" role="menuitem" data-view-component="true" class="ActionListContent ActionListContent--visual16">
        <span class="ActionListItem-visual ActionListItem-visual--leading">
          <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-graph">
    <path d="M1.5 1.75V13.5h13.75a.75.75 0 0 1 0 1.5H.75a.75.75 0 0 1-.75-.75V1.75a.75.75 0 0 1 1.5 0Zm14.28 2.53-5.25 5.25a.75.75 0 0 1-1.06 0L7 7.06 4.28 9.78a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042l3.25-3.25a.75.75 0 0 1 1.06 0L10 7.94l4.72-4.72a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042Z"></path>
</svg>
        </span>
      
        <span data-view-component="true" class="ActionListItem-label">
          Insights
</span>      
</a>
  
</li>
</ul>    
</div></action-list>


</div>
      
</div></anchored-position>  </focus-group>
</action-menu></div>
</nav>
          
        </div>
</header>


      <div hidden="hidden" data-view-component="true" class="js-stale-session-flash stale-session-flash flash flash-warn flash-full">
  
        <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-alert">
    <path d="M6.457 1.047c.659-1.234 2.427-1.234 3.086 0l6.082 11.378A1.75 1.75 0 0 1 14.082 15H1.918a1.75 1.75 0 0 1-1.543-2.575Zm1.763.707a.25.25 0 0 0-.44 0L1.698 13.132a.25.25 0 0 0 .22.368h12.164a.25.25 0 0 0 .22-.368Zm.53 3.996v2.5a.75.75 0 0 1-1.5 0v-2.5a.75.75 0 0 1 1.5 0ZM9 11a1 1 0 1 1-2 0 1 1 0 0 1 2 0Z"></path>
</svg>
        <span class="js-stale-session-flash-signed-in" hidden="">You signed in with another tab or window. <a class="Link--inTextBlock" href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/blob/main/project.c">Reload</a> to refresh your session.</span>
        <span class="js-stale-session-flash-signed-out" hidden="">You signed out in another tab or window. <a class="Link--inTextBlock" href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/blob/main/project.c">Reload</a> to refresh your session.</span>
        <span class="js-stale-session-flash-switched" hidden="">You switched accounts on another tab or window. <a class="Link--inTextBlock" href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/blob/main/project.c">Reload</a> to refresh your session.</span>

    <button id="icon-button-cea37770-e96e-46de-9a1f-df074145b5f4" aria-labelledby="tooltip-16e589ab-0250-486b-ba5c-44ffe8b32186" type="button" data-view-component="true" class="Button Button--iconOnly Button--invisible Button--medium flash-close js-flash-close">  <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x Button-visual">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg>
</button><tool-tip id="tooltip-16e589ab-0250-486b-ba5c-44ffe8b32186" for="icon-button-cea37770-e96e-46de-9a1f-df074145b5f4" popover="manual" data-direction="s" data-type="label" data-view-component="true" class="sr-only position-absolute" aria-hidden="true" role="tooltip"><template shadowrootmode="open"><style>
      :host {
        --tooltip-top: var(--tool-tip-position-top, 0);
        --tooltip-left: var(--tool-tip-position-left, 0);
        padding: var(--overlay-paddingBlock-condensed) var(--overlay-padding-condensed) !important;
        font: var(--text-body-shorthand-small);
        color: var(--tooltip-fgColor, var(--fgColor-onEmphasis)) !important;
        text-align: center;
        text-decoration: none;
        text-shadow: none;
        text-transform: none;
        letter-spacing: normal;
        word-wrap: break-word;
        white-space: pre;
        background: var(--tooltip-bgColor, var(--bgColor-emphasis)) !important;
        border-radius: var(--borderRadius-medium);
        border: 0 !important;
        opacity: 0;
        max-width: var(--overlay-width-small);
        word-wrap: break-word;
        white-space: normal;
        width: max-content !important;
        inset: var(--tooltip-top) auto auto var(--tooltip-left) !important;
        overflow: visible !important;
        text-wrap: balance;
      }

      :host(:is(.tooltip-n, .tooltip-nw, .tooltip-ne)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) - var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(:is(.tooltip-s, .tooltip-sw, .tooltip-se)) {
        --tooltip-top: calc(var(--tool-tip-position-top, 0) + var(--overlay-offset, 0.25rem));
        --tooltip-left: var(--tool-tip-position-left);
      }

      :host(.tooltip-w) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) - var(--overlay-offset, 0.25rem));
      }

      :host(.tooltip-e) {
        --tooltip-top: var(--tool-tip-position-top);
        --tooltip-left: calc(var(--tool-tip-position-left, 0) + var(--overlay-offset, 0.25rem));
      }

      :host:after{
        position: absolute;
        display: block;
        right: 0;
        left: 0;
        height: var(--overlay-offset, 0.25rem);
        content: "";
      }

      :host(.tooltip-s):after,
      :host(.tooltip-se):after,
      :host(.tooltip-sw):after {
        bottom: 100%
      }

      :host(.tooltip-n):after,
      :host(.tooltip-ne):after,
      :host(.tooltip-nw):after {
        top: 100%;
      }

      @keyframes tooltip-appear {
        from {
          opacity: 0;
        }
        to {
          opacity: 1;
        }
      }

      :host(:popover-open),
      :host(:popover-open):before {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      :host(.\:popover-open) {
        animation-name: tooltip-appear;
        animation-duration: .1s;
        animation-fill-mode: forwards;
        animation-timing-function: ease-in;
      }

      @media (forced-colors: active) {
        :host {
          outline: solid 1px transparent;
        }

        :host:before {
          display: none;
        }
      }
    </style><slot></slot></template>Dismiss alert</tool-tip>


  
</div>
          
    </div>

  <div id="start-of-content" class="show-on-focus"></div>








    <div id="js-flash-container" class="flash-container" data-turbo-replace="">




  <template class="js-flash-template"></template>
</div>


    
  <notification-shelf-watcher data-base-url="https://github.com/notifications/beta/shelf" data-channel="eyJjIjoibm90aWZpY2F0aW9uLWNoYW5nZWQ6MTc2MTYyMTEwIiwidCI6MTc0NzQxMzEzNH0=--01842c78b8b0b6e7f994736209821e3fd5fa722dbd8ab87f254963aee7491ca1" data-view-component="true" class="js-socket-channel" data-refresh-delay="500" data-catalyst="" data-throttle-delay="5000"></notification-shelf-watcher>
  <div hidden="" data-initial="" data-target="notification-shelf-watcher.placeholder"></div>






  <div class="application-main " data-commit-hovercards-enabled="" data-discussion-hovercards-enabled="" data-issue-and-pr-hovercards-enabled="" data-project-hovercards-enabled="">
        <div itemscope="" itemtype="http://schema.org/SoftwareSourceCode" class="">
    <main id="js-repo-pjax-container">
      
      






    
  <div id="repository-container-header" data-turbo-replace="" hidden=""></div>




<turbo-frame id="repo-content-turbo-frame" target="_top" data-turbo-action="advance" class="">
    <div id="repo-content-pjax-container" class="repository-content ">
      <a href="https://github.dev/" class="d-none js-github-dev-shortcut" data-hotkey=".,Mod+Alt+.">Open in github.dev</a>
  <a href="https://github.dev/" class="d-none js-github-dev-new-tab-shortcut" data-hotkey="Shift+.,Shift+&gt;,&gt;" target="_blank" rel="noopener noreferrer">Open in a new github.dev tab</a>
    <a class="d-none" data-hotkey=",,Mod+Alt+," target="_blank" href="https://github.com/codespaces/new/AnimeshSatyapragyanPatra/ExamSystem/tree/main?resume=1">Open in codespace</a>




    
      
    








<react-app app-name="react-code-view" initial-path="/AnimeshSatyapragyanPatra/ExamSystem/blob/main/README.md" style="display: block; min-height: calc(100vh - 64px);" data-attempted-ssr="true" data-ssr="true" data-lazy="false" data-alternate="false" data-data-router-enabled="false" data-catalyst="" class="loaded">
  
  <script type="application/json" data-target="react-app.embeddedData">{"payload":{"allShortcutsEnabled":true,"fileTree":{"":{"items":[{"name":"README.md","path":"README.md","contentType":"file"},{"name":"client.c","path":"client.c","contentType":"file"},{"name":"info.txt","path":"info.txt","contentType":"file"},{"name":"instructor_dtls.txt","path":"instructor_dtls.txt","contentType":"file"},{"name":"project","path":"project","contentType":"file"},{"name":"project.c","path":"project.c","contentType":"file"},{"name":"questions_with_difficulty.txt","path":"questions_with_difficulty.txt","contentType":"file"},{"name":"results.txt","path":"results.txt","contentType":"file"},{"name":"rules.txt","path":"rules.txt","contentType":"file"},{"name":"server.c","path":"server.c","contentType":"file"},{"name":"student_dtls.txt","path":"student_dtls.txt","contentType":"file"}],"totalCount":11}},"fileTreeProcessingTime":2.427238,"foldersToFetch":[],"incompleteFileTree":false,"repo":{"id":984055845,"defaultBranch":"main","name":"ExamSystem","ownerLogin":"AnimeshSatyapragyanPatra","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2025-05-15T15:55:54.000+05:30","ownerAvatar":"https://avatars.githubusercontent.com/u/156192085?v=4","public":true,"private":false,"isOrgOwned":false},"codeLineWrapEnabled":false,"symbolsExpanded":true,"treeExpanded":true,"refInfo":{"name":"main","listCacheKey":"v0:1747304754.0","canEdit":true,"refType":"branch","currentOid":"8ca40bcbdfbe45a48440c6c24a0a2d01ee8f87d1"},"path":"README.md","currentUser":{"id":176162110,"login":"sahelidgp","userEmail":"sm.23cs8107@nitdgp.ac.in"},"blob":{"rawLines":null,"stylingDirectives":null,"colorizedLines":null,"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/AnimeshSatyapragyanPatra/ExamSystem/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":false},"displayName":"README.md","displayUrl":"https://github.com/AnimeshSatyapragyanPatra/ExamSystem/blob/main/README.md?raw=true","headerInfo":{"blobSize":"1.76 KB","deleteTooltip":"Fork this repository and delete the file","editTooltip":"Fork this repository and edit the file","ghDesktopPath":"https://desktop.github.com","isGitLfs":false,"onBranch":true,"shortPath":"6e9f4be","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2FAnimeshSatyapragyanPatra%2FExamSystem%2Fblob%2Fmain%2FREADME.md","isCSV":false,"isRichtext":true,"toc":[{"level":1,"text":"📝 ExamSphere – Terminal-Based Digital Examination System","anchor":"-examsphere--terminal-based-digital-examination-system","htmlText":"📝 ExamSphere – Terminal-Based Digital Examination System"},{"level":2,"text":"🚀 Features","anchor":"-features","htmlText":"🚀 Features"},{"level":2,"text":"🧱 Components","anchor":"-components","htmlText":"🧱 Components"},{"level":2,"text":"🔧 How It Works","anchor":"-how-it-works","htmlText":"🔧 How It Works"},{"level":2,"text":"🖥️ Requirements","anchor":"️-requirements","htmlText":"🖥️ Requirements"}],"lineInfo":{"truncatedLoc":"39","truncatedSloc":"29"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplate":null,"discussionTemplate":null,"language":"Markdown","languageID":222,"large":false,"planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/AnimeshSatyapragyanPatra/ExamSystem/blob/main/README.md","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","releasePath":"/AnimeshSatyapragyanPatra/ExamSystem/releases/new?marketplace=true","showPublishActionBanner":false},"rawBlobUrl":"https://github.com/AnimeshSatyapragyanPatra/ExamSystem/raw/refs/heads/main/README.md","renderImageOrRaw":false,"richText":"\u003carticle class=\"markdown-body entry-content container-lg\" itemprop=\"text\"\u003e\u003cdiv class=\"markdown-heading\" dir=\"auto\"\u003e\u003ch1 tabindex=\"-1\" class=\"heading-element\" dir=\"auto\"\u003e📝 ExamSphere – Terminal-Based Digital Examination System\u003c/h1\u003e\u003ca id=\"user-content--examsphere--terminal-based-digital-examination-system\" class=\"anchor\" aria-label=\"Permalink: 📝 ExamSphere – Terminal-Based Digital Examination System\" href=\"#-examsphere--terminal-based-digital-examination-system\"\u003e\u003csvg class=\"octicon octicon-link\" viewBox=\"0 0 16 16\" version=\"1.1\" width=\"16\" height=\"16\" aria-hidden=\"true\"\u003e\u003cpath d=\"m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z\"\u003e\u003c/path\u003e\u003c/svg\u003e\u003c/a\u003e\u003c/div\u003e\n\u003cp dir=\"auto\"\u003e\u003cstrong\u003eExamSphere\u003c/strong\u003e is a C language-based digital examination platform that runs through the terminal. Designed with a client-server architecture, it ensures secure, efficient, and fair assessments for both students and instructors.\u003c/p\u003e\n\u003cdiv class=\"markdown-heading\" dir=\"auto\"\u003e\u003ch2 tabindex=\"-1\" class=\"heading-element\" dir=\"auto\"\u003e🚀 Features\u003c/h2\u003e\u003ca id=\"user-content--features\" class=\"anchor\" aria-label=\"Permalink: 🚀 Features\" href=\"#-features\"\u003e\u003csvg class=\"octicon octicon-link\" viewBox=\"0 0 16 16\" version=\"1.1\" width=\"16\" height=\"16\" aria-hidden=\"true\"\u003e\u003cpath d=\"m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z\"\u003e\u003c/path\u003e\u003c/svg\u003e\u003c/a\u003e\u003c/div\u003e\n\u003cul dir=\"auto\"\u003e\n\u003cli\u003e✅ \u003cstrong\u003eBuilt with C\u003c/strong\u003e – Lightweight and fast.\u003c/li\u003e\n\u003cli\u003e🌐 \u003cstrong\u003eClient-Server Architecture\u003c/strong\u003e – Mimics real-world exam systems.\u003c/li\u003e\n\u003cli\u003e👨‍🏫 \u003cstrong\u003eInstructor Access\u003c/strong\u003e – Special privileges for managing exams.\u003c/li\u003e\n\u003cli\u003e❌ \u003cstrong\u003eAnti-Cheating System\u003c/strong\u003e – Flags suspicious activity automatically.\u003c/li\u003e\n\u003cli\u003e📁 \u003cstrong\u003eStructured Data Files\u003c/strong\u003e – Clean management of students, questions, and results.\u003c/li\u003e\n\u003c/ul\u003e\n\u003cdiv class=\"markdown-heading\" dir=\"auto\"\u003e\u003ch2 tabindex=\"-1\" class=\"heading-element\" dir=\"auto\"\u003e🧱 Components\u003c/h2\u003e\u003ca id=\"user-content--components\" class=\"anchor\" aria-label=\"Permalink: 🧱 Components\" href=\"#-components\"\u003e\u003csvg class=\"octicon octicon-link\" viewBox=\"0 0 16 16\" version=\"1.1\" width=\"16\" height=\"16\" aria-hidden=\"true\"\u003e\u003cpath d=\"m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z\"\u003e\u003c/path\u003e\u003c/svg\u003e\u003c/a\u003e\u003c/div\u003e\n\u003cmarkdown-accessiblity-table\u003e\u003ctable\u003e\n\u003cthead\u003e\n\u003ctr\u003e\n\u003cth\u003eFile / Module\u003c/th\u003e\n\u003cth\u003eDescription\u003c/th\u003e\n\u003c/tr\u003e\n\u003c/thead\u003e\n\u003ctbody\u003e\n\u003ctr\u003e\n\u003ctd\u003e\u003ccode\u003estudent_dtls.txt\u003c/code\u003e\u003c/td\u003e\n\u003ctd\u003eStores student login and identity details\u003c/td\u003e\n\u003c/tr\u003e\n\u003ctr\u003e\n\u003ctd\u003e\u003ccode\u003einstructor_dtls.txt\u003c/code\u003e\u003c/td\u003e\n\u003ctd\u003eInstructor credentials and permissions\u003c/td\u003e\n\u003c/tr\u003e\n\u003ctr\u003e\n\u003ctd\u003e\u003ccode\u003equestions.txt\u003c/code\u003e\u003c/td\u003e\n\u003ctd\u003eInstructor-defined exam questions\u003c/td\u003e\n\u003c/tr\u003e\n\u003ctr\u003e\n\u003ctd\u003e\u003ccode\u003erules.txt\u003c/code\u003e\u003c/td\u003e\n\u003ctd\u003eExam guidelines visible to all\u003c/td\u003e\n\u003c/tr\u003e\n\u003ctr\u003e\n\u003ctd\u003e\u003ccode\u003eresult.txt\u003c/code\u003e\u003c/td\u003e\n\u003ctd\u003eAuto-generated after exam submission\u003c/td\u003e\n\u003c/tr\u003e\n\u003ctr\u003e\n\u003ctd\u003e\u003ccode\u003eclient.c\u003c/code\u003e\u003c/td\u003e\n\u003ctd\u003eClient-side code for student/instructor\u003c/td\u003e\n\u003c/tr\u003e\n\u003ctr\u003e\n\u003ctd\u003e\u003ccode\u003eserver.c\u003c/code\u003e\u003c/td\u003e\n\u003ctd\u003eServer-side code to handle requests\u003c/td\u003e\n\u003c/tr\u003e\n\u003c/tbody\u003e\n\u003c/table\u003e\u003c/markdown-accessiblity-table\u003e\n\u003cdiv class=\"markdown-heading\" dir=\"auto\"\u003e\u003ch2 tabindex=\"-1\" class=\"heading-element\" dir=\"auto\"\u003e🔧 How It Works\u003c/h2\u003e\u003ca id=\"user-content--how-it-works\" class=\"anchor\" aria-label=\"Permalink: 🔧 How It Works\" href=\"#-how-it-works\"\u003e\u003csvg class=\"octicon octicon-link\" viewBox=\"0 0 16 16\" version=\"1.1\" width=\"16\" height=\"16\" aria-hidden=\"true\"\u003e\u003cpath d=\"m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z\"\u003e\u003c/path\u003e\u003c/svg\u003e\u003c/a\u003e\u003c/div\u003e\n\u003col dir=\"auto\"\u003e\n\u003cli\u003e\u003cstrong\u003eServer\u003c/strong\u003e initializes and listens for connections.\u003c/li\u003e\n\u003cli\u003e\u003cstrong\u003eClient\u003c/strong\u003e connects from terminal (student/instructor).\u003c/li\u003e\n\u003cli\u003eBased on role:\n\u003cul dir=\"auto\"\u003e\n\u003cli\u003e\u003cstrong\u003eInstructor\u003c/strong\u003e can add/view questions, rules, and results.\u003c/li\u003e\n\u003cli\u003e\u003cstrong\u003eStudent\u003c/strong\u003e can read rules, attend exam, and view result.\u003c/li\u003e\n\u003c/ul\u003e\n\u003c/li\u003e\n\u003cli\u003eCheating attempts are monitored and flagged.\u003c/li\u003e\n\u003c/ol\u003e\n\u003cdiv class=\"markdown-heading\" dir=\"auto\"\u003e\u003ch2 tabindex=\"-1\" class=\"heading-element\" dir=\"auto\"\u003e🖥️ Requirements\u003c/h2\u003e\u003ca id=\"user-content-️-requirements\" class=\"anchor\" aria-label=\"Permalink: 🖥️ Requirements\" href=\"#️-requirements\"\u003e\u003csvg class=\"octicon octicon-link\" viewBox=\"0 0 16 16\" version=\"1.1\" width=\"16\" height=\"16\" aria-hidden=\"true\"\u003e\u003cpath d=\"m7.775 3.275 1.25-1.25a3.5 3.5 0 1 1 4.95 4.95l-2.5 2.5a3.5 3.5 0 0 1-4.95 0 .751.751 0 0 1 .018-1.042.751.751 0 0 1 1.042-.018 1.998 1.998 0 0 0 2.83 0l2.5-2.5a2.002 2.002 0 0 0-2.83-2.83l-1.25 1.25a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042Zm-4.69 9.64a1.998 1.998 0 0 0 2.83 0l1.25-1.25a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042l-1.25 1.25a3.5 3.5 0 1 1-4.95-4.95l2.5-2.5a3.5 3.5 0 0 1 4.95 0 .751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018 1.998 1.998 0 0 0-2.83 0l-2.5 2.5a1.998 1.998 0 0 0 0 2.83Z\"\u003e\u003c/path\u003e\u003c/svg\u003e\u003c/a\u003e\u003c/div\u003e\n\u003cul dir=\"auto\"\u003e\n\u003cli\u003eGCC Compiler\u003c/li\u003e\n\u003cli\u003eLinux OS (recommended)\u003c/li\u003e\n\u003cli\u003eBasic terminal knowledge\u003c/li\u003e\n\u003c/ul\u003e\n\u003c/article\u003e","renderedFileInfo":null,"shortPath":null,"symbolsEnabled":true,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timed_out":false,"not_analyzed":false,"symbols":[{"name":"📝 ExamSphere – Terminal-Based Digital Examination System","kind":"section_1","ident_start":2,"ident_end":63,"extent_start":0,"extent_end":1801,"fully_qualified_name":"📝 ExamSphere – Terminal-Based Digital Examination System","ident_utf16":{"start":{"line_number":0,"utf16_col":2},"end":{"line_number":0,"utf16_col":59}},"extent_utf16":{"start":{"line_number":0,"utf16_col":0},"end":{"line_number":39,"utf16_col":0}}},{"name":"🚀 Features","kind":"section_2","ident_start":297,"ident_end":310,"extent_start":294,"extent_end":682,"fully_qualified_name":"🚀 Features","ident_utf16":{"start":{"line_number":4,"utf16_col":3},"end":{"line_number":4,"utf16_col":14}},"extent_utf16":{"start":{"line_number":4,"utf16_col":0},"end":{"line_number":12,"utf16_col":0}}},{"name":"🧱 Components","kind":"section_2","ident_start":685,"ident_end":700,"extent_start":682,"extent_end":1378,"fully_qualified_name":"🧱 Components","ident_utf16":{"start":{"line_number":12,"utf16_col":3},"end":{"line_number":12,"utf16_col":16}},"extent_utf16":{"start":{"line_number":12,"utf16_col":0},"end":{"line_number":24,"utf16_col":0}}},{"name":"🔧 How It Works","kind":"section_2","ident_start":1381,"ident_end":1398,"extent_start":1378,"extent_end":1708,"fully_qualified_name":"🔧 How It Works","ident_utf16":{"start":{"line_number":24,"utf16_col":3},"end":{"line_number":24,"utf16_col":18}},"extent_utf16":{"start":{"line_number":24,"utf16_col":0},"end":{"line_number":33,"utf16_col":0}}},{"name":"🖥️ Requirements","kind":"section_2","ident_start":1711,"ident_end":1731,"extent_start":1708,"extent_end":1801,"fully_qualified_name":"🖥️ Requirements","ident_utf16":{"start":{"line_number":33,"utf16_col":3},"end":{"line_number":33,"utf16_col":19}},"extent_utf16":{"start":{"line_number":33,"utf16_col":0},"end":{"line_number":39,"utf16_col":0}}}]}},"copilotInfo":{"documentationUrl":"https://docs.github.com/copilot/overview-of-github-copilot/about-github-copilot-for-individuals","notices":{"codeViewPopover":{"dismissed":false,"dismissPath":"/settings/dismiss-notice/code_view_copilot_popover"}},"userAccess":{"hasSubscriptionEnded":false,"orgHasCFBAccess":false,"userHasCFIAccess":false,"userHasOrgs":false,"userIsOrgAdmin":false,"userIsOrgMember":false,"business":null,"featureRequestInfo":null}},"copilotAccessAllowed":false,"modelsAccessAllowed":false,"modelsRepoIntegrationEnabled":false,"csrf_tokens":{"/AnimeshSatyapragyanPatra/ExamSystem/branches":{"post":"RgwZAYR15r6rTsr4elGa2aAXy8NF52AQoOhbmxcUsf0DZD4Q0_U6wkrquUk7B-oEyWs9255758aYhgGBPUrvsg"},"/repos/preferences":{"post":"R1jz7kad9_qVjU_eoas4LzTVrSkjHRSYBVlPoc8MROrttE4-XHObKL-ezTgvRhMSbFPLJVmJM0I0XqNEYP39jQ"}}},"title":"ExamSystem/README.md at main · AnimeshSatyapragyanPatra/ExamSystem","appPayload":{"helpUrl":"https://docs.github.com","findFileWorkerPath":"/assets-cdn/worker/find-file-worker-263cab1760dd.js","findInFileWorkerPath":"/assets-cdn/worker/find-in-file-worker-2e7f7047116e.js","githubDevUrl":"https://github.dev/","enabled_features":{"code_nav_ui_events":false,"react_blob_overlay":true,"accessible_code_button":true,"github_models_repo_integration":false}}}</script>
  <div data-target="react-app.reactRoot"><meta data-hydrostats="publish"> <!-- --> <!-- --> <button hidden="" data-testid="header-permalink-button" data-hotkey-scope="read-only-cursor-text-area" data-hotkey="y,Shift+Y"></button><button hidden="" data-hotkey="y,Shift+Y"></button><div><div style="--sticky-pane-height: calc(100vh - (max(104px, 0px))); --spacing: var(--spacing-none);" class="Box-sc-g0xbh4-0 prc-PageLayout-PageLayoutRoot-1zlEO"><div class="prc-PageLayout-PageLayoutWrapper-s2ao4" data-width="full"><div class="prc-PageLayout-PageLayoutContent-jzDMn"><div tabindex="0" class="Box-sc-g0xbh4-0 gISSDQ"><div class="Box-sc-g0xbh4-0 prc-PageLayout-PaneWrapper-nGO0U ReposFileTreePane-module__Pane--wS7IV ReposFileTreePane-module__HidePane--Gj4XZ" style="--offset-header:0px;--spacing-row:var(--spacing-none);--spacing-column:var(--spacing-none)" data-is-hidden="false" data-position="start" data-sticky="true"><div class="Box-sc-g0xbh4-0 prc-PageLayout-HorizontalDivider-CYLp5 prc-PageLayout-PaneHorizontalDivider-4exOb" data-variant="none" data-position="start" style="--spacing-divider:var(--spacing-none);--spacing:var(--spacing-none)"></div><div class="prc-PageLayout-Pane-Vl5LI" data-resizable="true" style="--spacing:var(--spacing-none);--pane-min-width:256px;--pane-max-width:calc(100vw - var(--pane-max-width-diff));--pane-width-size:var(--pane-width-large);--pane-width:320px"><div><div id="repos-file-tree" class="Box-sc-g0xbh4-0 bNhwaa"><div class="Box-sc-g0xbh4-0 hNNCwk"><div class="Box-sc-g0xbh4-0 jfIeyl"><h2 class="Box-sc-g0xbh4-0 XosP prc-Heading-Heading-6CmGO"><span role="tooltip" aria-label="Collapse file tree" id="expand-button-file-tree-button" class="Tooltip__TooltipBase-sc-17tf59c-0 fiSvBN tooltipped-se"><button data-component="IconButton" type="button" data-testid="collapse-file-tree-button" aria-expanded="true" aria-controls="repos-file-tree" data-analytics-opt-out="true" class="prc-Button-ButtonBase-c50BI position-relative ExpandFileTreeButton-module__expandButton--gL4is fgColor-muted prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="invisible" aria-describedby=":R356mplab:-loading-announcement" aria-labelledby="expand-button-file-tree-button" data-hotkey="Control+b" fdprocessedid="292jh"><svg aria-hidden="true" focusable="false" class="octicon octicon-sidebar-expand" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align:text-bottom"><path d="m4.177 7.823 2.396-2.396A.25.25 0 0 1 7 5.604v4.792a.25.25 0 0 1-.427.177L4.177 8.177a.25.25 0 0 1 0-.354Z"></path><path d="M0 1.75C0 .784.784 0 1.75 0h12.5C15.216 0 16 .784 16 1.75v12.5A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25H9.5v-13Zm12.5 13a.25.25 0 0 0 .25-.25V1.75a.25.25 0 0 0-.25-.25H11v13Z"></path></svg></button></span><button hidden="" data-testid="" data-hotkey-scope="read-only-cursor-text-area" data-hotkey="Control+b"></button></h2><h2 class="Box-sc-g0xbh4-0 kOkWgo prc-Heading-Heading-6CmGO">Files</h2></div><div class="Box-sc-g0xbh4-0 lhbroM"><div class="Box-sc-g0xbh4-0 khzwtX"><button type="button" aria-haspopup="true" aria-expanded="false" tabindex="0" aria-label="main branch" data-testid="anchor-button" class="Box-sc-g0xbh4-0 JMXqM prc-Button-ButtonBase-c50BI react-repos-tree-pane-ref-selector width-full ref-selector-class" data-loading="false" data-size="medium" data-variant="default" aria-describedby="branch-picker-repos-header-ref-selector-loading-announcement" id="branch-picker-repos-header-ref-selector" data-hotkey="w" fdprocessedid="y55nz"><span data-component="buttonContent" class="Box-sc-g0xbh4-0 gUkoLg prc-Button-ButtonContent-HKbr-"><span data-component="text" class="prc-Button-Label-pTQ3x"><div class="Box-sc-g0xbh4-0 bZBlpz"><div class="Box-sc-g0xbh4-0 bJjzmO"><svg aria-hidden="true" focusable="false" class="octicon octicon-git-branch" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align:text-bottom"><path d="M9.5 3.25a2.25 2.25 0 1 1 3 2.122V6A2.5 2.5 0 0 1 10 8.5H6a1 1 0 0 0-1 1v1.128a2.251 2.251 0 1 1-1.5 0V5.372a2.25 2.25 0 1 1 1.5 0v1.836A2.493 2.493 0 0 1 6 7h4a1 1 0 0 0 1-1v-.628A2.25 2.25 0 0 1 9.5 3.25Zm-6 0a.75.75 0 1 0 1.5 0 .75.75 0 0 0-1.5 0Zm8.25-.75a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5ZM4.25 12a.75.75 0 1 0 0 1.5.75.75 0 0 0 0-1.5Z"></path></svg></div><div class="Box-sc-g0xbh4-0 ffLUq ref-selector-button-text-container"><span class="Box-sc-g0xbh4-0 bmcJak prc-Text-Text-0ima0">&nbsp;<!-- -->main</span></div></div></span><span data-component="trailingVisual" class="prc-Button-Visual-2epfX prc-Button-VisualWrap-Db-eB"><svg aria-hidden="true" focusable="false" class="octicon octicon-triangle-down" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align:text-bottom"><path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path></svg></span></span></button><button hidden="" data-hotkey-scope="read-only-cursor-text-area" data-hotkey="w"></button></div><div class="Box-sc-g0xbh4-0 eTeVqd"><a sx="[object Object]" data-component="IconButton" type="button" aria-label="Add file" class="Box-sc-g0xbh4-0 jNHrPP prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="default" aria-describedby=":R6q6mplab:-loading-announcement :Rq6mplab:" href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/new/main"><svg aria-hidden="true" focusable="false" class="octicon octicon-plus" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align:text-bottom"><path d="M7.75 2a.75.75 0 0 1 .75.75V7h4.25a.75.75 0 0 1 0 1.5H8.5v4.25a.75.75 0 0 1-1.5 0V8.5H2.75a.75.75 0 0 1 0-1.5H7V2.75A.75.75 0 0 1 7.75 2Z"></path></svg></a><span class="prc-TooltipV2-Tooltip-cYMVY" data-direction="s" aria-label="Add file" role="tooltip" aria-hidden="true" id=":Rq6mplab:" popover="auto">Add file</span><button data-component="IconButton" type="button" aria-label="Search this repository" class="Box-sc-g0xbh4-0 ijefGF prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="default" aria-describedby=":R3a6mplab:-loading-announcement" data-hotkey="/" fdprocessedid="16i0l"><svg aria-hidden="true" focusable="false" class="octicon octicon-search" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align:text-bottom"><path d="M10.68 11.74a6 6 0 0 1-7.922-8.982 6 6 0 0 1 8.982 7.922l3.04 3.04a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215ZM11.5 7a4.499 4.499 0 1 0-8.997 0A4.499 4.499 0 0 0 11.5 7Z"></path></svg></button><button hidden="" data-testid="" data-hotkey-scope="read-only-cursor-text-area" data-hotkey="/"></button></div></div></div><div class="Box-sc-g0xbh4-0 qkmJR"><span class="Box-sc-g0xbh4-0 vcvyP TextInput-wrapper prc-components-TextInputWrapper-i1ofR prc-components-TextInputBaseWrapper-ueK9q" data-leading-visual="true" data-trailing-visual="true" aria-busy="false"><span class="TextInput-icon" id=":R5amplab:" aria-hidden="true"><svg aria-hidden="true" focusable="false" class="octicon octicon-search" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align:text-bottom"><path d="M10.68 11.74a6 6 0 0 1-7.922-8.982 6 6 0 0 1 8.982 7.922l3.04 3.04a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215ZM11.5 7a4.499 4.499 0 1 0-8.997 0A4.499 4.499 0 0 0 11.5 7Z"></path></svg></span><input type="text" aria-label="Go to file" role="combobox" aria-controls="file-results-list" aria-expanded="false" aria-haspopup="dialog" autocorrect="off" spellcheck="false" placeholder="Go to file" aria-describedby=":R5amplab: :R5amplabH1:" data-component="input" class="prc-components-Input-Ic-y8" value="" fdprocessedid="itr4fo"><span class="TextInput-icon" id=":R5amplabH1:" aria-hidden="true"><div class="Box-sc-g0xbh4-0 dItACB"><kbd>t</kbd></div></span></span></div><button hidden="" data-testid="" data-hotkey-scope="read-only-cursor-text-area" data-hotkey="t,Shift+T"></button><button hidden="" data-hotkey="t,Shift+T"></button><div class="Box-sc-g0xbh4-0 jbQqON"><div><div class="react-tree-show-tree-items"><div class="Box-sc-g0xbh4-0 cOxzdh" data-testid="repos-file-tree-container"><nav aria-label="File Tree Navigation"><span role="status" aria-live="polite" aria-atomic="true" class="_VisuallyHidden__VisuallyHidden-sc-11jhm7a-0 brGdpi"></span><ul role="tree" aria-label="Files" data-truncate-text="true" class="prc-TreeView-TreeViewRootUlStyles-eZtxW"><li class="PRIVATE_TreeView-item prc-TreeView-TreeViewItem-ShJr0" tabindex="-1" id="README.md-item" role="treeitem" aria-labelledby=":r0:" aria-describedby=":r1:" aria-level="1" aria-selected="false"><div class="PRIVATE_TreeView-item-container prc-TreeView-TreeViewItemContainer--2Rkn" style="--level: 1; content-visibility: auto; contain-intrinsic-size: auto 2rem;"><div style="grid-area: spacer; display: flex;"><div style="width: 100%; display: flex;"></div></div><div id=":r0:" class="PRIVATE_TreeView-item-content prc-TreeView-TreeViewItemContent-f0r0b"><div class="PRIVATE_VisuallyHidden prc-TreeView-TreeViewVisuallyHidden-4-mPv" aria-hidden="true" id=":r1:"></div><div class="PRIVATE_TreeView-item-visual prc-TreeView-TreeViewItemVisual-dRlGq" aria-hidden="true"><svg aria-hidden="true" focusable="false" class="octicon octicon-file" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg></div><span class="PRIVATE_TreeView-item-content-text prc-TreeView-TreeViewItemContentText-smZM-"><span>README.md</span></span></div></div></li><li class="PRIVATE_TreeView-item prc-TreeView-TreeViewItem-ShJr0" tabindex="-1" id="client.c-item" role="treeitem" aria-labelledby=":r3:" aria-describedby=":r4:" aria-level="1" aria-selected="false"><div class="PRIVATE_TreeView-item-container prc-TreeView-TreeViewItemContainer--2Rkn" style="--level: 1; content-visibility: auto; contain-intrinsic-size: auto 2rem;"><div style="grid-area: spacer; display: flex;"><div style="width: 100%; display: flex;"></div></div><div id=":r3:" class="PRIVATE_TreeView-item-content prc-TreeView-TreeViewItemContent-f0r0b"><div class="PRIVATE_VisuallyHidden prc-TreeView-TreeViewVisuallyHidden-4-mPv" aria-hidden="true" id=":r4:"></div><div class="PRIVATE_TreeView-item-visual prc-TreeView-TreeViewItemVisual-dRlGq" aria-hidden="true"><svg aria-hidden="true" focusable="false" class="octicon octicon-file" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg></div><span class="PRIVATE_TreeView-item-content-text prc-TreeView-TreeViewItemContentText-smZM-"><span>client.c</span></span></div></div></li><li class="PRIVATE_TreeView-item prc-TreeView-TreeViewItem-ShJr0" tabindex="-1" id="info.txt-item" role="treeitem" aria-labelledby=":r6:" aria-describedby=":r7:" aria-level="1" aria-selected="false"><div class="PRIVATE_TreeView-item-container prc-TreeView-TreeViewItemContainer--2Rkn" style="--level: 1; content-visibility: auto; contain-intrinsic-size: auto 2rem;"><div style="grid-area: spacer; display: flex;"><div style="width: 100%; display: flex;"></div></div><div id=":r6:" class="PRIVATE_TreeView-item-content prc-TreeView-TreeViewItemContent-f0r0b"><div class="PRIVATE_VisuallyHidden prc-TreeView-TreeViewVisuallyHidden-4-mPv" aria-hidden="true" id=":r7:"></div><div class="PRIVATE_TreeView-item-visual prc-TreeView-TreeViewItemVisual-dRlGq" aria-hidden="true"><svg aria-hidden="true" focusable="false" class="octicon octicon-file" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg></div><span class="PRIVATE_TreeView-item-content-text prc-TreeView-TreeViewItemContentText-smZM-"><span>info.txt</span></span></div></div></li><li class="PRIVATE_TreeView-item prc-TreeView-TreeViewItem-ShJr0" tabindex="0" id="instructor_dtls.txt-item" role="treeitem" aria-labelledby=":r9:" aria-describedby=":ra:" aria-level="1" aria-selected="false"><div class="PRIVATE_TreeView-item-container prc-TreeView-TreeViewItemContainer--2Rkn" style="--level: 1; content-visibility: auto; contain-intrinsic-size: auto 2rem;"><div style="grid-area: spacer; display: flex;"><div style="width: 100%; display: flex;"></div></div><div id=":r9:" class="PRIVATE_TreeView-item-content prc-TreeView-TreeViewItemContent-f0r0b"><div class="PRIVATE_VisuallyHidden prc-TreeView-TreeViewVisuallyHidden-4-mPv" aria-hidden="true" id=":ra:"></div><div class="PRIVATE_TreeView-item-visual prc-TreeView-TreeViewItemVisual-dRlGq" aria-hidden="true"><svg aria-hidden="true" focusable="false" class="octicon octicon-file" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg></div><span class="PRIVATE_TreeView-item-content-text prc-TreeView-TreeViewItemContentText-smZM-"><span>instructor_dtls.txt</span></span></div></div></li><li class="PRIVATE_TreeView-item prc-TreeView-TreeViewItem-ShJr0" tabindex="-1" id="project-item" role="treeitem" aria-labelledby=":rc:" aria-describedby=":rd:" aria-level="1" aria-selected="false"><div class="PRIVATE_TreeView-item-container prc-TreeView-TreeViewItemContainer--2Rkn" style="--level: 1; content-visibility: auto; contain-intrinsic-size: auto 2rem;"><div style="grid-area: spacer; display: flex;"><div style="width: 100%; display: flex;"></div></div><div id=":rc:" class="PRIVATE_TreeView-item-content prc-TreeView-TreeViewItemContent-f0r0b"><div class="PRIVATE_VisuallyHidden prc-TreeView-TreeViewVisuallyHidden-4-mPv" aria-hidden="true" id=":rd:"></div><div class="PRIVATE_TreeView-item-visual prc-TreeView-TreeViewItemVisual-dRlGq" aria-hidden="true"><svg aria-hidden="true" focusable="false" class="octicon octicon-file" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg></div><span class="PRIVATE_TreeView-item-content-text prc-TreeView-TreeViewItemContentText-smZM-"><span>project</span></span></div></div></li><li class="PRIVATE_TreeView-item prc-TreeView-TreeViewItem-ShJr0" tabindex="-1" id="project.c-item" role="treeitem" aria-labelledby=":rf:" aria-describedby=":rg:" aria-level="1" aria-selected="false" aria-current="true"><div class="PRIVATE_TreeView-item-container prc-TreeView-TreeViewItemContainer--2Rkn" style="--level: 1;"><div style="grid-area: spacer; display: flex;"><div style="width: 100%; display: flex;"></div></div><div id=":rf:" class="PRIVATE_TreeView-item-content prc-TreeView-TreeViewItemContent-f0r0b"><div class="PRIVATE_VisuallyHidden prc-TreeView-TreeViewVisuallyHidden-4-mPv" aria-hidden="true" id=":rg:"></div><div class="PRIVATE_TreeView-item-visual prc-TreeView-TreeViewItemVisual-dRlGq" aria-hidden="true"><svg aria-hidden="true" focusable="false" class="octicon octicon-file" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg></div><span class="PRIVATE_TreeView-item-content-text prc-TreeView-TreeViewItemContentText-smZM-"><span>project.c</span></span></div></div></li><li class="PRIVATE_TreeView-item prc-TreeView-TreeViewItem-ShJr0" tabindex="-1" id="questions_with_difficulty.txt-item" role="treeitem" aria-labelledby=":ri:" aria-describedby=":rj:" aria-level="1" aria-selected="false"><div class="PRIVATE_TreeView-item-container prc-TreeView-TreeViewItemContainer--2Rkn" style="--level: 1; content-visibility: auto; contain-intrinsic-size: auto 2rem;"><div style="grid-area: spacer; display: flex;"><div style="width: 100%; display: flex;"></div></div><div id=":ri:" class="PRIVATE_TreeView-item-content prc-TreeView-TreeViewItemContent-f0r0b"><div class="PRIVATE_VisuallyHidden prc-TreeView-TreeViewVisuallyHidden-4-mPv" aria-hidden="true" id=":rj:"></div><div class="PRIVATE_TreeView-item-visual prc-TreeView-TreeViewItemVisual-dRlGq" aria-hidden="true"><svg aria-hidden="true" focusable="false" class="octicon octicon-file" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg></div><span class="PRIVATE_TreeView-item-content-text prc-TreeView-TreeViewItemContentText-smZM-"><span>questions_with_difficulty.txt</span></span></div></div></li><li class="PRIVATE_TreeView-item prc-TreeView-TreeViewItem-ShJr0" tabindex="-1" id="results.txt-item" role="treeitem" aria-labelledby=":rl:" aria-describedby=":rm:" aria-level="1" aria-selected="false"><div class="PRIVATE_TreeView-item-container prc-TreeView-TreeViewItemContainer--2Rkn" style="--level: 1; content-visibility: auto; contain-intrinsic-size: auto 2rem;"><div style="grid-area: spacer; display: flex;"><div style="width: 100%; display: flex;"></div></div><div id=":rl:" class="PRIVATE_TreeView-item-content prc-TreeView-TreeViewItemContent-f0r0b"><div class="PRIVATE_VisuallyHidden prc-TreeView-TreeViewVisuallyHidden-4-mPv" aria-hidden="true" id=":rm:"></div><div class="PRIVATE_TreeView-item-visual prc-TreeView-TreeViewItemVisual-dRlGq" aria-hidden="true"><svg aria-hidden="true" focusable="false" class="octicon octicon-file" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg></div><span class="PRIVATE_TreeView-item-content-text prc-TreeView-TreeViewItemContentText-smZM-"><span>results.txt</span></span></div></div></li><li class="PRIVATE_TreeView-item prc-TreeView-TreeViewItem-ShJr0" tabindex="-1" id="rules.txt-item" role="treeitem" aria-labelledby=":ro:" aria-describedby=":rp:" aria-level="1" aria-selected="false"><div class="PRIVATE_TreeView-item-container prc-TreeView-TreeViewItemContainer--2Rkn" style="--level: 1; content-visibility: auto; contain-intrinsic-size: auto 2rem;"><div style="grid-area: spacer; display: flex;"><div style="width: 100%; display: flex;"></div></div><div id=":ro:" class="PRIVATE_TreeView-item-content prc-TreeView-TreeViewItemContent-f0r0b"><div class="PRIVATE_VisuallyHidden prc-TreeView-TreeViewVisuallyHidden-4-mPv" aria-hidden="true" id=":rp:"></div><div class="PRIVATE_TreeView-item-visual prc-TreeView-TreeViewItemVisual-dRlGq" aria-hidden="true"><svg aria-hidden="true" focusable="false" class="octicon octicon-file" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg></div><span class="PRIVATE_TreeView-item-content-text prc-TreeView-TreeViewItemContentText-smZM-"><span>rules.txt</span></span></div></div></li><li class="PRIVATE_TreeView-item prc-TreeView-TreeViewItem-ShJr0" tabindex="-1" id="server.c-item" role="treeitem" aria-labelledby=":rr:" aria-describedby=":rs:" aria-level="1" aria-selected="false"><div class="PRIVATE_TreeView-item-container prc-TreeView-TreeViewItemContainer--2Rkn" style="--level: 1; content-visibility: auto; contain-intrinsic-size: auto 2rem;"><div style="grid-area: spacer; display: flex;"><div style="width: 100%; display: flex;"></div></div><div id=":rr:" class="PRIVATE_TreeView-item-content prc-TreeView-TreeViewItemContent-f0r0b"><div class="PRIVATE_VisuallyHidden prc-TreeView-TreeViewVisuallyHidden-4-mPv" aria-hidden="true" id=":rs:"></div><div class="PRIVATE_TreeView-item-visual prc-TreeView-TreeViewItemVisual-dRlGq" aria-hidden="true"><svg aria-hidden="true" focusable="false" class="octicon octicon-file" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg></div><span class="PRIVATE_TreeView-item-content-text prc-TreeView-TreeViewItemContentText-smZM-"><span>server.c</span></span></div></div></li><li class="PRIVATE_TreeView-item prc-TreeView-TreeViewItem-ShJr0" tabindex="-1" id="student_dtls.txt-item" role="treeitem" aria-labelledby=":ru:" aria-describedby=":rv:" aria-level="1" aria-selected="false"><div class="PRIVATE_TreeView-item-container prc-TreeView-TreeViewItemContainer--2Rkn" style="--level: 1; content-visibility: auto; contain-intrinsic-size: auto 2rem;"><div style="grid-area: spacer; display: flex;"><div style="width: 100%; display: flex;"></div></div><div id=":ru:" class="PRIVATE_TreeView-item-content prc-TreeView-TreeViewItemContent-f0r0b"><div class="PRIVATE_VisuallyHidden prc-TreeView-TreeViewVisuallyHidden-4-mPv" aria-hidden="true" id=":rv:"></div><div class="PRIVATE_TreeView-item-visual prc-TreeView-TreeViewItemVisual-dRlGq" aria-hidden="true"><svg aria-hidden="true" focusable="false" class="octicon octicon-file" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M2 1.75C2 .784 2.784 0 3.75 0h6.586c.464 0 .909.184 1.237.513l2.914 2.914c.329.328.513.773.513 1.237v9.586A1.75 1.75 0 0 1 13.25 16h-9.5A1.75 1.75 0 0 1 2 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h9.5a.25.25 0 0 0 .25-.25V6h-2.75A1.75 1.75 0 0 1 9 4.25V1.5Zm6.75.062V4.25c0 .138.112.25.25.25h2.688l-.011-.013-2.914-2.914-.013-.011Z"></path></svg></div><span class="PRIVATE_TreeView-item-content-text prc-TreeView-TreeViewItemContentText-smZM-"><span>student_dtls.txt</span></span></div></div></li></ul></nav></div></div></div></div></div></div></div><div class="Box-sc-g0xbh4-0 prc-PageLayout-VerticalDivider-4A4Qm prc-PageLayout-PaneVerticalDivider-1c9vy" data-variant="line" data-position="start" style="--spacing:var(--spacing-none)"><div role="slider" aria-label="Draggable pane splitter" aria-valuemin="256" aria-valuemax="577" aria-valuenow="320" aria-valuetext="Pane width 320 pixels" tabindex="0" class="Box-sc-g0xbh4-0 fFMzrG"></div></div></div></div><div class="Box-sc-g0xbh4-0 prc-PageLayout-ContentWrapper-b-QRo CodeView-module__SplitPageLayout_Content--qxR1C" data-is-hidden="false"><div></div><div class="prc-PageLayout-Content--F7-I" data-width="full" style="--spacing:var(--spacing-none)"><div data-selector="repos-split-pane-content" tabindex="0" class="Box-sc-g0xbh4-0 leYMvG"><div class="Box-sc-g0xbh4-0 KMPzq"><div class="container CodeViewHeader-module__Box--PofRM"><div class="px-3 pt-3 pb-0" id="StickyHeader" style="position: sticky;"><div class="CodeViewHeader-module__Box_1--KpLzV"><div class="CodeViewHeader-module__Box_2--xzDOt"><div class="CodeViewHeader-module__Box_6--iStzT"><div class="Box-sc-g0xbh4-0 cEytCf"><nav data-testid="breadcrumbs" aria-labelledby="repos-header-breadcrumb--wide-heading" id="repos-header-breadcrumb--wide" class="Box-sc-g0xbh4-0 fzFXnm"><h2 class="sr-only ScreenReaderHeading-module__userSelectNone--vW4Cq prc-Heading-Heading-6CmGO" data-testid="screen-reader-heading" id="repos-header-breadcrumb--wide-heading">Breadcrumbs</h2><ol class="Box-sc-g0xbh4-0 iMnkmv"><li class="Box-sc-g0xbh4-0 ghzDag"><a class="Box-sc-g0xbh4-0 kHuKdh prc-Link-Link-85e08" sx="[object Object]" data-testid="breadcrumbs-repo-link" href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/tree/main">ExamSystem</a></li></ol></nav><div data-testid="breadcrumbs-filename" class="Box-sc-g0xbh4-0 ghzDag"><span class="Box-sc-g0xbh4-0 hXyrdx prc-Text-Text-0ima0" aria-hidden="true">/</span><h1 class="Box-sc-g0xbh4-0 jGhzSQ prc-Heading-Heading-6CmGO" tabindex="-1" id="file-name-id-wide">project.c</h1></div><button data-component="IconButton" type="button" class="prc-Button-ButtonBase-c50BI ml-2 prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby=":R3td9lab:-loading-announcement" aria-labelledby=":Rdd9lab:" fdprocessedid="7fosmp"><svg aria-hidden="true" focusable="false" class="octicon octicon-copy" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align:text-bottom"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"></path><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"></path></svg></button><span class="CopyToClipboardButton-module__tooltip--Dq1IB prc-TooltipV2-Tooltip-cYMVY" data-direction="nw" aria-label="Copy path" aria-hidden="true" id=":Rdd9lab:" popover="auto">Copy path</span></div></div><div class="react-code-view-header-element--wide"><div class="CodeViewHeader-module__Box_7--FZfkg"><div class="d-flex gap-2"> <button hidden="" data-testid="" data-hotkey="l,Shift+L" data-hotkey-scope="read-only-cursor-text-area"></button><button hidden="" data-hotkey="l,Shift+L"></button><button hidden="" data-testid="" data-hotkey="Mod+Alt+g" data-hotkey-scope="read-only-cursor-text-area"></button><button hidden="" data-hotkey="Mod+Alt+g"></button><button type="button" data-hotkey="b,Shift+B,Control+/ Control+b" class="Box-sc-g0xbh4-0 fjrFuv prc-Button-ButtonBase-c50BI NavigationMenu-module__Button--SJihq" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="default" aria-describedby=":r1k:-loading-announcement"><span data-component="buttonContent" class="Box-sc-g0xbh4-0 gUkoLg prc-Button-ButtonContent-HKbr-"><span data-component="text" class="prc-Button-Label-pTQ3x">Blame</span></span></button><button hidden="" data-testid="" data-hotkey="b,Shift+B,Control+/ Control+b" data-hotkey-scope="read-only-cursor-text-area"></button><button data-component="IconButton" type="button" aria-label="More file actions" title="More file actions" data-testid="more-file-actions-button-nav-menu-wide" aria-haspopup="true" aria-expanded="false" tabindex="0" class="prc-Button-ButtonBase-c50BI js-blob-dropdown-click NavigationMenu-module__IconButton--NqJ_L prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="default" aria-describedby=":R2a6d9lab:-loading-announcement" id=":R2a6d9lab:" fdprocessedid="smwite"><svg aria-hidden="true" focusable="false" class="octicon octicon-kebab-horizontal" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align:text-bottom"><path d="M8 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3ZM1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Zm13 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path></svg></button> </div></div></div><div class="react-code-view-header-element--narrow"><div class="CodeViewHeader-module__Box_7--FZfkg"><div class="d-flex gap-2"> <button hidden="" data-testid="" data-hotkey="l,Shift+L" data-hotkey-scope="read-only-cursor-text-area"></button><button hidden="" data-hotkey="l,Shift+L"></button><button hidden="" data-testid="" data-hotkey="Mod+Alt+g" data-hotkey-scope="read-only-cursor-text-area"></button><button hidden="" data-hotkey="Mod+Alt+g"></button><button type="button" data-hotkey="b,Shift+B,Control+/ Control+b" class="Box-sc-g0xbh4-0 fjrFuv prc-Button-ButtonBase-c50BI NavigationMenu-module__Button--SJihq" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="default" aria-describedby=":r1l:-loading-announcement"><span data-component="buttonContent" class="Box-sc-g0xbh4-0 gUkoLg prc-Button-ButtonContent-HKbr-"><span data-component="text" class="prc-Button-Label-pTQ3x">Blame</span></span></button><button hidden="" data-testid="" data-hotkey="b,Shift+B,Control+/ Control+b" data-hotkey-scope="read-only-cursor-text-area"></button><button data-component="IconButton" type="button" aria-label="More file actions" title="More file actions" data-testid="more-file-actions-button-nav-menu-narrow" aria-haspopup="true" aria-expanded="false" tabindex="0" class="prc-Button-ButtonBase-c50BI js-blob-dropdown-click NavigationMenu-module__IconButton--NqJ_L prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="medium" data-variant="default" aria-describedby=":R2a7d9lab:-loading-announcement" id=":R2a7d9lab:"><svg aria-hidden="true" focusable="false" class="octicon octicon-kebab-horizontal" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align:text-bottom"><path d="M8 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3ZM1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Zm13 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path></svg></button> </div></div></div></div></div></div></div></div><div class="Box-sc-g0xbh4-0 dJxjrT react-code-view-bottom-padding"> <div class="BlobTopBanners-module__Box--g_bGk"></div> <!-- --> <!-- --> </div><div class="Box-sc-g0xbh4-0 dJxjrT"> <!-- --> <!-- --> <button hidden="" data-testid="" data-hotkey="r,Shift+R" data-hotkey-scope="read-only-cursor-text-area"></button><button hidden="" data-hotkey="r,Shift+R"></button><div class="d-flex flex-column border rounded-2 mb-3 pl-1"><div class="Box-sc-g0xbh4-0 dzCJzi"><h2 class="sr-only ScreenReaderHeading-module__userSelectNone--vW4Cq prc-Heading-Heading-6CmGO" data-testid="screen-reader-heading">Latest commit</h2><div data-testid="latest-commit" class="Box-sc-g0xbh4-0 ePWWCk"><div class="Box-sc-g0xbh4-0 dpBUfI"><div data-testid="author-avatar" class="Box-sc-g0xbh4-0 hKWjvQ"><a class="prc-Link-Link-85e08" href="https://github.com/AnimeshSatyapragyanPatra" data-testid="avatar-icon-link" data-hovercard-url="/users/AnimeshSatyapragyanPatra/hovercard"><img data-component="Avatar" class="Box-sc-g0xbh4-0 cvdqJW prc-Avatar-Avatar-ZRS-m" alt="AnimeshSatyapragyanPatra" width="20" height="20" src="./project_files/156192085" data-testid="github-avatar" aria-label="AnimeshSatyapragyanPatra" style="--avatarSize-regular: 20px;"></a><a class="Box-sc-g0xbh4-0 kJvqaq prc-Link-Link-85e08" data-muted="true" href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/commits?author=AnimeshSatyapragyanPatra" aria-label="commits by AnimeshSatyapragyanPatra" data-hovercard-url="/users/AnimeshSatyapragyanPatra/hovercard">AnimeshSatyapragyanPatra</a></div><span class=""></span></div><div class="Box-sc-g0xbh4-0 erEOeb d-none d-sm-flex"><div class="Truncate flex-items-center f5"><span class="Truncate-text prc-Text-Text-0ima0" data-testid="latest-commit-html"><a href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/commit/badd0b866adb5109894d4e691de70f97a9895a52" class="Link--secondary" data-pjax="true" data-hovercard-url="/AnimeshSatyapragyanPatra/ExamSystem/commit/badd0b866adb5109894d4e691de70f97a9895a52/hovercard">Add files via upload</a></span></div></div><span class="d-flex d-sm-none fgColor-muted f6"><relative-time class="sc-aXZVg" tense="past" datetime="2025-05-15T10:28:47.000Z" title="May 15, 2025, 3:58 PM GMT+5:30"><template shadowrootmode="open">yesterday</template>May 15, 2025</relative-time></span></div><div class="d-flex flex-shrink-0 gap-2"><div data-testid="latest-commit-details" class="d-none d-sm-flex flex-items-center"><span class="d-flex flex-nowrap fgColor-muted f6"><a class="Link--secondary prc-Link-Link-85e08" aria-label="Commit badd0b8" data-hovercard-url="/AnimeshSatyapragyanPatra/ExamSystem/commit/badd0b866adb5109894d4e691de70f97a9895a52/hovercard" href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/commit/badd0b866adb5109894d4e691de70f97a9895a52">badd0b8</a>&nbsp;·&nbsp;<relative-time class="sc-aXZVg" tense="past" datetime="2025-05-15T10:28:47.000Z" title="May 15, 2025, 3:58 PM GMT+5:30"><template shadowrootmode="open">yesterday</template>May 15, 2025</relative-time></span></div><div class="d-flex gap-2"><h2 class="sr-only ScreenReaderHeading-module__userSelectNone--vW4Cq prc-Heading-Heading-6CmGO" data-testid="screen-reader-heading">History</h2><a href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/commits/main/project.c" class="prc-Button-ButtonBase-c50BI d-none d-lg-flex LinkButton-module__code-view-link-button--xvCGA flex-items-center fgColor-default" data-loading="false" data-size="small" data-variant="invisible" aria-describedby=":R5dlal9lab:-loading-announcement"><span data-component="buttonContent" data-align="center" class="prc-Button-ButtonContent-HKbr-"><span data-component="leadingVisual" class="prc-Button-Visual-2epfX prc-Button-VisualWrap-Db-eB"><svg aria-hidden="true" focusable="false" class="octicon octicon-history" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align:text-bottom"><path d="m.427 1.927 1.215 1.215a8.002 8.002 0 1 1-1.6 5.685.75.75 0 1 1 1.493-.154 6.5 6.5 0 1 0 1.18-4.458l1.358 1.358A.25.25 0 0 1 3.896 6H.25A.25.25 0 0 1 0 5.75V2.104a.25.25 0 0 1 .427-.177ZM7.75 4a.75.75 0 0 1 .75.75v2.992l2.028.812a.75.75 0 0 1-.557 1.392l-2.5-1A.751.751 0 0 1 7 8.25v-3.5A.75.75 0 0 1 7.75 4Z"></path></svg></span><span data-component="text" class="prc-Button-Label-pTQ3x"><span class="fgColor-default">History</span></span></span></a><div class="d-sm-none"><button data-component="IconButton" type="button" aria-label="Open commit details" aria-pressed="false" aria-expanded="false" data-testid="latest-commit-details-toggle" class="Box-sc-g0xbh4-0 fvaGIa prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby=":r1o:-loading-announcement"><svg aria-hidden="true" focusable="false" class="octicon octicon-ellipsis" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M0 5.75C0 4.784.784 4 1.75 4h12.5c.966 0 1.75.784 1.75 1.75v4.5A1.75 1.75 0 0 1 14.25 12H1.75A1.75 1.75 0 0 1 0 10.25ZM12 7a1 1 0 1 0 0 2 1 1 0 0 0 0-2ZM7 8a1 1 0 1 0 2 0 1 1 0 0 0-2 0ZM4 7a1 1 0 1 0 0 2 1 1 0 0 0 0-2Z"></path></svg></button></div><div class="d-flex d-lg-none"><span role="tooltip" aria-label="History" id="history-icon-button-tooltip" class="Tooltip__TooltipBase-sc-17tf59c-0 fiSvBN tooltipped-n"><a href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/commits/main/project.c" class="prc-Button-ButtonBase-c50BI LinkButton-module__code-view-link-button--xvCGA flex-items-center fgColor-default" data-loading="false" data-size="small" data-variant="invisible" aria-describedby=":Rpdlal9lab:-loading-announcement history-icon-button-tooltip"><span data-component="buttonContent" data-align="center" class="prc-Button-ButtonContent-HKbr-"><span data-component="leadingVisual" class="prc-Button-Visual-2epfX prc-Button-VisualWrap-Db-eB"><svg aria-hidden="true" focusable="false" class="octicon octicon-history" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align:text-bottom"><path d="m.427 1.927 1.215 1.215a8.002 8.002 0 1 1-1.6 5.685.75.75 0 1 1 1.493-.154 6.5 6.5 0 1 0 1.18-4.458l1.358 1.358A.25.25 0 0 1 3.896 6H.25A.25.25 0 0 1 0 5.75V2.104a.25.25 0 0 1 .427-.177ZM7.75 4a.75.75 0 0 1 .75.75v2.992l2.028.812a.75.75 0 0 1-.557 1.392l-2.5-1A.751.751 0 0 1 7 8.25v-3.5A.75.75 0 0 1 7.75 4Z"></path></svg></span></span></a></span></div></div></div></div></div><div class="Box-sc-g0xbh4-0 ldRxiI"><div class="Box-sc-g0xbh4-0 fVkfyA container"><div class="Box-sc-g0xbh4-0 gNAmSV react-code-size-details-banner"><div class="react-code-size-details-banner CodeSizeDetails-module__Box--QdxnQ"><div class="text-mono CodeSizeDetails-module__Box_1--_uFDs"><div title="23.4 KB" data-testid="blob-size" class="Truncate__StyledTruncate-sc-23o1d2-0 bgsFir CodeSizeDetails-module__Truncate_1--er0Uk"><span>713 lines (613 loc) · 23.4 KB</span></div></div></div><div class="react-code-size-details-banner"><button style="--button-color:fg.default" type="button" aria-haspopup="true" aria-expanded="false" tabindex="0" class="Box-sc-g0xbh4-0 jlVuVO prc-Button-ButtonBase-c50BI" data-loading="false" data-size="small" data-variant="invisible" aria-describedby=":R15tal9lab:-loading-announcement" id=":R15tal9lab:"><span data-component="buttonContent" class="Box-sc-g0xbh4-0 gUkoLg prc-Button-ButtonContent-HKbr-"><span data-component="leadingVisual" class="prc-Button-Visual-2epfX prc-Button-VisualWrap-Db-eB"><svg aria-hidden="true" focusable="false" class="octicon octicon-copilot" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align:text-bottom"><path d="M7.998 15.035c-4.562 0-7.873-2.914-7.998-3.749V9.338c.085-.628.677-1.686 1.588-2.065.013-.07.024-.143.036-.218.029-.183.06-.384.126-.612-.201-.508-.254-1.084-.254-1.656 0-.87.128-1.769.693-2.484.579-.733 1.494-1.124 2.724-1.261 1.206-.134 2.262.034 2.944.765.05.053.096.108.139.165.044-.057.094-.112.143-.165.682-.731 1.738-.899 2.944-.765 1.23.137 2.145.528 2.724 1.261.566.715.693 1.614.693 2.484 0 .572-.053 1.148-.254 1.656.066.228.098.429.126.612.012.076.024.148.037.218.924.385 1.522 1.471 1.591 2.095v1.872c0 .766-3.351 3.795-8.002 3.795Zm0-1.485c2.28 0 4.584-1.11 5.002-1.433V7.862l-.023-.116c-.49.21-1.075.291-1.727.291-1.146 0-2.059-.327-2.71-.991A3.222 3.222 0 0 1 8 6.303a3.24 3.24 0 0 1-.544.743c-.65.664-1.563.991-2.71.991-.652 0-1.236-.081-1.727-.291l-.023.116v4.255c.419.323 2.722 1.433 5.002 1.433ZM6.762 2.83c-.193-.206-.637-.413-1.682-.297-1.019.113-1.479.404-1.713.7-.247.312-.369.789-.369 1.554 0 .793.129 1.171.308 1.371.162.181.519.379 1.442.379.853 0 1.339-.235 1.638-.54.315-.322.527-.827.617-1.553.117-.935-.037-1.395-.241-1.614Zm4.155-.297c-1.044-.116-1.488.091-1.681.297-.204.219-.359.679-.242 1.614.091.726.303 1.231.618 1.553.299.305.784.54 1.638.54.922 0 1.28-.198 1.442-.379.179-.2.308-.578.308-1.371 0-.765-.123-1.242-.37-1.554-.233-.296-.693-.587-1.713-.7Z"></path><path d="M6.25 9.037a.75.75 0 0 1 .75.75v1.501a.75.75 0 0 1-1.5 0V9.787a.75.75 0 0 1 .75-.75Zm4.25.75v1.501a.75.75 0 0 1-1.5 0V9.787a.75.75 0 0 1 1.5 0Z"></path></svg></span><span data-component="text" class="prc-Button-Label-pTQ3x">Code 55% faster with GitHub Copilot</span></span></button></div></div><div class="Box-sc-g0xbh4-0 jdLMhu react-blob-view-header-sticky" id="repos-sticky-header"><div class="BlobViewHeader-module__Box--pvsIA"><div class="react-blob-sticky-header"><div class="Box-sc-g0xbh4-0 hqwSEx"><div class="FileNameStickyHeader-module__Box_5--xBJ2J"><div class="Box-sc-g0xbh4-0 fHind"><nav data-testid="breadcrumbs" aria-labelledby="sticky-breadcrumb-heading" id="sticky-breadcrumb" class="Box-sc-g0xbh4-0 fzFXnm"><h2 class="sr-only ScreenReaderHeading-module__userSelectNone--vW4Cq prc-Heading-Heading-6CmGO" data-testid="screen-reader-heading" id="sticky-breadcrumb-heading">Breadcrumbs</h2><ol class="Box-sc-g0xbh4-0 iMnkmv"><li class="Box-sc-g0xbh4-0 ghzDag"><a class="Box-sc-g0xbh4-0 kHuKdh prc-Link-Link-85e08" sx="[object Object]" data-testid="breadcrumbs-repo-link" href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/tree/main">ExamSystem</a></li></ol></nav><div data-testid="breadcrumbs-filename" class="Box-sc-g0xbh4-0 ghzDag"><span class="Box-sc-g0xbh4-0 bQeXnn prc-Text-Text-0ima0" aria-hidden="true">/</span><h1 class="Box-sc-g0xbh4-0 dnZoUW prc-Heading-Heading-6CmGO" tabindex="-1" id="sticky-file-name-id">project.c</h1></div></div><button type="button" class="prc-Button-ButtonBase-c50BI FileNameStickyHeader-module__Button--SaiiH FileNameStickyHeader-module__GoToTopButton--9lB4x" data-loading="false" data-size="small" data-variant="invisible" aria-describedby=":Riptal9lab:-loading-announcement" fdprocessedid="ovp84"><span data-component="buttonContent" data-align="center" class="prc-Button-ButtonContent-HKbr-"><span data-component="leadingVisual" class="prc-Button-Visual-2epfX prc-Button-VisualWrap-Db-eB"><svg aria-hidden="true" focusable="false" class="octicon octicon-arrow-up" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align:text-bottom"><path d="M3.47 7.78a.75.75 0 0 1 0-1.06l4.25-4.25a.75.75 0 0 1 1.06 0l4.25 4.25a.751.751 0 0 1-.018 1.042.751.751 0 0 1-1.042.018L9 4.81v7.44a.75.75 0 0 1-1.5 0V4.81L4.53 7.78a.75.75 0 0 1-1.06 0Z"></path></svg></span><span data-component="text" class="prc-Button-Label-pTQ3x">Top</span></span></button></div></div></div><div class="Box-sc-g0xbh4-0 gFKFyc BlobViewHeader-module__Box_1--PPihg"><h2 class="sr-only ScreenReaderHeading-module__userSelectNone--vW4Cq prc-Heading-Heading-6CmGO" data-testid="screen-reader-heading">File metadata and controls</h2><div class="BlobViewHeader-module__Box_2--G_jCG"><ul aria-label="File view" class="prc-SegmentedControl-SegmentedControl-e7570 BlobTabButtons-module__SegmentedControl--JMGov" data-size="small"><li class="Box-sc-g0xbh4-0 dXYHoy prc-SegmentedControl-Item-7Aq6h" data-selected="true"><button aria-current="true" class="prc-SegmentedControl-Button-ojWXD" type="button" data-hotkey="Control+/ Control+c" fdprocessedid="bj2ulp"><span class="prc-SegmentedControl-Content-gnQ4n"><div class="Box-sc-g0xbh4-0 prc-SegmentedControl-Text-c5gSh" data-text="Code">Code</div></span></button></li><li class="Box-sc-g0xbh4-0 lcvxdn prc-SegmentedControl-Item-7Aq6h"><button aria-current="false" class="prc-SegmentedControl-Button-ojWXD" type="button" data-hotkey="b,Shift+B,Control+/ Control+b" fdprocessedid="1a7r9d"><span class="prc-SegmentedControl-Content-gnQ4n"><div class="Box-sc-g0xbh4-0 prc-SegmentedControl-Text-c5gSh" data-text="Blame">Blame</div></span></button></li></ul><button hidden="" data-testid="" data-hotkey-scope="read-only-cursor-text-area" data-hotkey="Control+/ Control+c"></button><button hidden="" data-testid="" data-hotkey-scope="read-only-cursor-text-area" data-hotkey="b,Shift+B,Control+/ Control+b"></button><div class="react-code-size-details-in-header CodeSizeDetails-module__Box--QdxnQ"><div class="text-mono CodeSizeDetails-module__Box_1--_uFDs"><div title="23.4 KB" data-testid="blob-size" class="Truncate__StyledTruncate-sc-23o1d2-0 bgsFir CodeSizeDetails-module__Truncate_1--er0Uk"><span>713 lines (613 loc) · 23.4 KB</span></div></div></div><div class="react-code-size-details-in-header"><button style="--button-color:fg.default" type="button" aria-haspopup="true" aria-expanded="false" tabindex="0" class="Box-sc-g0xbh4-0 jlVuVO prc-Button-ButtonBase-c50BI" data-loading="false" data-size="small" data-variant="invisible" aria-describedby=":R3kptal9lab:-loading-announcement" id=":R3kptal9lab:" fdprocessedid="pn8q9"><span data-component="buttonContent" class="Box-sc-g0xbh4-0 gUkoLg prc-Button-ButtonContent-HKbr-"><span data-component="leadingVisual" class="prc-Button-Visual-2epfX prc-Button-VisualWrap-Db-eB"><svg aria-hidden="true" focusable="false" class="octicon octicon-copilot" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align:text-bottom"><path d="M7.998 15.035c-4.562 0-7.873-2.914-7.998-3.749V9.338c.085-.628.677-1.686 1.588-2.065.013-.07.024-.143.036-.218.029-.183.06-.384.126-.612-.201-.508-.254-1.084-.254-1.656 0-.87.128-1.769.693-2.484.579-.733 1.494-1.124 2.724-1.261 1.206-.134 2.262.034 2.944.765.05.053.096.108.139.165.044-.057.094-.112.143-.165.682-.731 1.738-.899 2.944-.765 1.23.137 2.145.528 2.724 1.261.566.715.693 1.614.693 2.484 0 .572-.053 1.148-.254 1.656.066.228.098.429.126.612.012.076.024.148.037.218.924.385 1.522 1.471 1.591 2.095v1.872c0 .766-3.351 3.795-8.002 3.795Zm0-1.485c2.28 0 4.584-1.11 5.002-1.433V7.862l-.023-.116c-.49.21-1.075.291-1.727.291-1.146 0-2.059-.327-2.71-.991A3.222 3.222 0 0 1 8 6.303a3.24 3.24 0 0 1-.544.743c-.65.664-1.563.991-2.71.991-.652 0-1.236-.081-1.727-.291l-.023.116v4.255c.419.323 2.722 1.433 5.002 1.433ZM6.762 2.83c-.193-.206-.637-.413-1.682-.297-1.019.113-1.479.404-1.713.7-.247.312-.369.789-.369 1.554 0 .793.129 1.171.308 1.371.162.181.519.379 1.442.379.853 0 1.339-.235 1.638-.54.315-.322.527-.827.617-1.553.117-.935-.037-1.395-.241-1.614Zm4.155-.297c-1.044-.116-1.488.091-1.681.297-.204.219-.359.679-.242 1.614.091.726.303 1.231.618 1.553.299.305.784.54 1.638.54.922 0 1.28-.198 1.442-.379.179-.2.308-.578.308-1.371 0-.765-.123-1.242-.37-1.554-.233-.296-.693-.587-1.713-.7Z"></path><path d="M6.25 9.037a.75.75 0 0 1 .75.75v1.501a.75.75 0 0 1-1.5 0V9.787a.75.75 0 0 1 .75-.75Zm4.25.75v1.501a.75.75 0 0 1-1.5 0V9.787a.75.75 0 0 1 1.5 0Z"></path></svg></span><span data-component="text" class="prc-Button-Label-pTQ3x">Code 55% faster with GitHub Copilot</span></span></button></div></div><div class="BlobViewHeader-module__Box_3--Kvpex"><button hidden="" data-testid="" data-hotkey="Control+Shift+&gt;" data-hotkey-scope="read-only-cursor-text-area"></button><button hidden="" data-hotkey="Control+Shift+&gt;"></button><button hidden="" data-testid="" data-hotkey="Control+Shift+&lt;" data-hotkey-scope="read-only-cursor-text-area"></button><button hidden="" data-hotkey="Control+Shift+&lt;"></button><div class="react-blob-header-edit-and-raw-actions BlobViewHeader-module__Box_4--vFP89"><div class="Box-sc-g0xbh4-0 prc-ButtonGroup-ButtonGroup-vcMeG"><div><a href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/raw/refs/heads/main/project.c" data-testid="raw-button" class="Box-sc-g0xbh4-0 lefpaC prc-Button-ButtonBase-c50BI BlobViewHeader-module__LinkButton--DMph4" data-loading="false" data-no-visuals="true" data-size="small" data-variant="default" aria-describedby=":R5csptal9lab:-loading-announcement" data-hotkey="Control+/ Control+r"><span data-component="buttonContent" class="Box-sc-g0xbh4-0 gUkoLg prc-Button-ButtonContent-HKbr-"><span data-component="text" class="prc-Button-Label-pTQ3x">Raw</span></span></a></div><div><button data-component="IconButton" type="button" aria-label="Copy raw content" data-testid="copy-raw-button" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="default" aria-describedby=":Rpcsptal9lab:-loading-announcement" data-hotkey="Control+Shift+C" fdprocessedid="xccifu"><svg aria-hidden="true" focusable="false" class="octicon octicon-copy" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align:text-bottom"><path d="M0 6.75C0 5.784.784 5 1.75 5h1.5a.75.75 0 0 1 0 1.5h-1.5a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-1.5a.75.75 0 0 1 1.5 0v1.5A1.75 1.75 0 0 1 9.25 16h-7.5A1.75 1.75 0 0 1 0 14.25Z"></path><path d="M5 1.75C5 .784 5.784 0 6.75 0h7.5C15.216 0 16 .784 16 1.75v7.5A1.75 1.75 0 0 1 14.25 11h-7.5A1.75 1.75 0 0 1 5 9.25Zm1.75-.25a.25.25 0 0 0-.25.25v7.5c0 .138.112.25.25.25h7.5a.25.25 0 0 0 .25-.25v-7.5a.25.25 0 0 0-.25-.25Z"></path></svg></button></div><div><span role="tooltip" aria-label="Download raw file" id=":Rdcsptal9lab:" class="Tooltip__TooltipBase-sc-17tf59c-0 fiSvBN tooltipped-n"><button data-component="IconButton" type="button" aria-label="Download raw content" data-testid="download-raw-button" class="Box-sc-g0xbh4-0 ivobqY prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="default" aria-describedby=":Rtcsptal9lab:-loading-announcement" data-hotkey="Control+Shift+S" fdprocessedid="gp85pp"><svg aria-hidden="true" focusable="false" class="octicon octicon-download" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align:text-bottom"><path d="M2.75 14A1.75 1.75 0 0 1 1 12.25v-2.5a.75.75 0 0 1 1.5 0v2.5c0 .138.112.25.25.25h10.5a.25.25 0 0 0 .25-.25v-2.5a.75.75 0 0 1 1.5 0v2.5A1.75 1.75 0 0 1 13.25 14Z"></path><path d="M7.25 7.689V2a.75.75 0 0 1 1.5 0v5.689l1.97-1.969a.749.749 0 1 1 1.06 1.06l-3.25 3.25a.749.749 0 0 1-1.06 0L4.22 6.78a.749.749 0 1 1 1.06-1.06l1.97 1.969Z"></path></svg></button></span></div></div><button hidden="" data-testid="raw-button-shortcut" data-hotkey-scope="read-only-cursor-text-area" data-hotkey="Control+/ Control+r"></button><button hidden="" data-testid="copy-raw-button-shortcut" data-hotkey-scope="read-only-cursor-text-area" data-hotkey="Control+Shift+C"></button><button hidden="" data-testid="download-raw-button-shortcut" data-hotkey-scope="read-only-cursor-text-area" data-hotkey="Control+Shift+S"></button><a class="js-github-dev-shortcut d-none prc-Link-Link-85e08" href="https://github.dev/" data-hotkey="., Control+Shift+/"></a><button hidden="" data-testid="" data-hotkey-scope="read-only-cursor-text-area" data-hotkey="., Control+Shift+/"></button><a class="js-github-dev-new-tab-shortcut d-none prc-Link-Link-85e08" href="https://github.dev/" target="_blank" data-hotkey="Shift+.,Shift+&gt;,&gt;"></a><button hidden="" data-testid="" data-hotkey-scope="read-only-cursor-text-area" data-hotkey="Shift+.,Shift+&gt;,&gt;"></button><div class="Box-sc-g0xbh4-0 prc-ButtonGroup-ButtonGroup-vcMeG"><div><span role="tooltip" aria-label="Fork this repository and edit the file" id=":R6ksptal9lab:" class="Tooltip__TooltipBase-sc-17tf59c-0 fiSvBN tooltipped-nw"><a sx="[object Object]" data-component="IconButton" type="button" aria-label="Edit file" data-testid="edit-button" class="Box-sc-g0xbh4-0 iCOsHh prc-Button-ButtonBase-c50BI BlobViewHeader-module__IconButton_1--MzNlL prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="default" aria-describedby=":Rmksptal9lab:-loading-announcement" href="https://github.com/AnimeshSatyapragyanPatra/ExamSystem/edit/main/project.c" data-hotkey="e,Shift+E"><svg aria-hidden="true" focusable="false" class="octicon octicon-pencil" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align:text-bottom"><path d="M11.013 1.427a1.75 1.75 0 0 1 2.474 0l1.086 1.086a1.75 1.75 0 0 1 0 2.474l-8.61 8.61c-.21.21-.47.364-.756.445l-3.251.93a.75.75 0 0 1-.927-.928l.929-3.25c.081-.286.235-.547.445-.758l8.61-8.61Zm.176 4.823L9.75 4.81l-6.286 6.287a.253.253 0 0 0-.064.108l-.558 1.953 1.953-.558a.253.253 0 0 0 .108-.064Zm1.238-3.763a.25.25 0 0 0-.354 0L10.811 3.75l1.439 1.44 1.263-1.263a.25.25 0 0 0 0-.354Z"></path></svg></a></span></div><div><button data-component="IconButton" type="button" aria-label="More edit options" data-testid="more-edit-button" aria-haspopup="true" aria-expanded="false" tabindex="0" class="prc-Button-ButtonBase-c50BI prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="default" aria-describedby=":Raksptal9lab:-loading-announcement" id=":Raksptal9lab:" fdprocessedid="m2gsvi"><svg aria-hidden="true" focusable="false" class="octicon octicon-triangle-down" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align:text-bottom"><path d="m4.427 7.427 3.396 3.396a.25.25 0 0 0 .354 0l3.396-3.396A.25.25 0 0 0 11.396 7H4.604a.25.25 0 0 0-.177.427Z"></path></svg></button></div></div><button hidden="" data-testid="" data-hotkey="e,Shift+E" data-hotkey-scope="read-only-cursor-text-area"></button></div><span role="tooltip" aria-label="Open symbols panel" id=":r1m:" class="Tooltip__TooltipBase-sc-17tf59c-0 fiSvBN tooltipped-nw"><button data-component="IconButton" type="button" aria-label="Symbols" aria-pressed="false" aria-expanded="false" aria-controls="symbols-pane" data-hotkey="Control+i" data-testid="symbols-button" class="prc-Button-ButtonBase-c50BI BlobViewHeader-module__IconButton_2--KDy6i prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby="symbols-button-loading-announcement" id="symbols-button" fdprocessedid="t2a12"><svg aria-hidden="true" focusable="false" class="octicon octicon-code-square" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align: text-bottom;"><path d="M0 1.75C0 .784.784 0 1.75 0h12.5C15.216 0 16 .784 16 1.75v12.5A1.75 1.75 0 0 1 14.25 16H1.75A1.75 1.75 0 0 1 0 14.25Zm1.75-.25a.25.25 0 0 0-.25.25v12.5c0 .138.112.25.25.25h12.5a.25.25 0 0 0 .25-.25V1.75a.25.25 0 0 0-.25-.25Zm7.47 3.97a.75.75 0 0 1 1.06 0l2 2a.75.75 0 0 1 0 1.06l-2 2a.749.749 0 0 1-1.275-.326.749.749 0 0 1 .215-.734L10.69 8 9.22 6.53a.75.75 0 0 1 0-1.06ZM6.78 6.53 5.31 8l1.47 1.47a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215l-2-2a.75.75 0 0 1 0-1.06l2-2a.751.751 0 0 1 1.042.018.751.751 0 0 1 .018 1.042Z"></path></svg></button></span><div class="react-blob-header-edit-and-raw-actions-combined"><button data-component="IconButton" type="button" aria-label="Edit and raw actions" title="More file actions" data-testid="more-file-actions-button" aria-haspopup="true" aria-expanded="false" tabindex="0" class="prc-Button-ButtonBase-c50BI js-blob-dropdown-click BlobViewHeader-module__IconButton--uO1fA prc-Button-IconButton-szpyj" data-loading="false" data-no-visuals="true" data-size="small" data-variant="invisible" aria-describedby=":Rnsptal9lab:-loading-announcement" id=":Rnsptal9lab:"><svg aria-hidden="true" focusable="false" class="octicon octicon-kebab-horizontal" viewBox="0 0 16 16" width="16" height="16" fill="currentColor" display="inline-block" overflow="visible" style="vertical-align:text-bottom"><path d="M8 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3ZM1.5 9a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Zm13 0a1.5 1.5 0 1 0 0-3 1.5 1.5 0 0 0 0 3Z"></path></svg></button></div></div></div></div><div></div></div><div class="Box-sc-g0xbh4-0 hycJXc"><section aria-labelledby="file-name-id-wide file-name-id-mobile" class="Box-sc-g0xbh4-0 dceWRL"><div class="Box-sc-g0xbh4-0 dGXHv"><div id="highlighted-line-menu-positioner" class="position-relative"><div id="copilot-button-positioner" class="Box-sc-g0xbh4-0 bpDFns"><div class="Box-sc-g0xbh4-0 iJOeCH"><div class="Box-sc-g0xbh4-0 eJSJhL"><div class="Box-sc-g0xbh4-0 iySzNr"><div aria-hidden="true" data-testid="navigation-cursor" class="Box-sc-g0xbh4-0 code-navigation-cursor" style="top: 0px; left: 92px;"> </div><button hidden="" data-testid="NavigationCursorEnter" data-hotkey="Control+Enter" data-hotkey-scope="read-only-cursor-text-area"></button><button hidden="" data-testid="NavigationCursorSetHighlightedLine" data-hotkey="Shift+J" data-hotkey-scope="read-only-cursor-text-area"></button><button hidden="" data-testid="NavigationCursorSetHighlightAndExpandMenu" data-hotkey="Alt+Shift+C,Alt+Shift+Ç" data-hotkey-scope="read-only-cursor-text-area"></button><button hidden="" data-testid="NavigationCursorPageDown" data-hotkey="PageDown" data-hotkey-scope="read-only-cursor-text-area"></button><button hidden="" data-testid="NavigationCursorPageUp" data-hotkey="PageUp" data-hotkey-scope="read-only-cursor-text-area"></button><button hidden="" data-testid="" data-hotkey="/" data-hotkey-scope="read-only-cursor-text-area"></button></div></div><textarea id="read-only-cursor-text-area" data-testid="read-only-cursor-text-area" aria-label="file content" aria-readonly="true" inputmode="none" tabindex="0" aria-multiline="true" aria-haspopup="false" data-gramm="false" data-gramm_editor="false" data-enable-grammarly="false" spellcheck="false" autocorrect="off" autocapitalize="off" autocomplete="off" data-ms-editor="false" class="react-blob-textarea react-blob-print-hide" style="resize: none; margin-top: -2px; padding-left: 92px; padding-right: 70px; width: 100%; background-color: unset; box-sizing: border-box; color: transparent; position: absolute; border: none; tab-size: 8; outline: none; overflow: auto hidden; height: 14280px; font-size: 12px; line-height: 20px; overflow-wrap: normal; overscroll-behavior-x: none; white-space: pre; z-index: 1;">#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
#include &lt;string.h&gt;
#include &lt;pthread.h&gt;
#include &lt;unistd.h&gt;
#include &lt;ctype.h&gt;
#include &lt;fcntl.h&gt;
#include &lt;sys/select.h&gt;
#include &lt;time.h&gt;
#include &lt;termios.h&gt;

#define MAX_QUESTIONS 200
#define MAX_LINE 512
#define MAX_STUDENTS 100
#define STUDENT_FILE "student_dtls.txt"
#define INSTRUCTOR_FILE "instructor_dtls.txt"
#define QUESTION_FILE "questions_with_difficulty.txt"
#define RESULT_FILE "results.txt"
#define RULES_FILE "rules.txt"
#define NUM_EXAM_QUESTIONS 5
#define MIN_ANSWER_TIME 5

volatile int examTimeUp = 0;
int overallExamTime = 300;

typedef struct {
    char name[MAX_LINE];
    char roll[MAX_LINE];
    char reg_no[MAX_LINE];
    char password[MAX_LINE];
} Student;

typedef struct {
    char name[MAX_LINE];
    char instructor_id[MAX_LINE];
    char password[MAX_LINE];
} Instructor;

typedef struct {
    char question[MAX_LINE];
    char optionA[MAX_LINE];
    char optionB[MAX_LINE];
    char optionC[MAX_LINE];
    char optionD[MAX_LINE];
    char correct;
    int difficulty;
} Question;

typedef struct {
    char roll[MAX_LINE];
    char name[MAX_LINE];
    int responseTimes[NUM_EXAM_QUESTIONS];
    int totalTime;
    int correctAnswers;
    int totalQuestions;
    int rank;
    int flagged;
} DashboardStudent;

DashboardStudent dashboardStudents[MAX_STUDENTS];
int studentCount = 0;

Question questions[MAX_QUESTIONS];
int totalQuestions = 0;
int answerTimeout;
float marksForCorrectAnswer;
float marksDeductedForWrongAnswer;

// Function prototypes
void clear_input_buffer();
void getPassword(char *password, int size);
void load_rules();
void trim(char *s);
int read_nonempty_line(FILE *fp, char *buffer, int size);
void load_questions();
int verify_student(const char *roll, const char *pass, char *name, char *reg_no);
int verify_instructor(const char *instructor_id, const char *pass, char *name);
void append_result(const char *name, const char *roll, double score, int wrong, int attempted, int isCheating, const int *responseTimes, int totalTime);
int get_input_with_timeout(char *buf, int buf_size, int timeout_seconds);
void *overall_timer(void *arg);
void *exam_session(void *arg);
void add_question();
void set_time_limit();
void set_marking_scheme();
void loadDashboardData();
void flagSuspiciousActivity();
void rankStudents();
void displayDashboard();

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' &amp;&amp; c != EOF);
}

void getPassword(char *password, int size) {
    struct termios oldt, newt;
    tcgetattr(STDIN_FILENO, &amp;oldt);
    newt = oldt;
    newt.c_lflag &amp;= ~(ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &amp;newt);
    
    if(fgets(password, size, stdin) != NULL) {
        password[strcspn(password, "\n")] = '\0';
    }
    
    tcsetattr(STDIN_FILENO, TCSANOW, &amp;oldt);
    printf("\n");
}

void load_rules() {
    FILE *fp = fopen(RULES_FILE, "r");
    if(fp == NULL) {
        answerTimeout = 30;
        marksForCorrectAnswer = 1.0;
        marksDeductedForWrongAnswer = 0.25;
        fp = fopen(RULES_FILE, "w");
        fprintf(fp, "Time limit per question: %d\nMarks awarded for correct answer: %.2f\nMarks deducted for incorrect answer: %.2f\n", 
                answerTimeout, marksForCorrectAnswer, marksDeductedForWrongAnswer);
        fclose(fp);
    } else {
        char buffer[MAX_LINE];
        fgets(buffer, MAX_LINE, fp);
        sscanf(buffer, "Time limit per question: %d", &amp;answerTimeout);
        fgets(buffer, MAX_LINE, fp);
        sscanf(buffer, "Marks awarded for correct answer: %f", &amp;marksForCorrectAnswer);
        fgets(buffer, MAX_LINE, fp);
        sscanf(buffer, "Marks deducted for incorrect answer: %f", &amp;marksDeductedForWrongAnswer);
        fclose(fp);
    }
}

void trim(char *s) {
    s[strcspn(s, "\n")] = '\0';
    while(isspace((unsigned char)*s)) s++;
    char *end = s + strlen(s) - 1;
    while(end &gt; s &amp;&amp; isspace((unsigned char)*end)) {
        *end = '\0';
        end--;
    }
}

int read_nonempty_line(FILE *fp, char *buffer, int size) {
    while(fgets(buffer, size, fp)) {
        buffer[strcspn(buffer, "\n")] = '\0';
        char temp[MAX_LINE];
        strcpy(temp, buffer);
        char *start = temp;
        while(*start &amp;&amp; isspace((unsigned char)*start)) start++;
        if(strlen(start) &gt; 0) {
            strcpy(buffer, start);
            return 1;
        }
    }
    return 0;
}

void load_questions() {
    FILE *fp = fopen(QUESTION_FILE, "r");
    if(fp == NULL) {
        perror("📛 Error opening questions file");
        exit(EXIT_FAILURE);
    }

    char line[MAX_LINE];
    int qIndex = 0;
    while(qIndex &lt; MAX_QUESTIONS) {
        if(!read_nonempty_line(fp, line, MAX_LINE)) break;
        strncpy(questions[qIndex].question, line, MAX_LINE);

        if(!read_nonempty_line(fp, line, MAX_LINE)) break;
        strncpy(questions[qIndex].optionA, line, MAX_LINE);

        if(!read_nonempty_line(fp, line, MAX_LINE)) break;
        strncpy(questions[qIndex].optionB, line, MAX_LINE);

        if(!read_nonempty_line(fp, line, MAX_LINE)) break;
        strncpy(questions[qIndex].optionC, line, MAX_LINE);

        if(!read_nonempty_line(fp, line, MAX_LINE)) break;
        strncpy(questions[qIndex].optionD, line, MAX_LINE);

        if(!read_nonempty_line(fp, line, MAX_LINE)) break;
        questions[qIndex].correct = toupper(line[0]);

        if(!read_nonempty_line(fp, line, MAX_LINE)) break;
        questions[qIndex].difficulty = atoi(line);

        qIndex++;
    }

    totalQuestions = qIndex;
    fclose(fp);
}

int verify_student(const char *roll, const char *pass, char *name, char *reg_no) {
    FILE *fp = fopen(STUDENT_FILE, "r");
    if(fp == NULL) {
        perror("📛 Error opening student details file");
        exit(EXIT_FAILURE);
    }
    char fileName[50], fileRoll[50], fileRegNo[50], filePass[50];
    int valid = 0;
    while(fscanf(fp, "%s %s %s %s", fileName, fileRoll, fileRegNo, filePass) == 4) {
        if(strcmp(fileRoll, roll) == 0 &amp;&amp; strcmp(filePass, pass) == 0) {
            strcpy(name, fileName);
            strcpy(reg_no, fileRegNo);
            valid = 1;
            break;
        }
    }
    fclose(fp);
    return valid;
}

int verify_instructor(const char *instructor_id, const char *pass, char *name) {
    FILE *fp = fopen(INSTRUCTOR_FILE, "r");
    if(fp == NULL) {
        perror("📛 Error opening instructor details file");
        exit(EXIT_FAILURE);
    }
    char fileName[50], fileInstructorID[50], filePass[50];
    int valid = 0;
    while(fscanf(fp, "%s %s %s", fileName, fileInstructorID, filePass) == 3) {
        if(strcmp(fileInstructorID, instructor_id) == 0 &amp;&amp; strcmp(filePass, pass) == 0) {
            strcpy(name, fileName);
            valid = 1;
            break;
        }
    }
    fclose(fp);
    return valid;
}

void append_result(const char *name, const char *roll, double score, int wrong, int attempted, int isCheating, const int *responseTimes, int totalTime) {
    FILE *fp = fopen(RESULT_FILE, "a");
    if(fp == NULL) {
        perror("📛 Error opening result file");
        return;
    }
    int fd = fileno(fp);
    struct flock lock;
    memset(&amp;lock, 0, sizeof(lock));
    lock.l_type = F_WRLCK;
    fcntl(fd, F_SETLKW, &amp;lock);

    fprintf(fp, "%s|%s|%.2f|%d|%d|%d|%d|", 
           roll, name, score, wrong, attempted, isCheating, totalTime);
    
    for(int i = 0; i &lt; attempted; i++) {
        fprintf(fp, "%d,", responseTimes[i]);
    }
    fprintf(fp, "\n");

    lock.l_type = F_UNLCK;
    fcntl(fd, F_SETLK, &amp;lock);
    fclose(fp);
}

int get_input_with_timeout(char *buf, int buf_size, int timeout_seconds) {
    fd_set set;
    struct timeval timeout;
    FD_ZERO(&amp;set);
    FD_SET(STDIN_FILENO, &amp;set);
    timeout.tv_sec = timeout_seconds;
    timeout.tv_usec = 0;
    
    int rv = select(STDIN_FILENO + 1, &amp;set, NULL, NULL, &amp;timeout);
    if(rv == -1) {
        perror("select");
        return 0;
    } else if(rv == 0) {
        return 0;
    } else {
        if(fgets(buf, buf_size, stdin) == NULL) {
            return 0;
        }
        buf[strcspn(buf, "\n")] = '\0';
        return 1;
    }
}

void *overall_timer(void *arg) {
    sleep(overallExamTime);
    examTimeUp = 1;
    printf("\n⏰ *** Overall exam time is up! The exam will now end. ***\n");
    pthread_exit(NULL);
}

void *exam_session(void *arg) {
    char *roll = (char *)arg;
    char name[MAX_LINE], reg_no[MAX_LINE];
    double weightedScore = 0.0;
    int totalDifficulty = 0;
    int wrongCount = 0, attempted = 0;
    int isCheating = 0;
    time_t questionStartTime;
    int totalAnswerTime = 0;
    int responseTimes[NUM_EXAM_QUESTIONS] = {0};
    
    int correctByDifficulty[4] = {0};
    int attemptedByDifficulty[4] = {0};
    int timeByDifficulty[4] = {0};
    char* diffNames[] = {"", "⭐ Easy", "⭐⭐ Medium", "⭐⭐⭐ Hard"};
    float diffWeights[] = {0, 1.0, 1.5, 2.0};

    int indices[totalQuestions];
    for (int i = 0; i &lt; totalQuestions; i++)
        indices[i] = i;
    srand(time(NULL));
    for (int i = totalQuestions - 1; i &gt; 0; i--) {
        int j = rand() % (i + 1);
        int temp = indices[i];
        indices[i] = indices[j];
        indices[j] = temp;
    }
    
    printf("\n📝 Exam starting now. You will be shown %d questions.\n", NUM_EXAM_QUESTIONS);
    printf("⏱️  You have %d seconds per question.\n", answerTimeout);
    printf("⏳ Overall exam time: %d seconds.\n", overallExamTime);
    printf("💡 Question weights: Easy(x%.1f) Medium(x%.1f) Hard(x%.1f)\n", 
           diffWeights[1], diffWeights[2], diffWeights[3]);
    printf("🚪 Enter 'e' at any time to exit the exam.\n\n");
    
    char answerBuf[20];
    for (int i = 0; i &lt; NUM_EXAM_QUESTIONS &amp;&amp; i &lt; totalQuestions; i++) {
        if (examTimeUp) {
            printf("\n⏰ Overall exam time has expired.\n");
            break;
        }
        
        Question *q = &amp;questions[indices[i]];
        totalDifficulty += q-&gt;difficulty;

        printf("\n--------------------------------------------------\n");
        printf("| 🔹 Q%-38d | %-12s |\n", i+1, diffNames[q-&gt;difficulty]);
        printf("--------------------------------------------------\n");
        printf("| %-47s |\n", q-&gt;question);
        printf("| 🅰️  %-45s |\n", q-&gt;optionA);
        printf("| 🅱️  %-45s |\n", q-&gt;optionB);
        printf("| ©️  %-45s |\n", q-&gt;optionC);
        printf("| 🅳  %-45s |\n", q-&gt;optionD);
        printf("--------------------------------------------------\n");
        
        printf("💭 Your answer (A/B/C/D or 'e' to exit): ");
        fflush(stdout);
        
        questionStartTime = time(NULL);
        int gotInput = get_input_with_timeout(answerBuf, sizeof(answerBuf), answerTimeout);
        int answerTime = time(NULL) - questionStartTime;
        totalAnswerTime += answerTime;
        timeByDifficulty[q-&gt;difficulty] += answerTime;
        responseTimes[i] = answerTime;
        
        clear_input_buffer();
        
        if(!gotInput) {
            printf("\n⏰ Time's up for this question! No answer provided.\n");
            wrongCount++;
            attempted++;
            attemptedByDifficulty[q-&gt;difficulty]++;
            printf("\n--------------------------\n\n");
            continue;
        }
        
        if(answerBuf[0] == 'e' || answerBuf[0] == 'E') {
            printf("\n🚪 Exiting exam early...\n");
            break;
        }
        
        char userAns = toupper(answerBuf[0]);
        attempted++;
        attemptedByDifficulty[q-&gt;difficulty]++;
        
        if(answerTime &lt; MIN_ANSWER_TIME) {
            printf("\n⚠️  Warning: You answered very quickly (%d seconds).\n", answerTime);
            isCheating = 1;
        }
        
        if(userAns == q-&gt;correct) {
            printf("✅ Correct! (+%.1f points)\n", diffWeights[q-&gt;difficulty]);
            weightedScore += diffWeights[q-&gt;difficulty];
            correctByDifficulty[q-&gt;difficulty]++;
        } else {
            printf("❌ Wrong! Correct answer: %c\n", q-&gt;correct);
            wrongCount++;
        }
        printf("\n--------------------------\n\n");
    }
    
    if(attempted &gt; 0 &amp;&amp; (totalAnswerTime/attempted) &lt; MIN_ANSWER_TIME) {
        isCheating = 1;
    }
    
    int correctCount = attempted - wrongCount;
    double accuracy = (attempted &gt; 0) ? ((double)correctCount / attempted) * 100 : 0;
    
    printf("\n***********************************************************************\n");
    printf("*                         📊 DETAILED RESULTS                        *\n");
    printf("***********************************************************************\n");
    printf("| %-25s: %10.2f (Max: %.1f)                   |\n", "🎯 Weighted Score", weightedScore, 
          NUM_EXAM_QUESTIONS * diffWeights[3]);
    printf("| %-25s: %10.2f%%                                   |\n", "📈 Overall Accuracy", accuracy);
    
    printf("\n--------------------------------------------------------\n");
    printf("| %-12s | %-8s | %-8s | %-8s | %-8s |\n", "Difficulty", "Correct", "Attempted", "Accuracy", "Avg Time");
    printf("--------------------------------------------------------\n");
    
    for(int i = 1; i &lt;= 3; i++) {
        if(attemptedByDifficulty[i] &gt; 0) {
            float diffAccuracy = (float)correctByDifficulty[i]/attemptedByDifficulty[i]*100;
            float avgTime = (float)timeByDifficulty[i]/attemptedByDifficulty[i];
            
            printf("| %-12s | %-8d | %-8d | %-7.1f%% | %-7.1fs |\n",
                  diffNames[i],
                  correctByDifficulty[i],
                  attemptedByDifficulty[i],
                  diffAccuracy,
                  avgTime);
        }
    }
    
    printf("--------------------------------------------------------\n");
    printf("| %-25s: %10d                                     |\n", "📝 Total Attempted", attempted);
    printf("***********************************************************************\n\n");
    
    append_result(name, roll, weightedScore, wrongCount, attempted, isCheating, responseTimes, totalAnswerTime);
    pthread_exit(NULL);
}

void loadDashboardData() {
    FILE *file = fopen(RESULT_FILE, "r");
    if (file == NULL) return;

    studentCount = 0;
    char line[MAX_LINE];
    while (fgets(line, sizeof(line), file) &amp;&amp; studentCount &lt; MAX_STUDENTS) {
        DashboardStudent *s = &amp;dashboardStudents[studentCount];
        char *token = strtok(line, "|");
        
        strcpy(s-&gt;roll, token);
        token = strtok(NULL, "|");
        strcpy(s-&gt;name, token);
        token = strtok(NULL, "|");
        s-&gt;correctAnswers = atoi(token);
        token = strtok(NULL, "|");
        s-&gt;totalQuestions = atoi(token);
        token = strtok(NULL, "|");
        s-&gt;flagged = atoi(token);
        token = strtok(NULL, "|");
        s-&gt;totalTime = atoi(token);
        
        char *timeToken = strtok(token, ",");
        int i = 0;
        while (timeToken != NULL &amp;&amp; i &lt; NUM_EXAM_QUESTIONS) {
            s-&gt;responseTimes[i++] = atoi(timeToken);
            timeToken = strtok(NULL, ",");
        }
        
        studentCount++;
    }
    fclose(file);
}

void flagSuspiciousActivity() {
    for (int i = 0; i &lt; studentCount; ++i) {
        for (int j = 0; j &lt; dashboardStudents[i].totalQuestions; ++j) {
            if (dashboardStudents[i].responseTimes[j] &lt; 2) {
                dashboardStudents[i].flagged = 1;
                break;
            }
        }
    }
}

void rankStudents() {
    for (int i = 0; i &lt; studentCount - 1; ++i) {
        for (int j = 0; j &lt; studentCount - i - 1; ++j) {
            if (dashboardStudents[j].correctAnswers &lt; dashboardStudents[j + 1].correctAnswers) {
                DashboardStudent temp = dashboardStudents[j];
                dashboardStudents[j] = dashboardStudents[j + 1];
                dashboardStudents[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i &lt; studentCount; ++i) {
        dashboardStudents[i].rank = i + 1;
    }
}

void displayDashboard() {
    loadDashboardData();
    flagSuspiciousActivity();
    rankStudents();
    
    printf("\n\n--------------------------------------------------\n");
    printf("| Rank | Name         | Total Time | Accuracy | Flagged |\n");
    printf("--------------------------------------------------\n");

    for (int i = 0; i &lt; studentCount; ++i) {
        float accuracy = dashboardStudents[i].totalQuestions &gt; 0 ? 
            (float)dashboardStudents[i].correctAnswers / dashboardStudents[i].totalQuestions * 100 : 0;
        
        printf("| %-4d | %-12s | %-10d | %-8.2f | %-7s |\n",
               dashboardStudents[i].rank,
               dashboardStudents[i].name,
               dashboardStudents[i].totalTime,
               accuracy,
               dashboardStudents[i].flagged ? "🚩" : "✅");
    }
    printf("--------------------------------------------------\n");
}

void add_question() {
    FILE *fp = fopen(QUESTION_FILE, "a");
    if(fp == NULL) {
        perror("📛 Error opening questions file");
        return;
    }
    
    Question newQuestion;
    printf("📝 Enter the question: ");
    clear_input_buffer();
    fgets(newQuestion.question, MAX_LINE, stdin);
    trim(newQuestion.question);
    
    printf("🅰️  Enter option A: ");
    fgets(newQuestion.optionA, MAX_LINE, stdin);
    trim(newQuestion.optionA);
    
    printf("🅱️  Enter option B: ");
    fgets(newQuestion.optionB, MAX_LINE, stdin);
    trim(newQuestion.optionB);
    
    printf("©️  Enter option C: ");
    fgets(newQuestion.optionC, MAX_LINE, stdin);
    trim(newQuestion.optionC);
    
    printf("🅳  Enter option D: ");
    fgets(newQuestion.optionD, MAX_LINE, stdin);
    trim(newQuestion.optionD);
    
    printf("✅ Enter the correct option (A/B/C/D): ");
    scanf(" %c", &amp;newQuestion.correct);
    newQuestion.correct = toupper(newQuestion.correct);
    
    printf("📊 Enter difficulty level (1=Easy, 2=Medium, 3=Hard): ");
    scanf("%d", &amp;newQuestion.difficulty);
    
    fprintf(fp, "%s\n%s\n%s\n%s\n%s\n%c\n%d\n", 
           newQuestion.question, 
           newQuestion.optionA,
           newQuestion.optionB,
           newQuestion.optionC,
           newQuestion.optionD,
           newQuestion.correct,
           newQuestion.difficulty);
    
    fclose(fp);
    printf("🎉 Question added successfully!\n");
}

void set_time_limit() {
    int new_time;
    printf("⏱️  Enter the new time limit for each question (in seconds): ");
    scanf("%d", &amp;new_time);
    answerTimeout = new_time;
    
    FILE *fp = fopen(RULES_FILE, "w");
    if(fp != NULL) {
        fprintf(fp, "Time limit per question: %d\nMarks awarded for correct answer: %.2f\nMarks deducted for incorrect answer: %.2f\n", 
                answerTimeout, marksForCorrectAnswer, marksDeductedForWrongAnswer);
        fclose(fp);
    }
    printf("🔄 Time limit set to %d seconds.\n", answerTimeout);
}

void set_marking_scheme() {
    printf("➕ Enter marks for correct answer: ");
    scanf("%f", &amp;marksForCorrectAnswer);
    printf("➖ Enter marks deducted for wrong answer: ");
    scanf("%f", &amp;marksDeductedForWrongAnswer);
    
    FILE *fp = fopen(RULES_FILE, "w");
    if(fp != NULL) {
        fprintf(fp, "Time limit per question: %d\nMarks awarded for correct answer: %.2f\nMarks deducted for incorrect answer: %.2f\n", 
                answerTimeout, marksForCorrectAnswer, marksDeductedForWrongAnswer);
        fclose(fp);
    }
    printf("🔄 Marking scheme updated: +%.2f for correct, -%.2f for wrong.\n", 
           marksForCorrectAnswer, marksDeductedForWrongAnswer);
}

void instructor_menu() {
    int instructor_choice;
    do {
        printf("\n📋 Instructor Menu:\n");
        printf("1. ⏱️  Set Time Limit for Questions\n");
        printf("2. 📝 Add a Question\n");
        printf("3. 📊 Set Marking Scheme\n");
        printf("4. 📈 View Dashboard\n");
        printf("5. 🚪 Exit\n");
        printf("🎯 Enter your choice: ");
        scanf("%d", &amp;instructor_choice);
        
        switch (instructor_choice) {
            case 1:
                set_time_limit();
                break;
            case 2:
                add_question();
                break;
            case 3:
                set_marking_scheme();
                break;
            case 4:
                displayDashboard();
                break;
            case 5:
                printf("\n🚪 Exiting...\n");
                break;
            default:
                printf("\n📛 Invalid choice! Please try again.\n");
        }
        clear_input_buffer();
    } while (instructor_choice != 5);
}

int main() {
    printf("\n\n✨✨✨ Welcome to ExamSys - Online Examination System ✨✨✨\n\n");
    load_rules();
    
    int choice;
    printf("👤 Are you a:\n1. Student\n2. Instructor\n🎯 Enter your choice (1/2): ");
    scanf("%d", &amp;choice);
    
    if (choice == 1) {
        char roll[50], password[50];
        printf("\n🎓 Welcome to ExamSys Online MCQ Exam Platform\n");
        printf("📝 Enter Roll No: ");
        scanf("%s", roll);
        printf("🔒 Enter Password: ");
        clear_input_buffer();
        getPassword(password, sizeof(password));
        
        char name[MAX_LINE], reg_no[MAX_LINE];
        if(!verify_student(roll, password, name, reg_no)) {
            printf("📛 Invalid credentials! Exiting.\n");
            exit(EXIT_FAILURE);
        }
        
        printf("\n🎉 Login successful. Welcome, %s!\n", name);
        
        printf("\n====================================================\n");
        printf("| 📜          RULES FOR THE EXAM                 |\n");
        printf("====================================================\n");
        printf("| 🔹 Number of questions: 5                        |\n");
        printf("| ⏱️  Time per question: %-3d seconds                  |\n", answerTimeout);
        printf("| ➕ Marks for correct answer: %-4.2f                   |\n", marksForCorrectAnswer);
        printf("| ➖ Marks deducted for wrong answer: %-4.2f            |\n", marksDeductedForWrongAnswer);
        printf("====================================================\n");
        
        char ready;
        printf("\n🎯 Press 'R' when you are ready to start the exam: ");
        scanf(" %c", &amp;ready);
        if (toupper(ready) != 'R') {
            printf("\n🚪 Exiting exam.\n");
            exit(EXIT_SUCCESS);
        }
        
        load_questions();
        if(totalQuestions == 0) {
            printf("\n📛 No questions loaded. Exiting.\n");
            exit(EXIT_FAILURE);
        }
        
        pthread_t overallTimerThread;
        if(pthread_create(&amp;overallTimerThread, NULL, overall_timer, NULL) != 0) {
            perror("📛 Error creating overall timer thread");
            exit(EXIT_FAILURE);
        }
        
        pthread_t exam_thread;
        if(pthread_create(&amp;exam_thread, NULL, exam_session, (void *)roll) != 0) {
            perror("📛 Error creating exam thread");
            exit(EXIT_FAILURE);
        }
        
        pthread_join(exam_thread, NULL);
        pthread_join(overallTimerThread, NULL);
    } else if (choice == 2) {
        char instructor_id[50], password[50], name[MAX_LINE];
        printf("\n👨‍🏫 Enter Instructor ID: ");
        scanf("%s", instructor_id);
        printf("🔒 Enter Password: ");
        clear_input_buffer();
        getPassword(password, sizeof(password));
        
        if(!verify_instructor(instructor_id, password, name)) {
            printf("\n📛 Invalid credentials! Exiting.\n");
            exit(EXIT_FAILURE);
        }
        
        printf("\n🎉 Login successful. Welcome, %s!\n", name);
        instructor_menu();
    } else {
        printf("\n📛 Invalid choice! Exiting.\n");
        exit(EXIT_FAILURE);
    }
    
    printf("\n✨ Thank you for using ExamSys! Goodbye! ✨\n");
    return 0;
}</textarea><button hidden="" data-testid="" data-hotkey="Alt+F1,Control+Alt+˙,Control+Alt+h" data-hotkey-scope="read-only-cursor-text-area"></button><div class="Box-sc-g0xbh4-0 kHHiZS"><div tabindex="0" class="Box-sc-g0xbh4-0 jqUoVd"><div class="Box-sc-g0xbh4-0 erxPSO react-code-file-contents" role="presentation" aria-hidden="true" data-tab-size="8" data-paste-markdown-skip="true" data-hpc="true"><div class="react-line-numbers-no-virtualization" style="pointer-events: auto; position: relative; z-index: 2;"><div class="react-no-virtualization-wrapper-lines"><div data-line-number="1" class="react-line-number react-code-text" style="padding-right: 16px;">1</div><div data-line-number="2" class="react-line-number react-code-text" style="padding-right: 16px;">2</div><div data-line-number="3" class="react-line-number react-code-text" style="padding-right: 16px;">3</div><div data-line-number="4" class="react-line-number react-code-text" style="padding-right: 16px;">4</div><div data-line-number="5" class="react-line-number react-code-text" style="padding-right: 16px;">5</div><div data-line-number="6" class="react-line-number react-code-text" style="padding-right: 16px;">6</div><div data-line-number="7" class="react-line-number react-code-text" style="padding-right: 16px;">7</div><div data-line-number="8" class="react-line-number react-code-text" style="padding-right: 16px;">8</div><div data-line-number="9" class="react-line-number react-code-text" style="padding-right: 16px;">9</div><div data-line-number="10" class="react-line-number react-code-text" style="padding-right: 16px;">10</div><div data-line-number="11" class="react-line-number react-code-text" style="padding-right: 16px;">11</div><div data-line-number="12" class="react-line-number react-code-text" style="padding-right: 16px;">12</div><div data-line-number="13" class="react-line-number react-code-text" style="padding-right: 16px;">13</div><div data-line-number="14" class="react-line-number react-code-text" style="padding-right: 16px;">14</div><div data-line-number="15" class="react-line-number react-code-text" style="padding-right: 16px;">15</div><div data-line-number="16" class="react-line-number react-code-text" style="padding-right: 16px;">16</div><div data-line-number="17" class="react-line-number react-code-text" style="padding-right: 16px;">17</div><div data-line-number="18" class="react-line-number react-code-text" style="padding-right: 16px;">18</div><div data-line-number="19" class="react-line-number react-code-text" style="padding-right: 16px;">19</div><div data-line-number="20" class="react-line-number react-code-text" style="padding-right: 16px;">20</div><div data-line-number="21" class="react-line-number react-code-text" style="padding-right: 16px;">21</div><div data-line-number="22" class="react-line-number react-code-text" style="padding-right: 16px;">22</div><div data-line-number="23" class="react-line-number react-code-text" style="padding-right: 16px;">23</div><div data-line-number="24" class="react-line-number react-code-text" style="padding-right: 16px;">24</div><div data-line-number="25" class="react-line-number react-code-text" style="padding-right: 16px;">25</div><div data-line-number="26" class="react-line-number react-code-text" style="padding-right: 16px;">26</div><div data-line-number="27" class="react-line-number react-code-text" style="padding-right: 16px;">27</div><div data-line-number="28" class="react-line-number react-code-text" style="padding-right: 16px;">28</div><div data-line-number="29" class="react-line-number react-code-text" style="padding-right: 16px;">29</div><div data-line-number="30" class="react-line-number react-code-text" style="padding-right: 16px;">30</div><div data-line-number="31" class="react-line-number react-code-text" style="padding-right: 16px;">31</div><div data-line-number="32" class="react-line-number react-code-text" style="padding-right: 16px;">32</div><div data-line-number="33" class="react-line-number react-code-text" style="padding-right: 16px;">33</div><div data-line-number="34" class="react-line-number react-code-text" style="padding-right: 16px;">34</div><div data-line-number="35" class="react-line-number react-code-text" style="padding-right: 16px;">35</div><div data-line-number="36" class="react-line-number react-code-text" style="padding-right: 16px;">36</div><div data-line-number="37" class="react-line-number react-code-text" style="padding-right: 16px;">37</div><div data-line-number="38" class="react-line-number react-code-text" style="padding-right: 16px;">38</div><div data-line-number="39" class="react-line-number react-code-text" style="padding-right: 16px;">39</div><div data-line-number="40" class="react-line-number react-code-text" style="padding-right: 16px;">40</div><div data-line-number="41" class="react-line-number react-code-text" style="padding-right: 16px;">41</div><div data-line-number="42" class="react-line-number react-code-text" style="padding-right: 16px;">42</div><div data-line-number="43" class="react-line-number react-code-text" style="padding-right: 16px;">43</div><div data-line-number="44" class="react-line-number react-code-text" style="padding-right: 16px;">44</div><div data-line-number="45" class="react-line-number react-code-text" style="padding-right: 16px;">45</div><div data-line-number="46" class="react-line-number react-code-text" style="padding-right: 16px;">46</div><div data-line-number="47" class="react-line-number react-code-text" style="padding-right: 16px;">47</div><div data-line-number="48" class="react-line-number react-code-text" style="padding-right: 16px;">48</div><div data-line-number="49" class="react-line-number react-code-text" style="padding-right: 16px;">49</div><div data-line-number="50" class="react-line-number react-code-text" style="padding-right: 16px;">50</div><div data-line-number="51" class="react-line-number react-code-text" style="padding-right: 16px;">51</div><div data-line-number="52" class="react-line-number react-code-text" style="padding-right: 16px;">52</div><div data-line-number="53" class="react-line-number react-code-text" style="padding-right: 16px;">53</div><div data-line-number="54" class="react-line-number react-code-text" style="padding-right: 16px;">54</div><div data-line-number="55" class="react-line-number react-code-text" style="padding-right: 16px;">55</div><div data-line-number="56" class="react-line-number react-code-text" style="padding-right: 16px;">56</div><div data-line-number="57" class="react-line-number react-code-text" style="padding-right: 16px;">57</div><div data-line-number="58" class="react-line-number react-code-text" style="padding-right: 16px;">58</div><div data-line-number="59" class="react-line-number react-code-text" style="padding-right: 16px;">59</div><div data-line-number="60" class="react-line-number react-code-text" style="padding-right: 16px;">60</div></div><div class="react-no-virtualization-wrapper-lines"><div data-line-number="61" class="react-line-number react-code-text" style="padding-right: 16px;">61</div><div data-line-number="62" class="react-line-number react-code-text" style="padding-right: 16px;">62</div><div data-line-number="63" class="react-line-number react-code-text" style="padding-right: 16px;">63</div><div data-line-number="64" class="react-line-number react-code-text" style="padding-right: 16px;">64</div><div data-line-number="65" class="react-line-number react-code-text" style="padding-right: 16px;">65</div><div data-line-number="66" class="react-line-number react-code-text" style="padding-right: 16px;">66</div><div data-line-number="67" class="react-line-number react-code-text" style="padding-right: 16px;">67</div><div data-line-number="68" class="react-line-number react-code-text" style="padding-right: 16px;">68</div><div data-line-number="69" class="react-line-number react-code-text" style="padding-right: 16px;">69</div><div data-line-number="70" class="react-line-number react-code-text" style="padding-right: 16px;">70</div><div data-line-number="71" class="react-line-number react-code-text" style="padding-right: 16px;">71</div><div data-line-number="72" class="react-line-number react-code-text" style="padding-right: 16px;">72</div><div data-line-number="73" class="react-line-number react-code-text" style="padding-right: 16px;">73</div><div data-line-number="74" class="react-line-number react-code-text" style="padding-right: 16px;">74</div><div data-line-number="75" class="react-line-number react-code-text" style="padding-right: 16px;">75</div><div data-line-number="76" class="react-line-number react-code-text" style="padding-right: 16px;">76</div><div data-line-number="77" class="react-line-number react-code-text" style="padding-right: 16px;">77</div><div data-line-number="78" class="react-line-number react-code-text" style="padding-right: 16px;">78</div><div data-line-number="79" class="react-line-number react-code-text" style="padding-right: 16px;">79</div><div data-line-number="80" class="react-line-number react-code-text" style="padding-right: 16px;">80</div><div data-line-number="81" class="react-line-number react-code-text" style="padding-right: 16px;">81</div><div data-line-number="82" class="react-line-number react-code-text" style="padding-right: 16px;">82</div><div data-line-number="83" class="react-line-number react-code-text" style="padding-right: 16px;">83</div><div data-line-number="84" class="react-line-number react-code-text" style="padding-right: 16px;">84</div><div data-line-number="85" class="react-line-number react-code-text" style="padding-right: 16px;">85</div><div data-line-number="86" class="react-line-number react-code-text" style="padding-right: 16px;">86</div><div data-line-number="87" class="react-line-number react-code-text" style="padding-right: 16px;">87</div><div data-line-number="88" class="react-line-number react-code-text" style="padding-right: 16px;">88</div><div data-line-number="89" class="react-line-number react-code-text" style="padding-right: 16px;">89</div><div data-line-number="90" class="react-line-number react-code-text" style="padding-right: 16px;">90</div><div data-line-number="91" class="react-line-number react-code-text" style="padding-right: 16px;">91</div><div data-line-number="92" class="react-line-number react-code-text" style="padding-right: 16px;">92</div><div data-line-number="93" class="react-line-number react-code-text" style="padding-right: 16px;">93</div><div data-line-number="94" class="react-line-number react-code-text" style="padding-right: 16px;">94</div><div data-line-number="95" class="react-line-number react-code-text" style="padding-right: 16px;">95</div><div data-line-number="96" class="react-line-number react-code-text" style="padding-right: 16px;">96</div><div data-line-number="97" class="react-line-number react-code-text" style="padding-right: 16px;">97</div><div data-line-number="98" class="react-line-number react-code-text" style="padding-right: 16px;">98</div><div data-line-number="99" class="react-line-number react-code-text" style="padding-right: 16px;">99</div><div data-line-number="100" class="react-line-number react-code-text" style="padding-right: 16px;">100</div><div data-line-number="101" class="react-line-number react-code-text" style="padding-right: 16px;">101</div><div data-line-number="102" class="react-line-number react-code-text" style="padding-right: 16px;">102</div><div data-line-number="103" class="react-line-number react-code-text" style="padding-right: 16px;">103</div><div data-line-number="104" class="react-line-number react-code-text" style="padding-right: 16px;">104</div><div data-line-number="105" class="react-line-number react-code-text" style="padding-right: 16px;">105</div><div data-line-number="106" class="react-line-number react-code-text" style="padding-right: 16px;">106</div><div data-line-number="107" class="react-line-number react-code-text" style="padding-right: 16px;">107</div><div data-line-number="108" class="react-line-number react-code-text" style="padding-right: 16px;">108</div><div data-line-number="109" class="react-line-number react-code-text" style="padding-right: 16px;">109</div><div data-line-number="110" class="react-line-number react-code-text" style="padding-right: 16px;">110</div><div data-line-number="111" class="react-line-number react-code-text" style="padding-right: 16px;">111</div><div data-line-number="112" class="react-line-number react-code-text" style="padding-right: 16px;">112</div><div data-line-number="113" class="react-line-number react-code-text" style="padding-right: 16px;">113</div><div data-line-number="114" class="react-line-number react-code-text" style="padding-right: 16px;">114</div><div data-line-number="115" class="react-line-number react-code-text" style="padding-right: 16px;">115</div><div data-line-number="116" class="react-line-number react-code-text" style="padding-right: 16px;">116</div><div data-line-number="117" class="react-line-number react-code-text" style="padding-right: 16px;">117</div><div data-line-number="118" class="react-line-number react-code-text" style="padding-right: 16px;">118</div><div data-line-number="119" class="react-line-number react-code-text" style="padding-right: 16px;">119</div><div data-line-number="120" class="react-line-number react-code-text" style="padding-right: 16px;">120</div></div><div class="react-no-virtualization-wrapper-lines"><div data-line-number="121" class="react-line-number react-code-text" style="padding-right: 16px;">121</div><div data-line-number="122" class="react-line-number react-code-text" style="padding-right: 16px;">122</div><div data-line-number="123" class="react-line-number react-code-text" style="padding-right: 16px;">123</div><div data-line-number="124" class="react-line-number react-code-text" style="padding-right: 16px;">124</div><div data-line-number="125" class="react-line-number react-code-text" style="padding-right: 16px;">125</div><div data-line-number="126" class="react-line-number react-code-text" style="padding-right: 16px;">126</div><div data-line-number="127" class="react-line-number react-code-text" style="padding-right: 16px;">127</div><div data-line-number="128" class="react-line-number react-code-text" style="padding-right: 16px;">128</div><div data-line-number="129" class="react-line-number react-code-text" style="padding-right: 16px;">129</div><div data-line-number="130" class="react-line-number react-code-text" style="padding-right: 16px;">130</div><div data-line-number="131" class="react-line-number react-code-text" style="padding-right: 16px;">131</div><div data-line-number="132" class="react-line-number react-code-text" style="padding-right: 16px;">132</div><div data-line-number="133" class="react-line-number react-code-text" style="padding-right: 16px;">133</div><div data-line-number="134" class="react-line-number react-code-text" style="padding-right: 16px;">134</div><div data-line-number="135" class="react-line-number react-code-text" style="padding-right: 16px;">135</div><div data-line-number="136" class="react-line-number react-code-text" style="padding-right: 16px;">136</div><div data-line-number="137" class="react-line-number react-code-text" style="padding-right: 16px;">137</div><div data-line-number="138" class="react-line-number react-code-text" style="padding-right: 16px;">138</div><div data-line-number="139" class="react-line-number react-code-text" style="padding-right: 16px;">139</div><div data-line-number="140" class="react-line-number react-code-text" style="padding-right: 16px;">140</div><div data-line-number="141" class="react-line-number react-code-text" style="padding-right: 16px;">141</div><div data-line-number="142" class="react-line-number react-code-text" style="padding-right: 16px;">142</div><div data-line-number="143" class="react-line-number react-code-text" style="padding-right: 16px;">143</div><div data-line-number="144" class="react-line-number react-code-text" style="padding-right: 16px;">144</div><div data-line-number="145" class="react-line-number react-code-text" style="padding-right: 16px;">145</div><div data-line-number="146" class="react-line-number react-code-text" style="padding-right: 16px;">146</div><div data-line-number="147" class="react-line-number react-code-text" style="padding-right: 16px;">147</div><div data-line-number="148" class="react-line-number react-code-text" style="padding-right: 16px;">148</div><div data-line-number="149" class="react-line-number react-code-text" style="padding-right: 16px;">149</div><div data-line-number="150" class="react-line-number react-code-text" style="padding-right: 16px;">150</div><div data-line-number="151" class="react-line-number react-code-text" style="padding-right: 16px;">151</div><div data-line-number="152" class="react-line-number react-code-text" style="padding-right: 16px;">152</div><div data-line-number="153" class="react-line-number react-code-text" style="padding-right: 16px;">153</div><div data-line-number="154" class="react-line-number react-code-text" style="padding-right: 16px;">154</div><div data-line-number="155" class="react-line-number react-code-text" style="padding-right: 16px;">155</div><div data-line-number="156" class="react-line-number react-code-text" style="padding-right: 16px;">156</div><div data-line-number="157" class="react-line-number react-code-text" style="padding-right: 16px;">157</div><div data-line-number="158" class="react-line-number react-code-text" style="padding-right: 16px;">158</div><div data-line-number="159" class="react-line-number react-code-text" style="padding-right: 16px;">159</div><div data-line-number="160" class="react-line-number react-code-text" style="padding-right: 16px;">160</div><div data-line-number="161" class="react-line-number react-code-text" style="padding-right: 16px;">161</div><div data-line-number="162" class="react-line-number react-code-text" style="padding-right: 16px;">162</div><div data-line-number="163" class="react-line-number react-code-text" style="padding-right: 16px;">163</div><div data-line-number="164" class="react-line-number react-code-text" style="padding-right: 16px;">164</div><div data-line-number="165" class="react-line-number react-code-text" style="padding-right: 16px;">165</div><div data-line-number="166" class="react-line-number react-code-text" style="padding-right: 16px;">166</div><div data-line-number="167" class="react-line-number react-code-text" style="padding-right: 16px;">167</div><div data-line-number="168" class="react-line-number react-code-text" style="padding-right: 16px;">168</div><div data-line-number="169" class="react-line-number react-code-text" style="padding-right: 16px;">169</div><div data-line-number="170" class="react-line-number react-code-text" style="padding-right: 16px;">170</div><div data-line-number="171" class="react-line-number react-code-text" style="padding-right: 16px;">171</div><div data-line-number="172" class="react-line-number react-code-text" style="padding-right: 16px;">172</div><div data-line-number="173" class="react-line-number react-code-text" style="padding-right: 16px;">173</div><div data-line-number="174" class="react-line-number react-code-text" style="padding-right: 16px;">174</div><div data-line-number="175" class="react-line-number react-code-text" style="padding-right: 16px;">175</div><div data-line-number="176" class="react-line-number react-code-text" style="padding-right: 16px;">176</div><div data-line-number="177" class="react-line-number react-code-text" style="padding-right: 16px;">177</div><div data-line-number="178" class="react-line-number react-code-text" style="padding-right: 16px;">178</div><div data-line-number="179" class="react-line-number react-code-text" style="padding-right: 16px;">179</div><div data-line-number="180" class="react-line-number react-code-text" style="padding-right: 16px;">180</div></div><div class="react-no-virtualization-wrapper-lines"><div data-line-number="181" class="react-line-number react-code-text" style="padding-right: 16px;">181</div><div data-line-number="182" class="react-line-number react-code-text" style="padding-right: 16px;">182</div><div data-line-number="183" class="react-line-number react-code-text" style="padding-right: 16px;">183</div><div data-line-number="184" class="react-line-number react-code-text" style="padding-right: 16px;">184</div><div data-line-number="185" class="react-line-number react-code-text" style="padding-right: 16px;">185</div><div data-line-number="186" class="react-line-number react-code-text" style="padding-right: 16px;">186</div><div data-line-number="187" class="react-line-number react-code-text" style="padding-right: 16px;">187</div><div data-line-number="188" class="react-line-number react-code-text" style="padding-right: 16px;">188</div><div data-line-number="189" class="react-line-number react-code-text" style="padding-right: 16px;">189</div><div data-line-number="190" class="react-line-number react-code-text" style="padding-right: 16px;">190</div><div data-line-number="191" class="react-line-number react-code-text" style="padding-right: 16px;">191</div><div data-line-number="192" class="react-line-number react-code-text" style="padding-right: 16px;">192</div><div data-line-number="193" class="react-line-number react-code-text" style="padding-right: 16px;">193</div><div data-line-number="194" class="react-line-number react-code-text" style="padding-right: 16px;">194</div><div data-line-number="195" class="react-line-number react-code-text" style="padding-right: 16px;">195</div><div data-line-number="196" class="react-line-number react-code-text" style="padding-right: 16px;">196</div><div data-line-number="197" class="react-line-number react-code-text" style="padding-right: 16px;">197</div><div data-line-number="198" class="react-line-number react-code-text" style="padding-right: 16px;">198</div><div data-line-number="199" class="react-line-number react-code-text" style="padding-right: 16px;">199</div><div data-line-number="200" class="react-line-number react-code-text" style="padding-right: 16px;">200</div><div data-line-number="201" class="react-line-number react-code-text" style="padding-right: 16px;">201</div><div data-line-number="202" class="react-line-number react-code-text" style="padding-right: 16px;">202</div><div data-line-number="203" class="react-line-number react-code-text" style="padding-right: 16px;">203</div><div data-line-number="204" class="react-line-number react-code-text" style="padding-right: 16px;">204</div><div data-line-number="205" class="react-line-number react-code-text" style="padding-right: 16px;">205</div><div data-line-number="206" class="react-line-number react-code-text" style="padding-right: 16px;">206</div><div data-line-number="207" class="react-line-number react-code-text" style="padding-right: 16px;">207</div><div data-line-number="208" class="react-line-number react-code-text" style="padding-right: 16px;">208</div><div data-line-number="209" class="react-line-number react-code-text" style="padding-right: 16px;">209</div><div data-line-number="210" class="react-line-number react-code-text" style="padding-right: 16px;">210</div><div data-line-number="211" class="react-line-number react-code-text" style="padding-right: 16px;">211</div><div data-line-number="212" class="react-line-number react-code-text" style="padding-right: 16px;">212</div><div data-line-number="213" class="react-line-number react-code-text" style="padding-right: 16px;">213</div><div data-line-number="214" class="react-line-number react-code-text" style="padding-right: 16px;">214</div><div data-line-number="215" class="react-line-number react-code-text" style="padding-right: 16px;">215</div><div data-line-number="216" class="react-line-number react-code-text" style="padding-right: 16px;">216</div><div data-line-number="217" class="react-line-number react-code-text" style="padding-right: 16px;">217</div><div data-line-number="218" class="react-line-number react-code-text" style="padding-right: 16px;">218</div><div data-line-number="219" class="react-line-number react-code-text" style="padding-right: 16px;">219</div><div data-line-number="220" class="react-line-number react-code-text" style="padding-right: 16px;">220</div><div data-line-number="221" class="react-line-number react-code-text" style="padding-right: 16px;">221</div><div data-line-number="222" class="react-line-number react-code-text" style="padding-right: 16px;">222</div><div data-line-number="223" class="react-line-number react-code-text" style="padding-right: 16px;">223</div><div data-line-number="224" class="react-line-number react-code-text" style="padding-right: 16px;">224</div><div data-line-number="225" class="react-line-number react-code-text" style="padding-right: 16px;">225</div><div data-line-number="226" class="react-line-number react-code-text" style="padding-right: 16px;">226</div><div data-line-number="227" class="react-line-number react-code-text" style="padding-right: 16px;">227</div><div data-line-number="228" class="react-line-number react-code-text" style="padding-right: 16px;">228</div><div data-line-number="229" class="react-line-number react-code-text" style="padding-right: 16px;">229</div><div data-line-number="230" class="react-line-number react-code-text" style="padding-right: 16px;">230</div><div data-line-number="231" class="react-line-number react-code-text" style="padding-right: 16px;">231</div><div data-line-number="232" class="react-line-number react-code-text" style="padding-right: 16px;">232</div><div data-line-number="233" class="react-line-number react-code-text" style="padding-right: 16px;">233</div><div data-line-number="234" class="react-line-number react-code-text" style="padding-right: 16px;">234</div><div data-line-number="235" class="react-line-number react-code-text" style="padding-right: 16px;">235</div><div data-line-number="236" class="react-line-number react-code-text" style="padding-right: 16px;">236</div><div data-line-number="237" class="react-line-number react-code-text" style="padding-right: 16px;">237</div><div data-line-number="238" class="react-line-number react-code-text" style="padding-right: 16px;">238</div><div data-line-number="239" class="react-line-number react-code-text" style="padding-right: 16px;">239</div><div data-line-number="240" class="react-line-number react-code-text" style="padding-right: 16px;">240</div></div><div class="react-no-virtualization-wrapper-lines"><div data-line-number="241" class="react-line-number react-code-text" style="padding-right: 16px;">241</div><div data-line-number="242" class="react-line-number react-code-text" style="padding-right: 16px;">242</div><div data-line-number="243" class="react-line-number react-code-text" style="padding-right: 16px;">243</div><div data-line-number="244" class="react-line-number react-code-text" style="padding-right: 16px;">244</div><div data-line-number="245" class="react-line-number react-code-text" style="padding-right: 16px;">245</div><div data-line-number="246" class="react-line-number react-code-text" style="padding-right: 16px;">246</div><div data-line-number="247" class="react-line-number react-code-text" style="padding-right: 16px;">247</div><div data-line-number="248" class="react-line-number react-code-text" style="padding-right: 16px;">248</div><div data-line-number="249" class="react-line-number react-code-text" style="padding-right: 16px;">249</div><div data-line-number="250" class="react-line-number react-code-text" style="padding-right: 16px;">250</div><div data-line-number="251" class="react-line-number react-code-text" style="padding-right: 16px;">251</div><div data-line-number="252" class="react-line-number react-code-text" style="padding-right: 16px;">252</div><div data-line-number="253" class="react-line-number react-code-text" style="padding-right: 16px;">253</div><div data-line-number="254" class="react-line-number react-code-text" style="padding-right: 16px;">254</div><div data-line-number="255" class="react-line-number react-code-text" style="padding-right: 16px;">255</div><div data-line-number="256" class="react-line-number react-code-text" style="padding-right: 16px;">256</div><div data-line-number="257" class="react-line-number react-code-text" style="padding-right: 16px;">257</div><div data-line-number="258" class="react-line-number react-code-text" style="padding-right: 16px;">258</div><div data-line-number="259" class="react-line-number react-code-text" style="padding-right: 16px;">259</div><div data-line-number="260" class="react-line-number react-code-text" style="padding-right: 16px;">260</div><div data-line-number="261" class="react-line-number react-code-text" style="padding-right: 16px;">261</div><div data-line-number="262" class="react-line-number react-code-text" style="padding-right: 16px;">262</div><div data-line-number="263" class="react-line-number react-code-text" style="padding-right: 16px;">263</div><div data-line-number="264" class="react-line-number react-code-text" style="padding-right: 16px;">264</div><div data-line-number="265" class="react-line-number react-code-text" style="padding-right: 16px;">265</div><div data-line-number="266" class="react-line-number react-code-text" style="padding-right: 16px;">266</div><div data-line-number="267" class="react-line-number react-code-text" style="padding-right: 16px;">267</div><div data-line-number="268" class="react-line-number react-code-text" style="padding-right: 16px;">268</div><div data-line-number="269" class="react-line-number react-code-text" style="padding-right: 16px;">269</div><div data-line-number="270" class="react-line-number react-code-text" style="padding-right: 16px;">270</div><div data-line-number="271" class="react-line-number react-code-text" style="padding-right: 16px;">271</div><div data-line-number="272" class="react-line-number react-code-text" style="padding-right: 16px;">272</div><div data-line-number="273" class="react-line-number react-code-text" style="padding-right: 16px;">273</div><div data-line-number="274" class="react-line-number react-code-text" style="padding-right: 16px;">274</div><div data-line-number="275" class="react-line-number react-code-text" style="padding-right: 16px;">275</div><div data-line-number="276" class="react-line-number react-code-text" style="padding-right: 16px;">276</div><div data-line-number="277" class="react-line-number react-code-text" style="padding-right: 16px;">277</div><div data-line-number="278" class="react-line-number react-code-text" style="padding-right: 16px;">278</div><div data-line-number="279" class="react-line-number react-code-text" style="padding-right: 16px;">279</div><div data-line-number="280" class="react-line-number react-code-text" style="padding-right: 16px;">280</div><div data-line-number="281" class="react-line-number react-code-text" style="padding-right: 16px;">281</div><div data-line-number="282" class="react-line-number react-code-text" style="padding-right: 16px;">282</div><div data-line-number="283" class="react-line-number react-code-text" style="padding-right: 16px;">283</div><div data-line-number="284" class="react-line-number react-code-text" style="padding-right: 16px;">284</div><div data-line-number="285" class="react-line-number react-code-text" style="padding-right: 16px;">285</div><div data-line-number="286" class="react-line-number react-code-text" style="padding-right: 16px;">286</div><div data-line-number="287" class="react-line-number react-code-text" style="padding-right: 16px;">287</div><div data-line-number="288" class="react-line-number react-code-text" style="padding-right: 16px;">288</div><div data-line-number="289" class="react-line-number react-code-text" style="padding-right: 16px;">289</div><div data-line-number="290" class="react-line-number react-code-text" style="padding-right: 16px;">290</div><div data-line-number="291" class="react-line-number react-code-text" style="padding-right: 16px;">291</div><div data-line-number="292" class="react-line-number react-code-text" style="padding-right: 16px;">292</div><div data-line-number="293" class="react-line-number react-code-text" style="padding-right: 16px;">293</div><div data-line-number="294" class="react-line-number react-code-text" style="padding-right: 16px;">294</div><div data-line-number="295" class="react-line-number react-code-text" style="padding-right: 16px;">295</div><div data-line-number="296" class="react-line-number react-code-text" style="padding-right: 16px;">296</div><div data-line-number="297" class="react-line-number react-code-text" style="padding-right: 16px;">297</div><div data-line-number="298" class="react-line-number react-code-text" style="padding-right: 16px;">298</div><div data-line-number="299" class="react-line-number react-code-text" style="padding-right: 16px;">299</div><div data-line-number="300" class="react-line-number react-code-text" style="padding-right: 16px;">300</div></div><div class="react-no-virtualization-wrapper-lines"><div data-line-number="301" class="react-line-number react-code-text" style="padding-right: 16px;">301</div><div data-line-number="302" class="react-line-number react-code-text" style="padding-right: 16px;">302</div><div data-line-number="303" class="react-line-number react-code-text" style="padding-right: 16px;">303</div><div data-line-number="304" class="react-line-number react-code-text" style="padding-right: 16px;">304</div><div data-line-number="305" class="react-line-number react-code-text" style="padding-right: 16px;">305</div><div data-line-number="306" class="react-line-number react-code-text" style="padding-right: 16px;">306</div><div data-line-number="307" class="react-line-number react-code-text" style="padding-right: 16px;">307</div><div data-line-number="308" class="react-line-number react-code-text" style="padding-right: 16px;">308</div><div data-line-number="309" class="react-line-number react-code-text" style="padding-right: 16px;">309</div><div data-line-number="310" class="react-line-number react-code-text" style="padding-right: 16px;">310</div><div data-line-number="311" class="react-line-number react-code-text" style="padding-right: 16px;">311</div><div data-line-number="312" class="react-line-number react-code-text" style="padding-right: 16px;">312</div><div data-line-number="313" class="react-line-number react-code-text" style="padding-right: 16px;">313</div><div data-line-number="314" class="react-line-number react-code-text" style="padding-right: 16px;">314</div><div data-line-number="315" class="react-line-number react-code-text" style="padding-right: 16px;">315</div><div data-line-number="316" class="react-line-number react-code-text" style="padding-right: 16px;">316</div><div data-line-number="317" class="react-line-number react-code-text" style="padding-right: 16px;">317</div><div data-line-number="318" class="react-line-number react-code-text" style="padding-right: 16px;">318</div><div data-line-number="319" class="react-line-number react-code-text" style="padding-right: 16px;">319</div><div data-line-number="320" class="react-line-number react-code-text" style="padding-right: 16px;">320</div><div data-line-number="321" class="react-line-number react-code-text" style="padding-right: 16px;">321</div><div data-line-number="322" class="react-line-number react-code-text" style="padding-right: 16px;">322</div><div data-line-number="323" class="react-line-number react-code-text" style="padding-right: 16px;">323</div><div data-line-number="324" class="react-line-number react-code-text" style="padding-right: 16px;">324</div><div data-line-number="325" class="react-line-number react-code-text" style="padding-right: 16px;">325</div><div data-line-number="326" class="react-line-number react-code-text" style="padding-right: 16px;">326</div><div data-line-number="327" class="react-line-number react-code-text" style="padding-right: 16px;">327</div><div data-line-number="328" class="react-line-number react-code-text" style="padding-right: 16px;">328</div><div data-line-number="329" class="react-line-number react-code-text" style="padding-right: 16px;">329</div><div data-line-number="330" class="react-line-number react-code-text" style="padding-right: 16px;">330</div><div data-line-number="331" class="react-line-number react-code-text" style="padding-right: 16px;">331</div><div data-line-number="332" class="react-line-number react-code-text" style="padding-right: 16px;">332</div><div data-line-number="333" class="react-line-number react-code-text" style="padding-right: 16px;">333</div><div data-line-number="334" class="react-line-number react-code-text" style="padding-right: 16px;">334</div><div data-line-number="335" class="react-line-number react-code-text" style="padding-right: 16px;">335</div><div data-line-number="336" class="react-line-number react-code-text" style="padding-right: 16px;">336</div><div data-line-number="337" class="react-line-number react-code-text" style="padding-right: 16px;">337</div><div data-line-number="338" class="react-line-number react-code-text" style="padding-right: 16px;">338</div><div data-line-number="339" class="react-line-number react-code-text" style="padding-right: 16px;">339</div><div data-line-number="340" class="react-line-number react-code-text" style="padding-right: 16px;">340</div><div data-line-number="341" class="react-line-number react-code-text" style="padding-right: 16px;">341</div><div data-line-number="342" class="react-line-number react-code-text" style="padding-right: 16px;">342</div><div data-line-number="343" class="react-line-number react-code-text" style="padding-right: 16px;">343</div><div data-line-number="344" class="react-line-number react-code-text" style="padding-right: 16px;">344</div><div data-line-number="345" class="react-line-number react-code-text" style="padding-right: 16px;">345</div><div data-line-number="346" class="react-line-number react-code-text" style="padding-right: 16px;">346</div><div data-line-number="347" class="react-line-number react-code-text" style="padding-right: 16px;">347</div><div data-line-number="348" class="react-line-number react-code-text" style="padding-right: 16px;">348</div><div data-line-number="349" class="react-line-number react-code-text" style="padding-right: 16px;">349</div><div data-line-number="350" class="react-line-number react-code-text" style="padding-right: 16px;">350</div><div data-line-number="351" class="react-line-number react-code-text" style="padding-right: 16px;">351</div><div data-line-number="352" class="react-line-number react-code-text" style="padding-right: 16px;">352</div><div data-line-number="353" class="react-line-number react-code-text" style="padding-right: 16px;">353</div><div data-line-number="354" class="react-line-number react-code-text" style="padding-right: 16px;">354</div><div data-line-number="355" class="react-line-number react-code-text" style="padding-right: 16px;">355</div><div data-line-number="356" class="react-line-number react-code-text" style="padding-right: 16px;">356</div><div data-line-number="357" class="react-line-number react-code-text" style="padding-right: 16px;">357</div><div data-line-number="358" class="react-line-number react-code-text" style="padding-right: 16px;">358</div><div data-line-number="359" class="react-line-number react-code-text" style="padding-right: 16px;">359</div><div data-line-number="360" class="react-line-number react-code-text" style="padding-right: 16px;">360</div></div><div class="react-no-virtualization-wrapper-lines"><div data-line-number="361" class="react-line-number react-code-text" style="padding-right: 16px;">361</div><div data-line-number="362" class="react-line-number react-code-text" style="padding-right: 16px;">362</div><div data-line-number="363" class="react-line-number react-code-text" style="padding-right: 16px;">363</div><div data-line-number="364" class="react-line-number react-code-text" style="padding-right: 16px;">364</div><div data-line-number="365" class="react-line-number react-code-text" style="padding-right: 16px;">365</div><div data-line-number="366" class="react-line-number react-code-text" style="padding-right: 16px;">366</div><div data-line-number="367" class="react-line-number react-code-text" style="padding-right: 16px;">367</div><div data-line-number="368" class="react-line-number react-code-text" style="padding-right: 16px;">368</div><div data-line-number="369" class="react-line-number react-code-text" style="padding-right: 16px;">369</div><div data-line-number="370" class="react-line-number react-code-text" style="padding-right: 16px;">370</div><div data-line-number="371" class="react-line-number react-code-text" style="padding-right: 16px;">371</div><div data-line-number="372" class="react-line-number react-code-text" style="padding-right: 16px;">372</div><div data-line-number="373" class="react-line-number react-code-text" style="padding-right: 16px;">373</div><div data-line-number="374" class="react-line-number react-code-text" style="padding-right: 16px;">374</div><div data-line-number="375" class="react-line-number react-code-text" style="padding-right: 16px;">375</div><div data-line-number="376" class="react-line-number react-code-text" style="padding-right: 16px;">376</div><div data-line-number="377" class="react-line-number react-code-text" style="padding-right: 16px;">377</div><div data-line-number="378" class="react-line-number react-code-text" style="padding-right: 16px;">378</div><div data-line-number="379" class="react-line-number react-code-text" style="padding-right: 16px;">379</div><div data-line-number="380" class="react-line-number react-code-text" style="padding-right: 16px;">380</div><div data-line-number="381" class="react-line-number react-code-text" style="padding-right: 16px;">381</div><div data-line-number="382" class="react-line-number react-code-text" style="padding-right: 16px;">382</div><div data-line-number="383" class="react-line-number react-code-text" style="padding-right: 16px;">383</div><div data-line-number="384" class="react-line-number react-code-text" style="padding-right: 16px;">384</div><div data-line-number="385" class="react-line-number react-code-text" style="padding-right: 16px;">385</div><div data-line-number="386" class="react-line-number react-code-text" style="padding-right: 16px;">386</div><div data-line-number="387" class="react-line-number react-code-text" style="padding-right: 16px;">387</div><div data-line-number="388" class="react-line-number react-code-text" style="padding-right: 16px;">388</div><div data-line-number="389" class="react-line-number react-code-text" style="padding-right: 16px;">389</div><div data-line-number="390" class="react-line-number react-code-text" style="padding-right: 16px;">390</div><div data-line-number="391" class="react-line-number react-code-text" style="padding-right: 16px;">391</div><div data-line-number="392" class="react-line-number react-code-text" style="padding-right: 16px;">392</div><div data-line-number="393" class="react-line-number react-code-text" style="padding-right: 16px;">393</div><div data-line-number="394" class="react-line-number react-code-text" style="padding-right: 16px;">394</div><div data-line-number="395" class="react-line-number react-code-text" style="padding-right: 16px;">395</div><div data-line-number="396" class="react-line-number react-code-text" style="padding-right: 16px;">396</div><div data-line-number="397" class="react-line-number react-code-text" style="padding-right: 16px;">397</div><div data-line-number="398" class="react-line-number react-code-text" style="padding-right: 16px;">398</div><div data-line-number="399" class="react-line-number react-code-text" style="padding-right: 16px;">399</div><div data-line-number="400" class="react-line-number react-code-text" style="padding-right: 16px;">400</div><div data-line-number="401" class="react-line-number react-code-text" style="padding-right: 16px;">401</div><div data-line-number="402" class="react-line-number react-code-text" style="padding-right: 16px;">402</div><div data-line-number="403" class="react-line-number react-code-text" style="padding-right: 16px;">403</div><div data-line-number="404" class="react-line-number react-code-text" style="padding-right: 16px;">404</div><div data-line-number="405" class="react-line-number react-code-text" style="padding-right: 16px;">405</div><div data-line-number="406" class="react-line-number react-code-text" style="padding-right: 16px;">406</div><div data-line-number="407" class="react-line-number react-code-text" style="padding-right: 16px;">407</div><div data-line-number="408" class="react-line-number react-code-text" style="padding-right: 16px;">408</div><div data-line-number="409" class="react-line-number react-code-text" style="padding-right: 16px;">409</div><div data-line-number="410" class="react-line-number react-code-text" style="padding-right: 16px;">410</div><div data-line-number="411" class="react-line-number react-code-text" style="padding-right: 16px;">411</div><div data-line-number="412" class="react-line-number react-code-text" style="padding-right: 16px;">412</div><div data-line-number="413" class="react-line-number react-code-text" style="padding-right: 16px;">413</div><div data-line-number="414" class="react-line-number react-code-text" style="padding-right: 16px;">414</div><div data-line-number="415" class="react-line-number react-code-text" style="padding-right: 16px;">415</div><div data-line-number="416" class="react-line-number react-code-text" style="padding-right: 16px;">416</div><div data-line-number="417" class="react-line-number react-code-text" style="padding-right: 16px;">417</div><div data-line-number="418" class="react-line-number react-code-text" style="padding-right: 16px;">418</div><div data-line-number="419" class="react-line-number react-code-text" style="padding-right: 16px;">419</div><div data-line-number="420" class="react-line-number react-code-text" style="padding-right: 16px;">420</div></div><div class="react-no-virtualization-wrapper-lines"><div data-line-number="421" class="react-line-number react-code-text" style="padding-right: 16px;">421</div><div data-line-number="422" class="react-line-number react-code-text" style="padding-right: 16px;">422</div><div data-line-number="423" class="react-line-number react-code-text" style="padding-right: 16px;">423</div><div data-line-number="424" class="react-line-number react-code-text" style="padding-right: 16px;">424</div><div data-line-number="425" class="react-line-number react-code-text" style="padding-right: 16px;">425</div><div data-line-number="426" class="react-line-number react-code-text" style="padding-right: 16px;">426</div><div data-line-number="427" class="react-line-number react-code-text" style="padding-right: 16px;">427</div><div data-line-number="428" class="react-line-number react-code-text" style="padding-right: 16px;">428</div><div data-line-number="429" class="react-line-number react-code-text" style="padding-right: 16px;">429</div><div data-line-number="430" class="react-line-number react-code-text" style="padding-right: 16px;">430</div><div data-line-number="431" class="react-line-number react-code-text" style="padding-right: 16px;">431</div><div data-line-number="432" class="react-line-number react-code-text" style="padding-right: 16px;">432</div><div data-line-number="433" class="react-line-number react-code-text" style="padding-right: 16px;">433</div><div data-line-number="434" class="react-line-number react-code-text" style="padding-right: 16px;">434</div><div data-line-number="435" class="react-line-number react-code-text" style="padding-right: 16px;">435</div><div data-line-number="436" class="react-line-number react-code-text" style="padding-right: 16px;">436</div><div data-line-number="437" class="react-line-number react-code-text" style="padding-right: 16px;">437</div><div data-line-number="438" class="react-line-number react-code-text" style="padding-right: 16px;">438</div><div data-line-number="439" class="react-line-number react-code-text" style="padding-right: 16px;">439</div><div data-line-number="440" class="react-line-number react-code-text" style="padding-right: 16px;">440</div><div data-line-number="441" class="react-line-number react-code-text" style="padding-right: 16px;">441</div><div data-line-number="442" class="react-line-number react-code-text" style="padding-right: 16px;">442</div><div data-line-number="443" class="react-line-number react-code-text" style="padding-right: 16px;">443</div><div data-line-number="444" class="react-line-number react-code-text" style="padding-right: 16px;">444</div><div data-line-number="445" class="react-line-number react-code-text" style="padding-right: 16px;">445</div><div data-line-number="446" class="react-line-number react-code-text" style="padding-right: 16px;">446</div><div data-line-number="447" class="react-line-number react-code-text" style="padding-right: 16px;">447</div><div data-line-number="448" class="react-line-number react-code-text" style="padding-right: 16px;">448</div><div data-line-number="449" class="react-line-number react-code-text" style="padding-right: 16px;">449</div><div data-line-number="450" class="react-line-number react-code-text" style="padding-right: 16px;">450</div><div data-line-number="451" class="react-line-number react-code-text" style="padding-right: 16px;">451</div><div data-line-number="452" class="react-line-number react-code-text" style="padding-right: 16px;">452</div><div data-line-number="453" class="react-line-number react-code-text" style="padding-right: 16px;">453</div><div data-line-number="454" class="react-line-number react-code-text" style="padding-right: 16px;">454</div><div data-line-number="455" class="react-line-number react-code-text" style="padding-right: 16px;">455</div><div data-line-number="456" class="react-line-number react-code-text" style="padding-right: 16px;">456</div><div data-line-number="457" class="react-line-number react-code-text" style="padding-right: 16px;">457</div><div data-line-number="458" class="react-line-number react-code-text" style="padding-right: 16px;">458</div><div data-line-number="459" class="react-line-number react-code-text" style="padding-right: 16px;">459</div><div data-line-number="460" class="react-line-number react-code-text" style="padding-right: 16px;">460</div><div data-line-number="461" class="react-line-number react-code-text" style="padding-right: 16px;">461</div><div data-line-number="462" class="react-line-number react-code-text" style="padding-right: 16px;">462</div><div data-line-number="463" class="react-line-number react-code-text" style="padding-right: 16px;">463</div><div data-line-number="464" class="react-line-number react-code-text" style="padding-right: 16px;">464</div><div data-line-number="465" class="react-line-number react-code-text" style="padding-right: 16px;">465</div><div data-line-number="466" class="react-line-number react-code-text" style="padding-right: 16px;">466</div><div data-line-number="467" class="react-line-number react-code-text" style="padding-right: 16px;">467</div><div data-line-number="468" class="react-line-number react-code-text" style="padding-right: 16px;">468</div><div data-line-number="469" class="react-line-number react-code-text" style="padding-right: 16px;">469</div><div data-line-number="470" class="react-line-number react-code-text" style="padding-right: 16px;">470</div><div data-line-number="471" class="react-line-number react-code-text" style="padding-right: 16px;">471</div><div data-line-number="472" class="react-line-number react-code-text" style="padding-right: 16px;">472</div><div data-line-number="473" class="react-line-number react-code-text" style="padding-right: 16px;">473</div><div data-line-number="474" class="react-line-number react-code-text" style="padding-right: 16px;">474</div><div data-line-number="475" class="react-line-number react-code-text" style="padding-right: 16px;">475</div><div data-line-number="476" class="react-line-number react-code-text" style="padding-right: 16px;">476</div><div data-line-number="477" class="react-line-number react-code-text" style="padding-right: 16px;">477</div><div data-line-number="478" class="react-line-number react-code-text" style="padding-right: 16px;">478</div><div data-line-number="479" class="react-line-number react-code-text" style="padding-right: 16px;">479</div><div data-line-number="480" class="react-line-number react-code-text" style="padding-right: 16px;">480</div></div><div class="react-no-virtualization-wrapper-lines"><div data-line-number="481" class="react-line-number react-code-text" style="padding-right: 16px;">481</div><div data-line-number="482" class="react-line-number react-code-text" style="padding-right: 16px;">482</div><div data-line-number="483" class="react-line-number react-code-text" style="padding-right: 16px;">483</div><div data-line-number="484" class="react-line-number react-code-text" style="padding-right: 16px;">484</div><div data-line-number="485" class="react-line-number react-code-text" style="padding-right: 16px;">485</div><div data-line-number="486" class="react-line-number react-code-text" style="padding-right: 16px;">486</div><div data-line-number="487" class="react-line-number react-code-text" style="padding-right: 16px;">487</div><div data-line-number="488" class="react-line-number react-code-text" style="padding-right: 16px;">488</div><div data-line-number="489" class="react-line-number react-code-text" style="padding-right: 16px;">489</div><div data-line-number="490" class="react-line-number react-code-text" style="padding-right: 16px;">490</div><div data-line-number="491" class="react-line-number react-code-text" style="padding-right: 16px;">491</div><div data-line-number="492" class="react-line-number react-code-text" style="padding-right: 16px;">492</div><div data-line-number="493" class="react-line-number react-code-text" style="padding-right: 16px;">493</div><div data-line-number="494" class="react-line-number react-code-text" style="padding-right: 16px;">494</div><div data-line-number="495" class="react-line-number react-code-text" style="padding-right: 16px;">495</div><div data-line-number="496" class="react-line-number react-code-text" style="padding-right: 16px;">496</div><div data-line-number="497" class="react-line-number react-code-text" style="padding-right: 16px;">497</div><div data-line-number="498" class="react-line-number react-code-text" style="padding-right: 16px;">498</div><div data-line-number="499" class="react-line-number react-code-text" style="padding-right: 16px;">499</div><div data-line-number="500" class="react-line-number react-code-text" style="padding-right: 16px;">500</div><div data-line-number="501" class="react-line-number react-code-text" style="padding-right: 16px;">501</div><div data-line-number="502" class="react-line-number react-code-text" style="padding-right: 16px;">502</div><div data-line-number="503" class="react-line-number react-code-text" style="padding-right: 16px;">503</div><div data-line-number="504" class="react-line-number react-code-text" style="padding-right: 16px;">504</div><div data-line-number="505" class="react-line-number react-code-text" style="padding-right: 16px;">505</div><div data-line-number="506" class="react-line-number react-code-text" style="padding-right: 16px;">506</div><div data-line-number="507" class="react-line-number react-code-text" style="padding-right: 16px;">507</div><div data-line-number="508" class="react-line-number react-code-text" style="padding-right: 16px;">508</div><div data-line-number="509" class="react-line-number react-code-text" style="padding-right: 16px;">509</div><div data-line-number="510" class="react-line-number react-code-text" style="padding-right: 16px;">510</div><div data-line-number="511" class="react-line-number react-code-text" style="padding-right: 16px;">511</div><div data-line-number="512" class="react-line-number react-code-text" style="padding-right: 16px;">512</div><div data-line-number="513" class="react-line-number react-code-text" style="padding-right: 16px;">513</div><div data-line-number="514" class="react-line-number react-code-text" style="padding-right: 16px;">514</div><div data-line-number="515" class="react-line-number react-code-text" style="padding-right: 16px;">515</div><div data-line-number="516" class="react-line-number react-code-text" style="padding-right: 16px;">516</div><div data-line-number="517" class="react-line-number react-code-text" style="padding-right: 16px;">517</div><div data-line-number="518" class="react-line-number react-code-text" style="padding-right: 16px;">518</div><div data-line-number="519" class="react-line-number react-code-text" style="padding-right: 16px;">519</div><div data-line-number="520" class="react-line-number react-code-text" style="padding-right: 16px;">520</div><div data-line-number="521" class="react-line-number react-code-text" style="padding-right: 16px;">521</div><div data-line-number="522" class="react-line-number react-code-text" style="padding-right: 16px;">522</div><div data-line-number="523" class="react-line-number react-code-text" style="padding-right: 16px;">523</div><div data-line-number="524" class="react-line-number react-code-text" style="padding-right: 16px;">524</div><div data-line-number="525" class="react-line-number react-code-text" style="padding-right: 16px;">525</div><div data-line-number="526" class="react-line-number react-code-text" style="padding-right: 16px;">526</div><div data-line-number="527" class="react-line-number react-code-text" style="padding-right: 16px;">527</div><div data-line-number="528" class="react-line-number react-code-text" style="padding-right: 16px;">528</div><div data-line-number="529" class="react-line-number react-code-text" style="padding-right: 16px;">529</div><div data-line-number="530" class="react-line-number react-code-text" style="padding-right: 16px;">530</div><div data-line-number="531" class="react-line-number react-code-text" style="padding-right: 16px;">531</div><div data-line-number="532" class="react-line-number react-code-text" style="padding-right: 16px;">532</div><div data-line-number="533" class="react-line-number react-code-text" style="padding-right: 16px;">533</div><div data-line-number="534" class="react-line-number react-code-text" style="padding-right: 16px;">534</div><div data-line-number="535" class="react-line-number react-code-text" style="padding-right: 16px;">535</div><div data-line-number="536" class="react-line-number react-code-text" style="padding-right: 16px;">536</div><div data-line-number="537" class="react-line-number react-code-text" style="padding-right: 16px;">537</div><div data-line-number="538" class="react-line-number react-code-text" style="padding-right: 16px;">538</div><div data-line-number="539" class="react-line-number react-code-text" style="padding-right: 16px;">539</div><div data-line-number="540" class="react-line-number react-code-text" style="padding-right: 16px;">540</div></div><div class="react-no-virtualization-wrapper-lines"><div data-line-number="541" class="react-line-number react-code-text" style="padding-right: 16px;">541</div><div data-line-number="542" class="react-line-number react-code-text" style="padding-right: 16px;">542</div><div data-line-number="543" class="react-line-number react-code-text" style="padding-right: 16px;">543</div><div data-line-number="544" class="react-line-number react-code-text" style="padding-right: 16px;">544</div><div data-line-number="545" class="react-line-number react-code-text" style="padding-right: 16px;">545</div><div data-line-number="546" class="react-line-number react-code-text" style="padding-right: 16px;">546</div><div data-line-number="547" class="react-line-number react-code-text" style="padding-right: 16px;">547</div><div data-line-number="548" class="react-line-number react-code-text" style="padding-right: 16px;">548</div><div data-line-number="549" class="react-line-number react-code-text" style="padding-right: 16px;">549</div><div data-line-number="550" class="react-line-number react-code-text" style="padding-right: 16px;">550</div><div data-line-number="551" class="react-line-number react-code-text" style="padding-right: 16px;">551</div><div data-line-number="552" class="react-line-number react-code-text" style="padding-right: 16px;">552</div><div data-line-number="553" class="react-line-number react-code-text" style="padding-right: 16px;">553</div><div data-line-number="554" class="react-line-number react-code-text" style="padding-right: 16px;">554</div><div data-line-number="555" class="react-line-number react-code-text" style="padding-right: 16px;">555</div><div data-line-number="556" class="react-line-number react-code-text" style="padding-right: 16px;">556</div><div data-line-number="557" class="react-line-number react-code-text" style="padding-right: 16px;">557</div><div data-line-number="558" class="react-line-number react-code-text" style="padding-right: 16px;">558</div><div data-line-number="559" class="react-line-number react-code-text" style="padding-right: 16px;">559</div><div data-line-number="560" class="react-line-number react-code-text" style="padding-right: 16px;">560</div><div data-line-number="561" class="react-line-number react-code-text" style="padding-right: 16px;">561</div><div data-line-number="562" class="react-line-number react-code-text" style="padding-right: 16px;">562</div><div data-line-number="563" class="react-line-number react-code-text" style="padding-right: 16px;">563</div><div data-line-number="564" class="react-line-number react-code-text" style="padding-right: 16px;">564</div><div data-line-number="565" class="react-line-number react-code-text" style="padding-right: 16px;">565</div><div data-line-number="566" class="react-line-number react-code-text" style="padding-right: 16px;">566</div><div data-line-number="567" class="react-line-number react-code-text" style="padding-right: 16px;">567</div><div data-line-number="568" class="react-line-number react-code-text" style="padding-right: 16px;">568</div><div data-line-number="569" class="react-line-number react-code-text" style="padding-right: 16px;">569</div><div data-line-number="570" class="react-line-number react-code-text" style="padding-right: 16px;">570</div><div data-line-number="571" class="react-line-number react-code-text" style="padding-right: 16px;">571</div><div data-line-number="572" class="react-line-number react-code-text" style="padding-right: 16px;">572</div><div data-line-number="573" class="react-line-number react-code-text" style="padding-right: 16px;">573</div><div data-line-number="574" class="react-line-number react-code-text" style="padding-right: 16px;">574</div><div data-line-number="575" class="react-line-number react-code-text" style="padding-right: 16px;">575</div><div data-line-number="576" class="react-line-number react-code-text" style="padding-right: 16px;">576</div><div data-line-number="577" class="react-line-number react-code-text" style="padding-right: 16px;">577</div><div data-line-number="578" class="react-line-number react-code-text" style="padding-right: 16px;">578</div><div data-line-number="579" class="react-line-number react-code-text" style="padding-right: 16px;">579</div><div data-line-number="580" class="react-line-number react-code-text" style="padding-right: 16px;">580</div><div data-line-number="581" class="react-line-number react-code-text" style="padding-right: 16px;">581</div><div data-line-number="582" class="react-line-number react-code-text" style="padding-right: 16px;">582</div><div data-line-number="583" class="react-line-number react-code-text" style="padding-right: 16px;">583</div><div data-line-number="584" class="react-line-number react-code-text" style="padding-right: 16px;">584</div><div data-line-number="585" class="react-line-number react-code-text" style="padding-right: 16px;">585</div><div data-line-number="586" class="react-line-number react-code-text" style="padding-right: 16px;">586</div><div data-line-number="587" class="react-line-number react-code-text" style="padding-right: 16px;">587</div><div data-line-number="588" class="react-line-number react-code-text" style="padding-right: 16px;">588</div><div data-line-number="589" class="react-line-number react-code-text" style="padding-right: 16px;">589</div><div data-line-number="590" class="react-line-number react-code-text" style="padding-right: 16px;">590</div><div data-line-number="591" class="react-line-number react-code-text" style="padding-right: 16px;">591</div><div data-line-number="592" class="react-line-number react-code-text" style="padding-right: 16px;">592</div><div data-line-number="593" class="react-line-number react-code-text" style="padding-right: 16px;">593</div><div data-line-number="594" class="react-line-number react-code-text" style="padding-right: 16px;">594</div><div data-line-number="595" class="react-line-number react-code-text" style="padding-right: 16px;">595</div><div data-line-number="596" class="react-line-number react-code-text" style="padding-right: 16px;">596</div><div data-line-number="597" class="react-line-number react-code-text" style="padding-right: 16px;">597</div><div data-line-number="598" class="react-line-number react-code-text" style="padding-right: 16px;">598</div><div data-line-number="599" class="react-line-number react-code-text" style="padding-right: 16px;">599</div><div data-line-number="600" class="react-line-number react-code-text" style="padding-right: 16px;">600</div></div><div class="react-no-virtualization-wrapper-lines"><div data-line-number="601" class="react-line-number react-code-text" style="padding-right: 16px;">601</div><div data-line-number="602" class="react-line-number react-code-text" style="padding-right: 16px;">602</div><div data-line-number="603" class="react-line-number react-code-text" style="padding-right: 16px;">603</div><div data-line-number="604" class="react-line-number react-code-text" style="padding-right: 16px;">604</div><div data-line-number="605" class="react-line-number react-code-text" style="padding-right: 16px;">605</div><div data-line-number="606" class="react-line-number react-code-text" style="padding-right: 16px;">606</div><div data-line-number="607" class="react-line-number react-code-text" style="padding-right: 16px;">607</div><div data-line-number="608" class="react-line-number react-code-text" style="padding-right: 16px;">608</div><div data-line-number="609" class="react-line-number react-code-text" style="padding-right: 16px;">609</div><div data-line-number="610" class="react-line-number react-code-text" style="padding-right: 16px;">610</div><div data-line-number="611" class="react-line-number react-code-text" style="padding-right: 16px;">611</div><div data-line-number="612" class="react-line-number react-code-text" style="padding-right: 16px;">612</div><div data-line-number="613" class="react-line-number react-code-text" style="padding-right: 16px;">613</div><div data-line-number="614" class="react-line-number react-code-text" style="padding-right: 16px;">614</div><div data-line-number="615" class="react-line-number react-code-text" style="padding-right: 16px;">615</div><div data-line-number="616" class="react-line-number react-code-text" style="padding-right: 16px;">616</div><div data-line-number="617" class="react-line-number react-code-text" style="padding-right: 16px;">617</div><div data-line-number="618" class="react-line-number react-code-text" style="padding-right: 16px;">618</div><div data-line-number="619" class="react-line-number react-code-text" style="padding-right: 16px;">619</div><div data-line-number="620" class="react-line-number react-code-text" style="padding-right: 16px;">620</div><div data-line-number="621" class="react-line-number react-code-text" style="padding-right: 16px;">621</div><div data-line-number="622" class="react-line-number react-code-text" style="padding-right: 16px;">622</div><div data-line-number="623" class="react-line-number react-code-text" style="padding-right: 16px;">623</div><div data-line-number="624" class="react-line-number react-code-text" style="padding-right: 16px;">624</div><div data-line-number="625" class="react-line-number react-code-text" style="padding-right: 16px;">625</div><div data-line-number="626" class="react-line-number react-code-text" style="padding-right: 16px;">626</div><div data-line-number="627" class="react-line-number react-code-text" style="padding-right: 16px;">627</div><div data-line-number="628" class="react-line-number react-code-text" style="padding-right: 16px;">628</div><div data-line-number="629" class="react-line-number react-code-text" style="padding-right: 16px;">629</div><div data-line-number="630" class="react-line-number react-code-text" style="padding-right: 16px;">630</div><div data-line-number="631" class="react-line-number react-code-text" style="padding-right: 16px;">631</div><div data-line-number="632" class="react-line-number react-code-text" style="padding-right: 16px;">632</div><div data-line-number="633" class="react-line-number react-code-text" style="padding-right: 16px;">633</div><div data-line-number="634" class="react-line-number react-code-text" style="padding-right: 16px;">634</div><div data-line-number="635" class="react-line-number react-code-text" style="padding-right: 16px;">635</div><div data-line-number="636" class="react-line-number react-code-text" style="padding-right: 16px;">636</div><div data-line-number="637" class="react-line-number react-code-text" style="padding-right: 16px;">637</div><div data-line-number="638" class="react-line-number react-code-text" style="padding-right: 16px;">638</div><div data-line-number="639" class="react-line-number react-code-text" style="padding-right: 16px;">639</div><div data-line-number="640" class="react-line-number react-code-text" style="padding-right: 16px;">640</div><div data-line-number="641" class="react-line-number react-code-text" style="padding-right: 16px;">641</div><div data-line-number="642" class="react-line-number react-code-text" style="padding-right: 16px;">642</div><div data-line-number="643" class="react-line-number react-code-text" style="padding-right: 16px;">643</div><div data-line-number="644" class="react-line-number react-code-text" style="padding-right: 16px;">644</div><div data-line-number="645" class="react-line-number react-code-text" style="padding-right: 16px;">645</div><div data-line-number="646" class="react-line-number react-code-text" style="padding-right: 16px;">646</div><div data-line-number="647" class="react-line-number react-code-text" style="padding-right: 16px;">647</div><div data-line-number="648" class="react-line-number react-code-text" style="padding-right: 16px;">648</div><div data-line-number="649" class="react-line-number react-code-text" style="padding-right: 16px;">649</div><div data-line-number="650" class="react-line-number react-code-text" style="padding-right: 16px;">650</div><div data-line-number="651" class="react-line-number react-code-text" style="padding-right: 16px;">651</div><div data-line-number="652" class="react-line-number react-code-text" style="padding-right: 16px;">652</div><div data-line-number="653" class="react-line-number react-code-text" style="padding-right: 16px;">653</div><div data-line-number="654" class="react-line-number react-code-text" style="padding-right: 16px;">654</div><div data-line-number="655" class="react-line-number react-code-text" style="padding-right: 16px;">655</div><div data-line-number="656" class="react-line-number react-code-text" style="padding-right: 16px;">656</div><div data-line-number="657" class="react-line-number react-code-text" style="padding-right: 16px;">657</div><div data-line-number="658" class="react-line-number react-code-text" style="padding-right: 16px;">658</div><div data-line-number="659" class="react-line-number react-code-text" style="padding-right: 16px;">659</div><div data-line-number="660" class="react-line-number react-code-text" style="padding-right: 16px;">660</div></div><div class="react-no-virtualization-wrapper-lines"><div data-line-number="661" class="react-line-number react-code-text" style="padding-right: 16px;">661</div><div data-line-number="662" class="react-line-number react-code-text" style="padding-right: 16px;">662</div><div data-line-number="663" class="react-line-number react-code-text" style="padding-right: 16px;">663</div><div data-line-number="664" class="react-line-number react-code-text" style="padding-right: 16px;">664</div><div data-line-number="665" class="react-line-number react-code-text" style="padding-right: 16px;">665</div><div data-line-number="666" class="react-line-number react-code-text" style="padding-right: 16px;">666</div><div data-line-number="667" class="react-line-number react-code-text" style="padding-right: 16px;">667</div><div data-line-number="668" class="react-line-number react-code-text" style="padding-right: 16px;">668</div><div data-line-number="669" class="react-line-number react-code-text" style="padding-right: 16px;">669</div><div data-line-number="670" class="react-line-number react-code-text" style="padding-right: 16px;">670</div><div data-line-number="671" class="react-line-number react-code-text" style="padding-right: 16px;">671</div><div data-line-number="672" class="react-line-number react-code-text" style="padding-right: 16px;">672</div><div data-line-number="673" class="react-line-number react-code-text" style="padding-right: 16px;">673</div><div data-line-number="674" class="react-line-number react-code-text" style="padding-right: 16px;">674</div><div data-line-number="675" class="react-line-number react-code-text" style="padding-right: 16px;">675</div><div data-line-number="676" class="react-line-number react-code-text" style="padding-right: 16px;">676</div><div data-line-number="677" class="react-line-number react-code-text" style="padding-right: 16px;">677</div><div data-line-number="678" class="react-line-number react-code-text" style="padding-right: 16px;">678</div><div data-line-number="679" class="react-line-number react-code-text" style="padding-right: 16px;">679</div><div data-line-number="680" class="react-line-number react-code-text" style="padding-right: 16px;">680</div><div data-line-number="681" class="react-line-number react-code-text" style="padding-right: 16px;">681</div><div data-line-number="682" class="react-line-number react-code-text" style="padding-right: 16px;">682</div><div data-line-number="683" class="react-line-number react-code-text" style="padding-right: 16px;">683</div><div data-line-number="684" class="react-line-number react-code-text" style="padding-right: 16px;">684</div><div data-line-number="685" class="react-line-number react-code-text" style="padding-right: 16px;">685</div><div data-line-number="686" class="react-line-number react-code-text" style="padding-right: 16px;">686</div><div data-line-number="687" class="react-line-number react-code-text" style="padding-right: 16px;">687</div><div data-line-number="688" class="react-line-number react-code-text" style="padding-right: 16px;">688</div><div data-line-number="689" class="react-line-number react-code-text" style="padding-right: 16px;">689</div><div data-line-number="690" class="react-line-number react-code-text" style="padding-right: 16px;">690</div><div data-line-number="691" class="react-line-number react-code-text" style="padding-right: 16px;">691</div><div data-line-number="692" class="react-line-number react-code-text" style="padding-right: 16px;">692</div><div data-line-number="693" class="react-line-number react-code-text" style="padding-right: 16px;">693</div><div data-line-number="694" class="react-line-number react-code-text" style="padding-right: 16px;">694</div><div data-line-number="695" class="react-line-number react-code-text" style="padding-right: 16px;">695</div><div data-line-number="696" class="react-line-number react-code-text" style="padding-right: 16px;">696</div><div data-line-number="697" class="react-line-number react-code-text" style="padding-right: 16px;">697</div><div data-line-number="698" class="react-line-number react-code-text" style="padding-right: 16px;">698</div><div data-line-number="699" class="react-line-number react-code-text" style="padding-right: 16px;">699</div><div data-line-number="700" class="react-line-number react-code-text" style="padding-right: 16px;">700</div><div data-line-number="701" class="react-line-number react-code-text" style="padding-right: 16px;">701</div><div data-line-number="702" class="react-line-number react-code-text" style="padding-right: 16px;">702</div><div data-line-number="703" class="react-line-number react-code-text" style="padding-right: 16px;">703</div><div data-line-number="704" class="react-line-number react-code-text" style="padding-right: 16px;">704</div><div data-line-number="705" class="react-line-number react-code-text" style="padding-right: 16px;">705</div><div data-line-number="706" class="react-line-number react-code-text" style="padding-right: 16px;">706</div><div data-line-number="707" class="react-line-number react-code-text" style="padding-right: 16px;">707</div><div data-line-number="708" class="react-line-number react-code-text" style="padding-right: 16px;">708</div><div data-line-number="709" class="react-line-number react-code-text" style="padding-right: 16px;">709</div><div data-line-number="710" class="react-line-number react-code-text" style="padding-right: 16px;">710</div><div data-line-number="711" class="react-line-number react-code-text" style="padding-right: 16px;">711</div><div data-line-number="712" class="react-line-number react-code-text" style="padding-right: 16px;">712</div><div data-line-number="713" class="react-line-number react-code-text" style="padding-right: 16px;">713</div></div></div><div class="react-code-lines"><div inert="inert"><div class="react-no-virtualization-wrapper"><div id="LC1" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-k">#include</span> <span class="pl-s">&lt;stdio.h&gt;</span></div>
<div id="LC2" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-k">#include</span> <span class="pl-s">&lt;stdlib.h&gt;</span></div>
<div id="LC3" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-k">#include</span> <span class="pl-s">&lt;string.h&gt;</span></div>
<div id="LC4" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-k">#include</span> <span class="pl-s">&lt;pthread.h&gt;</span></div>
<div id="LC5" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-k">#include</span> <span class="pl-s">&lt;unistd.h&gt;</span></div>
<div id="LC6" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-k">#include</span> <span class="pl-s">&lt;ctype.h&gt;</span></div>
<div id="LC7" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-k">#include</span> <span class="pl-s">&lt;fcntl.h&gt;</span></div>
<div id="LC8" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-k">#include</span> <span class="pl-s">&lt;sys/select.h&gt;</span></div>
<div id="LC9" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-k">#include</span> <span class="pl-s">&lt;time.h&gt;</span></div>
<div id="LC10" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-k">#include</span> <span class="pl-s">&lt;termios.h&gt;</span></div>
<div id="LC11" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC12" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-k">#define</span> <span class="pl-c1">MAX_QUESTIONS</span> 200</div>
<div id="LC13" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-k">#define</span> <span class="pl-c1">MAX_LINE</span> 512</div>
<div id="LC14" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-k">#define</span> <span class="pl-c1">MAX_STUDENTS</span> 100</div>
<div id="LC15" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-k">#define</span> <span class="pl-c1">STUDENT_FILE</span> "student_dtls.txt"</div>
<div id="LC16" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-k">#define</span> <span class="pl-c1">INSTRUCTOR_FILE</span> "instructor_dtls.txt"</div>
<div id="LC17" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-k">#define</span> <span class="pl-c1">QUESTION_FILE</span> "questions_with_difficulty.txt"</div>
<div id="LC18" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-k">#define</span> <span class="pl-c1">RESULT_FILE</span> "results.txt"</div>
<div id="LC19" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-k">#define</span> <span class="pl-c1">RULES_FILE</span> "rules.txt"</div>
<div id="LC20" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-k">#define</span> <span class="pl-c1">NUM_EXAM_QUESTIONS</span> 5</div>
<div id="LC21" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-k">#define</span> <span class="pl-c1">MIN_ANSWER_TIME</span> 5</div>
<div id="LC22" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC23" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-k">volatile</span> <span class="pl-smi">int</span> <span class="pl-s1">examTimeUp</span> <span class="pl-c1">=</span> <span class="pl-c1">0</span>;</div>
<div id="LC24" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">int</span> <span class="pl-s1">overallExamTime</span> <span class="pl-c1">=</span> <span class="pl-c1">300</span>;</div>
<div id="LC25" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC26" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-k">typedef</span> <span class="pl-k">struct</span> {</div>
<div id="LC27" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">char</span> <span class="pl-c1">name</span>[<span class="pl-c1">MAX_LINE</span>];</div>
<div id="LC28" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">char</span> <span class="pl-c1">roll</span>[<span class="pl-c1">MAX_LINE</span>];</div>
<div id="LC29" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">char</span> <span class="pl-c1">reg_no</span>[<span class="pl-c1">MAX_LINE</span>];</div>
<div id="LC30" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">char</span> <span class="pl-c1">password</span>[<span class="pl-c1">MAX_LINE</span>];</div>
<div id="LC31" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">} <span class="pl-smi">Student</span>;</div>
<div id="LC32" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC33" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-k">typedef</span> <span class="pl-k">struct</span> {</div>
<div id="LC34" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">char</span> <span class="pl-c1">name</span>[<span class="pl-c1">MAX_LINE</span>];</div>
<div id="LC35" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">char</span> <span class="pl-c1">instructor_id</span>[<span class="pl-c1">MAX_LINE</span>];</div>
<div id="LC36" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">char</span> <span class="pl-c1">password</span>[<span class="pl-c1">MAX_LINE</span>];</div>
<div id="LC37" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">} <span class="pl-smi">Instructor</span>;</div>
<div id="LC38" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC39" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-k">typedef</span> <span class="pl-k">struct</span> {</div>
<div id="LC40" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">char</span> <span class="pl-c1">question</span>[<span class="pl-c1">MAX_LINE</span>];</div>
<div id="LC41" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">char</span> <span class="pl-c1">optionA</span>[<span class="pl-c1">MAX_LINE</span>];</div>
<div id="LC42" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">char</span> <span class="pl-c1">optionB</span>[<span class="pl-c1">MAX_LINE</span>];</div>
<div id="LC43" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">char</span> <span class="pl-c1">optionC</span>[<span class="pl-c1">MAX_LINE</span>];</div>
<div id="LC44" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">char</span> <span class="pl-c1">optionD</span>[<span class="pl-c1">MAX_LINE</span>];</div>
<div id="LC45" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">char</span> <span class="pl-c1">correct</span>;</div>
<div id="LC46" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-c1">difficulty</span>;</div>
<div id="LC47" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">} <span class="pl-smi">Question</span>;</div>
<div id="LC48" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC49" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-k">typedef</span> <span class="pl-k">struct</span> {</div>
<div id="LC50" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">char</span> <span class="pl-c1">roll</span>[<span class="pl-c1">MAX_LINE</span>];</div>
<div id="LC51" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">char</span> <span class="pl-c1">name</span>[<span class="pl-c1">MAX_LINE</span>];</div>
<div id="LC52" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-c1">responseTimes</span>[<span class="pl-c1">NUM_EXAM_QUESTIONS</span>];</div>
<div id="LC53" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-c1">totalTime</span>;</div>
<div id="LC54" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-c1">correctAnswers</span>;</div>
<div id="LC55" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-c1">totalQuestions</span>;</div>
<div id="LC56" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-c1">rank</span>;</div>
<div id="LC57" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-c1">flagged</span>;</div>
<div id="LC58" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">} <span class="pl-smi">DashboardStudent</span>;</div>
<div id="LC59" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC60" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">DashboardStudent</span> <span class="pl-s1">dashboardStudents</span>[<span class="pl-c1">MAX_STUDENTS</span>];</div></div>
<div class="react-no-virtualization-wrapper"><div id="LC61" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">int</span> <span class="pl-s1">studentCount</span> <span class="pl-c1">=</span> <span class="pl-c1">0</span>;</div>
<div id="LC62" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC63" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">Question</span> <span class="pl-s1">questions</span>[<span class="pl-c1">MAX_QUESTIONS</span>];</div>
<div id="LC64" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">int</span> <span class="pl-s1">totalQuestions</span> <span class="pl-c1">=</span> <span class="pl-c1">0</span>;</div>
<div id="LC65" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">int</span> <span class="pl-s1">answerTimeout</span>;</div>
<div id="LC66" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">float</span> <span class="pl-s1">marksForCorrectAnswer</span>;</div>
<div id="LC67" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">float</span> <span class="pl-s1">marksDeductedForWrongAnswer</span>;</div>
<div id="LC68" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC69" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-c">// Function prototypes</span></div>
<div id="LC70" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">clear_input_buffer</span>();</div>
<div id="LC71" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">getPassword</span>(<span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">password</span>, <span class="pl-smi">int</span> <span class="pl-s1">size</span>);</div>
<div id="LC72" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">load_rules</span>();</div>
<div id="LC73" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">trim</span>(<span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">s</span>);</div>
<div id="LC74" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">int</span> <span class="pl-en">read_nonempty_line</span>(<span class="pl-smi">FILE</span> <span class="pl-c1">*</span><span class="pl-s1">fp</span>, <span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">buffer</span>, <span class="pl-smi">int</span> <span class="pl-s1">size</span>);</div>
<div id="LC75" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">load_questions</span>();</div>
<div id="LC76" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">int</span> <span class="pl-en">verify_student</span>(<span class="pl-k">const</span> <span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">roll</span>, <span class="pl-k">const</span> <span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">pass</span>, <span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">name</span>, <span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">reg_no</span>);</div>
<div id="LC77" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">int</span> <span class="pl-en">verify_instructor</span>(<span class="pl-k">const</span> <span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">instructor_id</span>, <span class="pl-k">const</span> <span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">pass</span>, <span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">name</span>);</div>
<div id="LC78" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">append_result</span>(<span class="pl-k">const</span> <span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">name</span>, <span class="pl-k">const</span> <span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">roll</span>, <span class="pl-smi">double</span> <span class="pl-s1">score</span>, <span class="pl-smi">int</span> <span class="pl-s1">wrong</span>, <span class="pl-smi">int</span> <span class="pl-s1">attempted</span>, <span class="pl-smi">int</span> <span class="pl-s1">isCheating</span>, <span class="pl-k">const</span> <span class="pl-smi">int</span> <span class="pl-c1">*</span><span class="pl-s1">responseTimes</span>, <span class="pl-smi">int</span> <span class="pl-s1">totalTime</span>);</div>
<div id="LC79" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">int</span> <span class="pl-en">get_input_with_timeout</span>(<span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">buf</span>, <span class="pl-smi">int</span> <span class="pl-s1">buf_size</span>, <span class="pl-smi">int</span> <span class="pl-s1">timeout_seconds</span>);</div>
<div id="LC80" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-c1">*</span><span class="pl-en">overall_timer</span>(<span class="pl-smi">void</span> <span class="pl-c1">*</span><span class="pl-s1">arg</span>);</div>
<div id="LC81" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-c1">*</span><span class="pl-en">exam_session</span>(<span class="pl-smi">void</span> <span class="pl-c1">*</span><span class="pl-s1">arg</span>);</div>
<div id="LC82" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">add_question</span>();</div>
<div id="LC83" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">set_time_limit</span>();</div>
<div id="LC84" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">set_marking_scheme</span>();</div>
<div id="LC85" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">loadDashboardData</span>();</div>
<div id="LC86" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">flagSuspiciousActivity</span>();</div>
<div id="LC87" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">rankStudents</span>();</div>
<div id="LC88" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">displayDashboard</span>();</div>
<div id="LC89" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC90" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">clear_input_buffer</span>() {</div>
<div id="LC91" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-s1">c</span>;</div>
<div id="LC92" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">while</span> ((<span class="pl-s1">c</span> <span class="pl-c1">=</span> <span class="pl-en">getchar</span>()) <span class="pl-c1">!=</span> <span class="pl-c1">'\n'</span> <span class="pl-c1">&amp;&amp;</span> <span class="pl-s1">c</span> <span class="pl-c1">!=</span> <span class="pl-c1">EOF</span>);</div>
<div id="LC93" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">}</div>
<div id="LC94" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC95" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">getPassword</span>(<span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">password</span>, <span class="pl-smi">int</span> <span class="pl-s1">size</span>) {</div>
<div id="LC96" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">struct</span> <span class="pl-smi">termios</span> <span class="pl-s1">oldt</span>, <span class="pl-s1">newt</span>;</div>
<div id="LC97" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">tcgetattr</span>(<span class="pl-c1">STDIN_FILENO</span>, <span class="pl-c1">&amp;</span><span class="pl-s1">oldt</span>);</div>
<div id="LC98" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-s1">newt</span> <span class="pl-c1">=</span> <span class="pl-s1">oldt</span>;</div>
<div id="LC99" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-s1">newt</span>.<span class="pl-c1">c_lflag</span> &amp;= ~(<span class="pl-c1">ECHO</span>);</div>
<div id="LC100" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">tcsetattr</span>(<span class="pl-c1">STDIN_FILENO</span>, <span class="pl-c1">TCSANOW</span>, <span class="pl-c1">&amp;</span><span class="pl-s1">newt</span>);</div>
<div id="LC101" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC102" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">if</span>(<span class="pl-en">fgets</span>(<span class="pl-s1">password</span>, <span class="pl-s1">size</span>, <span class="pl-s1">stdin</span>) <span class="pl-c1">!=</span> <span class="pl-c1">NULL</span>) {</div>
<div id="LC103" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">password</span>[<span class="pl-en">strcspn</span>(<span class="pl-s1">password</span>, <span class="pl-s">"\n"</span>)] <span class="pl-c1">=</span> <span class="pl-c1">'\0'</span>;</div>
<div id="LC104" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div>
<div id="LC105" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC106" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">tcsetattr</span>(<span class="pl-c1">STDIN_FILENO</span>, <span class="pl-c1">TCSANOW</span>, <span class="pl-c1">&amp;</span><span class="pl-s1">oldt</span>);</div>
<div id="LC107" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"\n"</span>);</div>
<div id="LC108" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">}</div>
<div id="LC109" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC110" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">load_rules</span>() {</div>
<div id="LC111" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">FILE</span> <span class="pl-c1">*</span><span class="pl-s1">fp</span> <span class="pl-c1">=</span> <span class="pl-en">fopen</span>(<span class="pl-c1">RULES_FILE</span>, <span class="pl-s">"r"</span>);</div>
<div id="LC112" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">if</span>(<span class="pl-s1">fp</span> <span class="pl-c1">==</span> <span class="pl-c1">NULL</span>) {</div>
<div id="LC113" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">answerTimeout</span> <span class="pl-c1">=</span> <span class="pl-c1">30</span>;</div>
<div id="LC114" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">marksForCorrectAnswer</span> <span class="pl-c1">=</span> <span class="pl-c1">1.0</span>;</div>
<div id="LC115" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">marksDeductedForWrongAnswer</span> <span class="pl-c1">=</span> <span class="pl-c1">0.25</span>;</div>
<div id="LC116" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">fp</span> <span class="pl-c1">=</span> <span class="pl-en">fopen</span>(<span class="pl-c1">RULES_FILE</span>, <span class="pl-s">"w"</span>);</div>
<div id="LC117" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">fprintf</span>(<span class="pl-s1">fp</span>, <span class="pl-s">"Time limit per question: %d\nMarks awarded for correct answer: %.2f\nMarks deducted for incorrect answer: %.2f\n"</span>, </div>
<div id="LC118" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">                <span class="pl-s1">answerTimeout</span>, <span class="pl-s1">marksForCorrectAnswer</span>, <span class="pl-s1">marksDeductedForWrongAnswer</span>);</div>
<div id="LC119" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">fclose</span>(<span class="pl-s1">fp</span>);</div>
<div id="LC120" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    } <span class="pl-k">else</span> {</div></div>
<div class="react-no-virtualization-wrapper"><div id="LC121" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-smi">char</span> <span class="pl-s1">buffer</span>[<span class="pl-c1">MAX_LINE</span>];</div>
<div id="LC122" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">fgets</span>(<span class="pl-s1">buffer</span>, <span class="pl-c1">MAX_LINE</span>, <span class="pl-s1">fp</span>);</div>
<div id="LC123" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">sscanf</span>(<span class="pl-s1">buffer</span>, <span class="pl-s">"Time limit per question: %d"</span>, <span class="pl-c1">&amp;</span><span class="pl-s1">answerTimeout</span>);</div>
<div id="LC124" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">fgets</span>(<span class="pl-s1">buffer</span>, <span class="pl-c1">MAX_LINE</span>, <span class="pl-s1">fp</span>);</div>
<div id="LC125" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">sscanf</span>(<span class="pl-s1">buffer</span>, <span class="pl-s">"Marks awarded for correct answer: %f"</span>, <span class="pl-c1">&amp;</span><span class="pl-s1">marksForCorrectAnswer</span>);</div>
<div id="LC126" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">fgets</span>(<span class="pl-s1">buffer</span>, <span class="pl-c1">MAX_LINE</span>, <span class="pl-s1">fp</span>);</div>
<div id="LC127" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">sscanf</span>(<span class="pl-s1">buffer</span>, <span class="pl-s">"Marks deducted for incorrect answer: %f"</span>, <span class="pl-c1">&amp;</span><span class="pl-s1">marksDeductedForWrongAnswer</span>);</div>
<div id="LC128" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">fclose</span>(<span class="pl-s1">fp</span>);</div>
<div id="LC129" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div>
<div id="LC130" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">}</div>
<div id="LC131" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC132" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">trim</span>(<span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">s</span>) {</div>
<div id="LC133" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-s1">s</span>[<span class="pl-en">strcspn</span>(<span class="pl-s1">s</span>, <span class="pl-s">"\n"</span>)] <span class="pl-c1">=</span> <span class="pl-c1">'\0'</span>;</div>
<div id="LC134" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">while</span>(<span class="pl-en">isspace</span>((<span class="pl-smi">unsigned <span class="pl-smi">char</span></span>)<span class="pl-c1">*</span><span class="pl-s1">s</span>)) <span class="pl-s1">s</span><span class="pl-c1">++</span>;</div>
<div id="LC135" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">end</span> <span class="pl-c1">=</span> <span class="pl-s1">s</span> <span class="pl-c1">+</span> <span class="pl-en">strlen</span>(<span class="pl-s1">s</span>) <span class="pl-c1">-</span> <span class="pl-c1">1</span>;</div>
<div id="LC136" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">while</span>(<span class="pl-s1">end</span> <span class="pl-c1">&gt;</span> <span class="pl-s1">s</span> <span class="pl-c1">&amp;&amp;</span> <span class="pl-en">isspace</span>((<span class="pl-smi">unsigned <span class="pl-smi">char</span></span>)<span class="pl-c1">*</span><span class="pl-s1">end</span>)) {</div>
<div id="LC137" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-c1">*</span><span class="pl-s1">end</span> <span class="pl-c1">=</span> <span class="pl-c1">'\0'</span>;</div>
<div id="LC138" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">end</span><span class="pl-c1">--</span>;</div>
<div id="LC139" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div>
<div id="LC140" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">}</div>
<div id="LC141" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC142" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">int</span> <span class="pl-en">read_nonempty_line</span>(<span class="pl-smi">FILE</span> <span class="pl-c1">*</span><span class="pl-s1">fp</span>, <span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">buffer</span>, <span class="pl-smi">int</span> <span class="pl-s1">size</span>) {</div>
<div id="LC143" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">while</span>(<span class="pl-en">fgets</span>(<span class="pl-s1">buffer</span>, <span class="pl-s1">size</span>, <span class="pl-s1">fp</span>)) {</div>
<div id="LC144" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">buffer</span>[<span class="pl-en">strcspn</span>(<span class="pl-s1">buffer</span>, <span class="pl-s">"\n"</span>)] <span class="pl-c1">=</span> <span class="pl-c1">'\0'</span>;</div>
<div id="LC145" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-smi">char</span> <span class="pl-s1">temp</span>[<span class="pl-c1">MAX_LINE</span>];</div>
<div id="LC146" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">strcpy</span>(<span class="pl-s1">temp</span>, <span class="pl-s1">buffer</span>);</div>
<div id="LC147" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">start</span> <span class="pl-c1">=</span> <span class="pl-s1">temp</span>;</div>
<div id="LC148" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">while</span>(<span class="pl-c1">*</span><span class="pl-s1">start</span> <span class="pl-c1">&amp;&amp;</span> <span class="pl-en">isspace</span>((<span class="pl-smi">unsigned <span class="pl-smi">char</span></span>)<span class="pl-c1">*</span><span class="pl-s1">start</span>)) <span class="pl-s1">start</span><span class="pl-c1">++</span>;</div>
<div id="LC149" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">if</span>(<span class="pl-en">strlen</span>(<span class="pl-s1">start</span>) <span class="pl-c1">&gt;</span> <span class="pl-c1">0</span>) {</div>
<div id="LC150" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-en">strcpy</span>(<span class="pl-s1">buffer</span>, <span class="pl-s1">start</span>);</div>
<div id="LC151" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-k">return</span> <span class="pl-c1">1</span>;</div>
<div id="LC152" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        }</div>
<div id="LC153" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div>
<div id="LC154" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">return</span> <span class="pl-c1">0</span>;</div>
<div id="LC155" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">}</div>
<div id="LC156" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC157" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">load_questions</span>() {</div>
<div id="LC158" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">FILE</span> <span class="pl-c1">*</span><span class="pl-s1">fp</span> <span class="pl-c1">=</span> <span class="pl-en">fopen</span>(<span class="pl-c1">QUESTION_FILE</span>, <span class="pl-s">"r"</span>);</div>
<div id="LC159" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">if</span>(<span class="pl-s1">fp</span> <span class="pl-c1">==</span> <span class="pl-c1">NULL</span>) {</div>
<div id="LC160" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">perror</span>(<span class="pl-s">"📛 Error opening questions file"</span>);</div>
<div id="LC161" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">exit</span>(<span class="pl-c1">EXIT_FAILURE</span>);</div>
<div id="LC162" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div>
<div id="LC163" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC164" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">char</span> <span class="pl-s1">line</span>[<span class="pl-c1">MAX_LINE</span>];</div>
<div id="LC165" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-s1">qIndex</span> <span class="pl-c1">=</span> <span class="pl-c1">0</span>;</div>
<div id="LC166" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">while</span>(<span class="pl-s1">qIndex</span> <span class="pl-c1">&lt;</span> <span class="pl-c1">MAX_QUESTIONS</span>) {</div>
<div id="LC167" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">if</span>(!<span class="pl-en">read_nonempty_line</span>(<span class="pl-s1">fp</span>, <span class="pl-s1">line</span>, <span class="pl-c1">MAX_LINE</span>)) <span class="pl-k">break</span>;</div>
<div id="LC168" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">strncpy</span>(<span class="pl-s1">questions</span>[<span class="pl-s1">qIndex</span>].<span class="pl-c1">question</span>, <span class="pl-s1">line</span>, <span class="pl-c1">MAX_LINE</span>);</div>
<div id="LC169" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC170" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">if</span>(!<span class="pl-en">read_nonempty_line</span>(<span class="pl-s1">fp</span>, <span class="pl-s1">line</span>, <span class="pl-c1">MAX_LINE</span>)) <span class="pl-k">break</span>;</div>
<div id="LC171" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">strncpy</span>(<span class="pl-s1">questions</span>[<span class="pl-s1">qIndex</span>].<span class="pl-c1">optionA</span>, <span class="pl-s1">line</span>, <span class="pl-c1">MAX_LINE</span>);</div>
<div id="LC172" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC173" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">if</span>(!<span class="pl-en">read_nonempty_line</span>(<span class="pl-s1">fp</span>, <span class="pl-s1">line</span>, <span class="pl-c1">MAX_LINE</span>)) <span class="pl-k">break</span>;</div>
<div id="LC174" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">strncpy</span>(<span class="pl-s1">questions</span>[<span class="pl-s1">qIndex</span>].<span class="pl-c1">optionB</span>, <span class="pl-s1">line</span>, <span class="pl-c1">MAX_LINE</span>);</div>
<div id="LC175" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC176" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">if</span>(!<span class="pl-en">read_nonempty_line</span>(<span class="pl-s1">fp</span>, <span class="pl-s1">line</span>, <span class="pl-c1">MAX_LINE</span>)) <span class="pl-k">break</span>;</div>
<div id="LC177" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">strncpy</span>(<span class="pl-s1">questions</span>[<span class="pl-s1">qIndex</span>].<span class="pl-c1">optionC</span>, <span class="pl-s1">line</span>, <span class="pl-c1">MAX_LINE</span>);</div>
<div id="LC178" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC179" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">if</span>(!<span class="pl-en">read_nonempty_line</span>(<span class="pl-s1">fp</span>, <span class="pl-s1">line</span>, <span class="pl-c1">MAX_LINE</span>)) <span class="pl-k">break</span>;</div>
<div id="LC180" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">strncpy</span>(<span class="pl-s1">questions</span>[<span class="pl-s1">qIndex</span>].<span class="pl-c1">optionD</span>, <span class="pl-s1">line</span>, <span class="pl-c1">MAX_LINE</span>);</div></div>
<div class="react-no-virtualization-wrapper"><div id="LC181" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC182" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">if</span>(!<span class="pl-en">read_nonempty_line</span>(<span class="pl-s1">fp</span>, <span class="pl-s1">line</span>, <span class="pl-c1">MAX_LINE</span>)) <span class="pl-k">break</span>;</div>
<div id="LC183" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">questions</span>[<span class="pl-s1">qIndex</span>].<span class="pl-c1">correct</span> <span class="pl-c1">=</span> <span class="pl-en">toupper</span>(<span class="pl-s1">line</span>[<span class="pl-c1">0</span>]);</div>
<div id="LC184" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC185" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">if</span>(!<span class="pl-en">read_nonempty_line</span>(<span class="pl-s1">fp</span>, <span class="pl-s1">line</span>, <span class="pl-c1">MAX_LINE</span>)) <span class="pl-k">break</span>;</div>
<div id="LC186" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">questions</span>[<span class="pl-s1">qIndex</span>].<span class="pl-c1">difficulty</span> <span class="pl-c1">=</span> <span class="pl-en">atoi</span>(<span class="pl-s1">line</span>);</div>
<div id="LC187" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC188" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">qIndex</span><span class="pl-c1">++</span>;</div>
<div id="LC189" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div>
<div id="LC190" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC191" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-s1">totalQuestions</span> <span class="pl-c1">=</span> <span class="pl-s1">qIndex</span>;</div>
<div id="LC192" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">fclose</span>(<span class="pl-s1">fp</span>);</div>
<div id="LC193" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">}</div>
<div id="LC194" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC195" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">int</span> <span class="pl-en">verify_student</span>(<span class="pl-k">const</span> <span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">roll</span>, <span class="pl-k">const</span> <span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">pass</span>, <span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">name</span>, <span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">reg_no</span>) {</div>
<div id="LC196" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">FILE</span> <span class="pl-c1">*</span><span class="pl-s1">fp</span> <span class="pl-c1">=</span> <span class="pl-en">fopen</span>(<span class="pl-c1">STUDENT_FILE</span>, <span class="pl-s">"r"</span>);</div>
<div id="LC197" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">if</span>(<span class="pl-s1">fp</span> <span class="pl-c1">==</span> <span class="pl-c1">NULL</span>) {</div>
<div id="LC198" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">perror</span>(<span class="pl-s">"📛 Error opening student details file"</span>);</div>
<div id="LC199" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">exit</span>(<span class="pl-c1">EXIT_FAILURE</span>);</div>
<div id="LC200" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div>
<div id="LC201" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">char</span> <span class="pl-s1">fileName</span>[<span class="pl-c1">50</span>], <span class="pl-s1">fileRoll</span>[<span class="pl-c1">50</span>], <span class="pl-s1">fileRegNo</span>[<span class="pl-c1">50</span>], <span class="pl-s1">filePass</span>[<span class="pl-c1">50</span>];</div>
<div id="LC202" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-s1">valid</span> <span class="pl-c1">=</span> <span class="pl-c1">0</span>;</div>
<div id="LC203" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">while</span>(<span class="pl-en">fscanf</span>(<span class="pl-s1">fp</span>, <span class="pl-s">"%s %s %s %s"</span>, <span class="pl-s1">fileName</span>, <span class="pl-s1">fileRoll</span>, <span class="pl-s1">fileRegNo</span>, <span class="pl-s1">filePass</span>) <span class="pl-c1">==</span> <span class="pl-c1">4</span>) {</div>
<div id="LC204" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">if</span>(<span class="pl-en">strcmp</span>(<span class="pl-s1">fileRoll</span>, <span class="pl-s1">roll</span>) <span class="pl-c1">==</span> <span class="pl-c1">0</span> <span class="pl-c1">&amp;&amp;</span> <span class="pl-en">strcmp</span>(<span class="pl-s1">filePass</span>, <span class="pl-s1">pass</span>) <span class="pl-c1">==</span> <span class="pl-c1">0</span>) {</div>
<div id="LC205" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-en">strcpy</span>(<span class="pl-s1">name</span>, <span class="pl-s1">fileName</span>);</div>
<div id="LC206" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-en">strcpy</span>(<span class="pl-s1">reg_no</span>, <span class="pl-s1">fileRegNo</span>);</div>
<div id="LC207" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-s1">valid</span> <span class="pl-c1">=</span> <span class="pl-c1">1</span>;</div>
<div id="LC208" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-k">break</span>;</div>
<div id="LC209" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        }</div>
<div id="LC210" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div>
<div id="LC211" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">fclose</span>(<span class="pl-s1">fp</span>);</div>
<div id="LC212" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">return</span> <span class="pl-s1">valid</span>;</div>
<div id="LC213" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">}</div>
<div id="LC214" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC215" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">int</span> <span class="pl-en">verify_instructor</span>(<span class="pl-k">const</span> <span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">instructor_id</span>, <span class="pl-k">const</span> <span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">pass</span>, <span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">name</span>) {</div>
<div id="LC216" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">FILE</span> <span class="pl-c1">*</span><span class="pl-s1">fp</span> <span class="pl-c1">=</span> <span class="pl-en">fopen</span>(<span class="pl-c1">INSTRUCTOR_FILE</span>, <span class="pl-s">"r"</span>);</div>
<div id="LC217" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">if</span>(<span class="pl-s1">fp</span> <span class="pl-c1">==</span> <span class="pl-c1">NULL</span>) {</div>
<div id="LC218" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">perror</span>(<span class="pl-s">"📛 Error opening instructor details file"</span>);</div>
<div id="LC219" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">exit</span>(<span class="pl-c1">EXIT_FAILURE</span>);</div>
<div id="LC220" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div>
<div id="LC221" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">char</span> <span class="pl-s1">fileName</span>[<span class="pl-c1">50</span>], <span class="pl-s1">fileInstructorID</span>[<span class="pl-c1">50</span>], <span class="pl-s1">filePass</span>[<span class="pl-c1">50</span>];</div>
<div id="LC222" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-s1">valid</span> <span class="pl-c1">=</span> <span class="pl-c1">0</span>;</div>
<div id="LC223" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">while</span>(<span class="pl-en">fscanf</span>(<span class="pl-s1">fp</span>, <span class="pl-s">"%s %s %s"</span>, <span class="pl-s1">fileName</span>, <span class="pl-s1">fileInstructorID</span>, <span class="pl-s1">filePass</span>) <span class="pl-c1">==</span> <span class="pl-c1">3</span>) {</div>
<div id="LC224" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">if</span>(<span class="pl-en">strcmp</span>(<span class="pl-s1">fileInstructorID</span>, <span class="pl-s1">instructor_id</span>) <span class="pl-c1">==</span> <span class="pl-c1">0</span> <span class="pl-c1">&amp;&amp;</span> <span class="pl-en">strcmp</span>(<span class="pl-s1">filePass</span>, <span class="pl-s1">pass</span>) <span class="pl-c1">==</span> <span class="pl-c1">0</span>) {</div>
<div id="LC225" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-en">strcpy</span>(<span class="pl-s1">name</span>, <span class="pl-s1">fileName</span>);</div>
<div id="LC226" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-s1">valid</span> <span class="pl-c1">=</span> <span class="pl-c1">1</span>;</div>
<div id="LC227" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-k">break</span>;</div>
<div id="LC228" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        }</div>
<div id="LC229" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div>
<div id="LC230" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">fclose</span>(<span class="pl-s1">fp</span>);</div>
<div id="LC231" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">return</span> <span class="pl-s1">valid</span>;</div>
<div id="LC232" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">}</div>
<div id="LC233" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC234" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">append_result</span>(<span class="pl-k">const</span> <span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">name</span>, <span class="pl-k">const</span> <span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">roll</span>, <span class="pl-smi">double</span> <span class="pl-s1">score</span>, <span class="pl-smi">int</span> <span class="pl-s1">wrong</span>, <span class="pl-smi">int</span> <span class="pl-s1">attempted</span>, <span class="pl-smi">int</span> <span class="pl-s1">isCheating</span>, <span class="pl-k">const</span> <span class="pl-smi">int</span> <span class="pl-c1">*</span><span class="pl-s1">responseTimes</span>, <span class="pl-smi">int</span> <span class="pl-s1">totalTime</span>) {</div>
<div id="LC235" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">FILE</span> <span class="pl-c1">*</span><span class="pl-s1">fp</span> <span class="pl-c1">=</span> <span class="pl-en">fopen</span>(<span class="pl-c1">RESULT_FILE</span>, <span class="pl-s">"a"</span>);</div>
<div id="LC236" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">if</span>(<span class="pl-s1">fp</span> <span class="pl-c1">==</span> <span class="pl-c1">NULL</span>) {</div>
<div id="LC237" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">perror</span>(<span class="pl-s">"📛 Error opening result file"</span>);</div>
<div id="LC238" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">return</span>;</div>
<div id="LC239" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div>
<div id="LC240" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-s1">fd</span> <span class="pl-c1">=</span> <span class="pl-en">fileno</span>(<span class="pl-s1">fp</span>);</div></div>
<div class="react-no-virtualization-wrapper"><div id="LC241" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">struct</span> <span class="pl-smi">flock</span> <span class="pl-s1">lock</span>;</div>
<div id="LC242" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">memset</span>(<span class="pl-c1">&amp;</span><span class="pl-s1">lock</span>, <span class="pl-c1">0</span>, <span class="pl-k">sizeof</span>(<span class="pl-s1">lock</span>));</div>
<div id="LC243" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-s1">lock</span>.<span class="pl-c1">l_type</span> <span class="pl-c1">=</span> <span class="pl-c1">F_WRLCK</span>;</div>
<div id="LC244" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">fcntl</span>(<span class="pl-s1">fd</span>, <span class="pl-c1">F_SETLKW</span>, <span class="pl-c1">&amp;</span><span class="pl-s1">lock</span>);</div>
<div id="LC245" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC246" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">fprintf</span>(<span class="pl-s1">fp</span>, <span class="pl-s">"%s|%s|%.2f|%d|%d|%d|%d|"</span>, </div>
<div id="LC247" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">           <span class="pl-s1">roll</span>, <span class="pl-s1">name</span>, <span class="pl-s1">score</span>, <span class="pl-s1">wrong</span>, <span class="pl-s1">attempted</span>, <span class="pl-s1">isCheating</span>, <span class="pl-s1">totalTime</span>);</div>
<div id="LC248" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC249" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">for</span>(<span class="pl-smi">int</span> <span class="pl-s1">i</span> <span class="pl-c1">=</span> <span class="pl-c1">0</span>; <span class="pl-s1">i</span> <span class="pl-c1">&lt;</span> <span class="pl-s1">attempted</span>; <span class="pl-s1">i</span><span class="pl-c1">++</span>) {</div>
<div id="LC250" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">fprintf</span>(<span class="pl-s1">fp</span>, <span class="pl-s">"%d,"</span>, <span class="pl-s1">responseTimes</span>[<span class="pl-s1">i</span>]);</div>
<div id="LC251" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div>
<div id="LC252" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">fprintf</span>(<span class="pl-s1">fp</span>, <span class="pl-s">"\n"</span>);</div>
<div id="LC253" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC254" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-s1">lock</span>.<span class="pl-c1">l_type</span> <span class="pl-c1">=</span> <span class="pl-c1">F_UNLCK</span>;</div>
<div id="LC255" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">fcntl</span>(<span class="pl-s1">fd</span>, <span class="pl-c1">F_SETLK</span>, <span class="pl-c1">&amp;</span><span class="pl-s1">lock</span>);</div>
<div id="LC256" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">fclose</span>(<span class="pl-s1">fp</span>);</div>
<div id="LC257" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">}</div>
<div id="LC258" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC259" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">int</span> <span class="pl-en">get_input_with_timeout</span>(<span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">buf</span>, <span class="pl-smi">int</span> <span class="pl-s1">buf_size</span>, <span class="pl-smi">int</span> <span class="pl-s1">timeout_seconds</span>) {</div>
<div id="LC260" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">fd_set</span> <span class="pl-s1">set</span>;</div>
<div id="LC261" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">struct</span> <span class="pl-smi">timeval</span> <span class="pl-s1">timeout</span>;</div>
<div id="LC262" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">FD_ZERO</span>(<span class="pl-c1">&amp;</span><span class="pl-s1">set</span>);</div>
<div id="LC263" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">FD_SET</span>(<span class="pl-c1">STDIN_FILENO</span>, <span class="pl-c1">&amp;</span><span class="pl-s1">set</span>);</div>
<div id="LC264" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-s1">timeout</span>.<span class="pl-c1">tv_sec</span> <span class="pl-c1">=</span> <span class="pl-s1">timeout_seconds</span>;</div>
<div id="LC265" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-s1">timeout</span>.<span class="pl-c1">tv_usec</span> <span class="pl-c1">=</span> <span class="pl-c1">0</span>;</div>
<div id="LC266" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC267" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-s1">rv</span> <span class="pl-c1">=</span> <span class="pl-en">select</span>(<span class="pl-c1">STDIN_FILENO</span> <span class="pl-c1">+</span> <span class="pl-c1">1</span>, <span class="pl-c1">&amp;</span><span class="pl-s1">set</span>, <span class="pl-c1">NULL</span>, <span class="pl-c1">NULL</span>, <span class="pl-c1">&amp;</span><span class="pl-s1">timeout</span>);</div>
<div id="LC268" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">if</span>(<span class="pl-s1">rv</span> <span class="pl-c1">==</span> <span class="pl-c1">-1</span>) {</div>
<div id="LC269" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">perror</span>(<span class="pl-s">"select"</span>);</div>
<div id="LC270" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">return</span> <span class="pl-c1">0</span>;</div>
<div id="LC271" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    } <span class="pl-k">else</span> <span class="pl-k">if</span>(<span class="pl-s1">rv</span> <span class="pl-c1">==</span> <span class="pl-c1">0</span>) {</div>
<div id="LC272" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">return</span> <span class="pl-c1">0</span>;</div>
<div id="LC273" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    } <span class="pl-k">else</span> {</div>
<div id="LC274" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">if</span>(<span class="pl-en">fgets</span>(<span class="pl-s1">buf</span>, <span class="pl-s1">buf_size</span>, <span class="pl-s1">stdin</span>) <span class="pl-c1">==</span> <span class="pl-c1">NULL</span>) {</div>
<div id="LC275" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-k">return</span> <span class="pl-c1">0</span>;</div>
<div id="LC276" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        }</div>
<div id="LC277" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">buf</span>[<span class="pl-en">strcspn</span>(<span class="pl-s1">buf</span>, <span class="pl-s">"\n"</span>)] <span class="pl-c1">=</span> <span class="pl-c1">'\0'</span>;</div>
<div id="LC278" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">return</span> <span class="pl-c1">1</span>;</div>
<div id="LC279" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div>
<div id="LC280" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">}</div>
<div id="LC281" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC282" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-c1">*</span><span class="pl-en">overall_timer</span>(<span class="pl-smi">void</span> <span class="pl-c1">*</span><span class="pl-s1">arg</span>) {</div>
<div id="LC283" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">sleep</span>(<span class="pl-s1">overallExamTime</span>);</div>
<div id="LC284" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-s1">examTimeUp</span> <span class="pl-c1">=</span> <span class="pl-c1">1</span>;</div>
<div id="LC285" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"\n⏰ *** Overall exam time is up! The exam will now end. ***\n"</span>);</div>
<div id="LC286" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">pthread_exit</span>(<span class="pl-c1">NULL</span>);</div>
<div id="LC287" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">}</div>
<div id="LC288" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC289" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-c1">*</span><span class="pl-en">exam_session</span>(<span class="pl-smi">void</span> <span class="pl-c1">*</span><span class="pl-s1">arg</span>) {</div>
<div id="LC290" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">roll</span> <span class="pl-c1">=</span> (<span class="pl-smi">char</span> <span class="pl-c1">*</span>)<span class="pl-s1">arg</span>;</div>
<div id="LC291" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">char</span> <span class="pl-s1">name</span>[<span class="pl-c1">MAX_LINE</span>], <span class="pl-s1">reg_no</span>[<span class="pl-c1">MAX_LINE</span>];</div>
<div id="LC292" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">double</span> <span class="pl-s1">weightedScore</span> <span class="pl-c1">=</span> <span class="pl-c1">0.0</span>;</div>
<div id="LC293" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-s1">totalDifficulty</span> <span class="pl-c1">=</span> <span class="pl-c1">0</span>;</div>
<div id="LC294" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-s1">wrongCount</span> <span class="pl-c1">=</span> <span class="pl-c1">0</span>, <span class="pl-s1">attempted</span> <span class="pl-c1">=</span> <span class="pl-c1">0</span>;</div>
<div id="LC295" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-s1">isCheating</span> <span class="pl-c1">=</span> <span class="pl-c1">0</span>;</div>
<div id="LC296" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">time_t</span> <span class="pl-s1">questionStartTime</span>;</div>
<div id="LC297" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-s1">totalAnswerTime</span> <span class="pl-c1">=</span> <span class="pl-c1">0</span>;</div>
<div id="LC298" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-s1">responseTimes</span>[<span class="pl-c1">NUM_EXAM_QUESTIONS</span>] <span class="pl-c1">=</span> {<span class="pl-c1">0</span>};</div>
<div id="LC299" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC300" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-s1">correctByDifficulty</span>[<span class="pl-c1">4</span>] <span class="pl-c1">=</span> {<span class="pl-c1">0</span>};</div></div>
<div class="react-no-virtualization-wrapper"><div id="LC301" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-s1">attemptedByDifficulty</span>[<span class="pl-c1">4</span>] <span class="pl-c1">=</span> {<span class="pl-c1">0</span>};</div>
<div id="LC302" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-s1">timeByDifficulty</span>[<span class="pl-c1">4</span>] <span class="pl-c1">=</span> {<span class="pl-c1">0</span>};</div>
<div id="LC303" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">char</span><span class="pl-c1">*</span> <span class="pl-s1">diffNames</span>[] <span class="pl-c1">=</span> {<span class="pl-s">""</span>, <span class="pl-s">"⭐ Easy"</span>, <span class="pl-s">"⭐⭐ Medium"</span>, <span class="pl-s">"⭐⭐⭐ Hard"</span>};</div>
<div id="LC304" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">float</span> <span class="pl-s1">diffWeights</span>[] <span class="pl-c1">=</span> {<span class="pl-c1">0</span>, <span class="pl-c1">1.0</span>, <span class="pl-c1">1.5</span>, <span class="pl-c1">2.0</span>};</div>
<div id="LC305" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC306" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-s1">indices</span>[<span class="pl-s1">totalQuestions</span>];</div>
<div id="LC307" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">for</span> (<span class="pl-smi">int</span> <span class="pl-s1">i</span> <span class="pl-c1">=</span> <span class="pl-c1">0</span>; <span class="pl-s1">i</span> <span class="pl-c1">&lt;</span> <span class="pl-s1">totalQuestions</span>; <span class="pl-s1">i</span><span class="pl-c1">++</span>)</div>
<div id="LC308" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">indices</span>[<span class="pl-s1">i</span>] <span class="pl-c1">=</span> <span class="pl-s1">i</span>;</div>
<div id="LC309" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">srand</span>(<span class="pl-en">time</span>(<span class="pl-c1">NULL</span>));</div>
<div id="LC310" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">for</span> (<span class="pl-smi">int</span> <span class="pl-s1">i</span> <span class="pl-c1">=</span> <span class="pl-s1">totalQuestions</span> <span class="pl-c1">-</span> <span class="pl-c1">1</span>; <span class="pl-s1">i</span> <span class="pl-c1">&gt;</span> <span class="pl-c1">0</span>; <span class="pl-s1">i</span><span class="pl-c1">--</span>) {</div>
<div id="LC311" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-smi">int</span> <span class="pl-s1">j</span> <span class="pl-c1">=</span> <span class="pl-en">rand</span>() % (<span class="pl-s1">i</span> <span class="pl-c1">+</span> <span class="pl-c1">1</span>);</div>
<div id="LC312" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-smi">int</span> <span class="pl-s1">temp</span> <span class="pl-c1">=</span> <span class="pl-s1">indices</span>[<span class="pl-s1">i</span>];</div>
<div id="LC313" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">indices</span>[<span class="pl-s1">i</span>] <span class="pl-c1">=</span> <span class="pl-s1">indices</span>[<span class="pl-s1">j</span>];</div>
<div id="LC314" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">indices</span>[<span class="pl-s1">j</span>] <span class="pl-c1">=</span> <span class="pl-s1">temp</span>;</div>
<div id="LC315" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div>
<div id="LC316" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC317" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"\n📝 Exam starting now. You will be shown %d questions.\n"</span>, <span class="pl-c1">NUM_EXAM_QUESTIONS</span>);</div>
<div id="LC318" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"⏱️  You have %d seconds per question.\n"</span>, <span class="pl-s1">answerTimeout</span>);</div>
<div id="LC319" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"⏳ Overall exam time: %d seconds.\n"</span>, <span class="pl-s1">overallExamTime</span>);</div>
<div id="LC320" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"💡 Question weights: Easy(x%.1f) Medium(x%.1f) Hard(x%.1f)\n"</span>, </div>
<div id="LC321" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">           <span class="pl-s1">diffWeights</span>[<span class="pl-c1">1</span>], <span class="pl-s1">diffWeights</span>[<span class="pl-c1">2</span>], <span class="pl-s1">diffWeights</span>[<span class="pl-c1">3</span>]);</div>
<div id="LC322" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"🚪 Enter 'e' at any time to exit the exam.\n\n"</span>);</div>
<div id="LC323" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC324" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">char</span> <span class="pl-s1">answerBuf</span>[<span class="pl-c1">20</span>];</div>
<div id="LC325" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">for</span> (<span class="pl-smi">int</span> <span class="pl-s1">i</span> <span class="pl-c1">=</span> <span class="pl-c1">0</span>; <span class="pl-s1">i</span> <span class="pl-c1">&lt;</span> <span class="pl-c1">NUM_EXAM_QUESTIONS</span> <span class="pl-c1">&amp;&amp;</span> <span class="pl-s1">i</span> <span class="pl-c1">&lt;</span> <span class="pl-s1">totalQuestions</span>; <span class="pl-s1">i</span><span class="pl-c1">++</span>) {</div>
<div id="LC326" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">if</span> (<span class="pl-s1">examTimeUp</span>) {</div>
<div id="LC327" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-en">printf</span>(<span class="pl-s">"\n⏰ Overall exam time has expired.\n"</span>);</div>
<div id="LC328" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-k">break</span>;</div>
<div id="LC329" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        }</div>
<div id="LC330" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        </div>
<div id="LC331" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-smi">Question</span> <span class="pl-c1">*</span><span class="pl-s1">q</span> <span class="pl-c1">=</span> <span class="pl-c1">&amp;</span><span class="pl-s1">questions</span>[<span class="pl-s1">indices</span>[<span class="pl-s1">i</span>]];</div>
<div id="LC332" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">totalDifficulty</span> <span class="pl-c1">+=</span> <span class="pl-s1">q</span><span class="pl-c1">-&gt;</span><span class="pl-c1">difficulty</span>;</div>
<div id="LC333" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC334" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"\n--------------------------------------------------\n"</span>);</div>
<div id="LC335" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"| 🔹 Q%-38d | %-12s |\n"</span>, <span class="pl-s1">i</span><span class="pl-c1">+</span><span class="pl-c1">1</span>, <span class="pl-s1">diffNames</span>[<span class="pl-s1">q</span><span class="pl-c1">-&gt;</span><span class="pl-c1">difficulty</span>]);</div>
<div id="LC336" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"--------------------------------------------------\n"</span>);</div>
<div id="LC337" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"| %-47s |\n"</span>, <span class="pl-s1">q</span><span class="pl-c1">-&gt;</span><span class="pl-c1">question</span>);</div>
<div id="LC338" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"| 🅰️  %-45s |\n"</span>, <span class="pl-s1">q</span><span class="pl-c1">-&gt;</span><span class="pl-c1">optionA</span>);</div>
<div id="LC339" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"| 🅱️  %-45s |\n"</span>, <span class="pl-s1">q</span><span class="pl-c1">-&gt;</span><span class="pl-c1">optionB</span>);</div>
<div id="LC340" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"| ©️  %-45s |\n"</span>, <span class="pl-s1">q</span><span class="pl-c1">-&gt;</span><span class="pl-c1">optionC</span>);</div>
<div id="LC341" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"| 🅳  %-45s |\n"</span>, <span class="pl-s1">q</span><span class="pl-c1">-&gt;</span><span class="pl-c1">optionD</span>);</div>
<div id="LC342" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"--------------------------------------------------\n"</span>);</div>
<div id="LC343" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        </div>
<div id="LC344" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"💭 Your answer (A/B/C/D or 'e' to exit): "</span>);</div>
<div id="LC345" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">fflush</span>(<span class="pl-s1">stdout</span>);</div>
<div id="LC346" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        </div>
<div id="LC347" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">questionStartTime</span> <span class="pl-c1">=</span> <span class="pl-en">time</span>(<span class="pl-c1">NULL</span>);</div>
<div id="LC348" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-smi">int</span> <span class="pl-s1">gotInput</span> <span class="pl-c1">=</span> <span class="pl-en">get_input_with_timeout</span>(<span class="pl-s1">answerBuf</span>, <span class="pl-k">sizeof</span>(<span class="pl-s1">answerBuf</span>), <span class="pl-s1">answerTimeout</span>);</div>
<div id="LC349" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-smi">int</span> <span class="pl-s1">answerTime</span> <span class="pl-c1">=</span> <span class="pl-en">time</span>(<span class="pl-c1">NULL</span>) <span class="pl-c1">-</span> <span class="pl-s1">questionStartTime</span>;</div>
<div id="LC350" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">totalAnswerTime</span> <span class="pl-c1">+=</span> <span class="pl-s1">answerTime</span>;</div>
<div id="LC351" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">timeByDifficulty</span>[<span class="pl-s1">q</span><span class="pl-c1">-&gt;</span><span class="pl-c1">difficulty</span>] <span class="pl-c1">+=</span> <span class="pl-s1">answerTime</span>;</div>
<div id="LC352" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">responseTimes</span>[<span class="pl-s1">i</span>] <span class="pl-c1">=</span> <span class="pl-s1">answerTime</span>;</div>
<div id="LC353" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        </div>
<div id="LC354" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">clear_input_buffer</span>();</div>
<div id="LC355" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        </div>
<div id="LC356" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">if</span>(!<span class="pl-s1">gotInput</span>) {</div>
<div id="LC357" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-en">printf</span>(<span class="pl-s">"\n⏰ Time's up for this question! No answer provided.\n"</span>);</div>
<div id="LC358" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-s1">wrongCount</span><span class="pl-c1">++</span>;</div>
<div id="LC359" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-s1">attempted</span><span class="pl-c1">++</span>;</div>
<div id="LC360" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-s1">attemptedByDifficulty</span>[<span class="pl-s1">q</span><span class="pl-c1">-&gt;</span><span class="pl-c1">difficulty</span>]<span class="pl-c1">++</span>;</div></div>
<div class="react-no-virtualization-wrapper"><div id="LC361" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-en">printf</span>(<span class="pl-s">"\n--------------------------\n\n"</span>);</div>
<div id="LC362" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-k">continue</span>;</div>
<div id="LC363" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        }</div>
<div id="LC364" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        </div>
<div id="LC365" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">if</span>(<span class="pl-s1">answerBuf</span>[<span class="pl-c1">0</span>] <span class="pl-c1">==</span> <span class="pl-c1">'e'</span> <span class="pl-c1">||</span> <span class="pl-s1">answerBuf</span>[<span class="pl-c1">0</span>] <span class="pl-c1">==</span> <span class="pl-c1">'E'</span>) {</div>
<div id="LC366" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-en">printf</span>(<span class="pl-s">"\n🚪 Exiting exam early...\n"</span>);</div>
<div id="LC367" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-k">break</span>;</div>
<div id="LC368" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        }</div>
<div id="LC369" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        </div>
<div id="LC370" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-smi">char</span> <span class="pl-s1">userAns</span> <span class="pl-c1">=</span> <span class="pl-en">toupper</span>(<span class="pl-s1">answerBuf</span>[<span class="pl-c1">0</span>]);</div>
<div id="LC371" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">attempted</span><span class="pl-c1">++</span>;</div>
<div id="LC372" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">attemptedByDifficulty</span>[<span class="pl-s1">q</span><span class="pl-c1">-&gt;</span><span class="pl-c1">difficulty</span>]<span class="pl-c1">++</span>;</div>
<div id="LC373" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        </div>
<div id="LC374" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">if</span>(<span class="pl-s1">answerTime</span> <span class="pl-c1">&lt;</span> <span class="pl-c1">MIN_ANSWER_TIME</span>) {</div>
<div id="LC375" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-en">printf</span>(<span class="pl-s">"\n⚠️  Warning: You answered very quickly (%d seconds).\n"</span>, <span class="pl-s1">answerTime</span>);</div>
<div id="LC376" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-s1">isCheating</span> <span class="pl-c1">=</span> <span class="pl-c1">1</span>;</div>
<div id="LC377" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        }</div>
<div id="LC378" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        </div>
<div id="LC379" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">if</span>(<span class="pl-s1">userAns</span> <span class="pl-c1">==</span> <span class="pl-s1">q</span><span class="pl-c1">-&gt;</span><span class="pl-c1">correct</span>) {</div>
<div id="LC380" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-en">printf</span>(<span class="pl-s">"✅ Correct! (+%.1f points)\n"</span>, <span class="pl-s1">diffWeights</span>[<span class="pl-s1">q</span><span class="pl-c1">-&gt;</span><span class="pl-c1">difficulty</span>]);</div>
<div id="LC381" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-s1">weightedScore</span> <span class="pl-c1">+=</span> <span class="pl-s1">diffWeights</span>[<span class="pl-s1">q</span><span class="pl-c1">-&gt;</span><span class="pl-c1">difficulty</span>];</div>
<div id="LC382" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-s1">correctByDifficulty</span>[<span class="pl-s1">q</span><span class="pl-c1">-&gt;</span><span class="pl-c1">difficulty</span>]<span class="pl-c1">++</span>;</div>
<div id="LC383" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        } <span class="pl-k">else</span> {</div>
<div id="LC384" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-en">printf</span>(<span class="pl-s">"❌ Wrong! Correct answer: %c\n"</span>, <span class="pl-s1">q</span><span class="pl-c1">-&gt;</span><span class="pl-c1">correct</span>);</div>
<div id="LC385" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-s1">wrongCount</span><span class="pl-c1">++</span>;</div>
<div id="LC386" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        }</div>
<div id="LC387" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"\n--------------------------\n\n"</span>);</div>
<div id="LC388" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div>
<div id="LC389" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC390" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">if</span>(<span class="pl-s1">attempted</span> <span class="pl-c1">&gt;</span> <span class="pl-c1">0</span> <span class="pl-c1">&amp;&amp;</span> (<span class="pl-s1">totalAnswerTime</span>/<span class="pl-s1">attempted</span>) <span class="pl-c1">&lt;</span> <span class="pl-c1">MIN_ANSWER_TIME</span>) {</div>
<div id="LC391" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">isCheating</span> <span class="pl-c1">=</span> <span class="pl-c1">1</span>;</div>
<div id="LC392" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div>
<div id="LC393" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC394" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-s1">correctCount</span> <span class="pl-c1">=</span> <span class="pl-s1">attempted</span> <span class="pl-c1">-</span> <span class="pl-s1">wrongCount</span>;</div>
<div id="LC395" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">double</span> <span class="pl-s1">accuracy</span> <span class="pl-c1">=</span> (<span class="pl-s1">attempted</span> <span class="pl-c1">&gt;</span> <span class="pl-c1">0</span>) ? ((<span class="pl-smi">double</span>)<span class="pl-s1">correctCount</span> / <span class="pl-s1">attempted</span>) <span class="pl-c1">*</span> <span class="pl-c1">100</span> : <span class="pl-c1">0</span>;</div>
<div id="LC396" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC397" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"\n***********************************************************************\n"</span>);</div>
<div id="LC398" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"*                         📊 DETAILED RESULTS                        *\n"</span>);</div>
<div id="LC399" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"***********************************************************************\n"</span>);</div>
<div id="LC400" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"| %-25s: %10.2f (Max: %.1f)                   |\n"</span>, <span class="pl-s">"🎯 Weighted Score"</span>, <span class="pl-s1">weightedScore</span>, </div>
<div id="LC401" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">          <span class="pl-c1">NUM_EXAM_QUESTIONS</span> <span class="pl-c1">*</span> <span class="pl-s1">diffWeights</span>[<span class="pl-c1">3</span>]);</div>
<div id="LC402" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"| %-25s: %10.2f%%                                   |\n"</span>, <span class="pl-s">"📈 Overall Accuracy"</span>, <span class="pl-s1">accuracy</span>);</div>
<div id="LC403" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC404" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"\n--------------------------------------------------------\n"</span>);</div>
<div id="LC405" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"| %-12s | %-8s | %-8s | %-8s | %-8s |\n"</span>, <span class="pl-s">"Difficulty"</span>, <span class="pl-s">"Correct"</span>, <span class="pl-s">"Attempted"</span>, <span class="pl-s">"Accuracy"</span>, <span class="pl-s">"Avg Time"</span>);</div>
<div id="LC406" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"--------------------------------------------------------\n"</span>);</div>
<div id="LC407" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC408" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">for</span>(<span class="pl-smi">int</span> <span class="pl-s1">i</span> <span class="pl-c1">=</span> <span class="pl-c1">1</span>; <span class="pl-s1">i</span> &lt;= <span class="pl-c1">3</span>; <span class="pl-s1">i</span><span class="pl-c1">++</span>) {</div>
<div id="LC409" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">if</span>(<span class="pl-s1">attemptedByDifficulty</span>[<span class="pl-s1">i</span>] <span class="pl-c1">&gt;</span> <span class="pl-c1">0</span>) {</div>
<div id="LC410" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-smi">float</span> <span class="pl-s1">diffAccuracy</span> <span class="pl-c1">=</span> (<span class="pl-smi">float</span>)<span class="pl-s1">correctByDifficulty</span>[<span class="pl-s1">i</span>]/<span class="pl-s1">attemptedByDifficulty</span>[<span class="pl-s1">i</span>]<span class="pl-c1">*</span><span class="pl-c1">100</span>;</div>
<div id="LC411" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-smi">float</span> <span class="pl-s1">avgTime</span> <span class="pl-c1">=</span> (<span class="pl-smi">float</span>)<span class="pl-s1">timeByDifficulty</span>[<span class="pl-s1">i</span>]/<span class="pl-s1">attemptedByDifficulty</span>[<span class="pl-s1">i</span>];</div>
<div id="LC412" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            </div>
<div id="LC413" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-en">printf</span>(<span class="pl-s">"| %-12s | %-8d | %-8d | %-7.1f%% | %-7.1fs |\n"</span>,</div>
<div id="LC414" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">                  <span class="pl-s1">diffNames</span>[<span class="pl-s1">i</span>],</div>
<div id="LC415" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">                  <span class="pl-s1">correctByDifficulty</span>[<span class="pl-s1">i</span>],</div>
<div id="LC416" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">                  <span class="pl-s1">attemptedByDifficulty</span>[<span class="pl-s1">i</span>],</div>
<div id="LC417" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">                  <span class="pl-s1">diffAccuracy</span>,</div>
<div id="LC418" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">                  <span class="pl-s1">avgTime</span>);</div>
<div id="LC419" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        }</div>
<div id="LC420" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div></div>
<div class="react-no-virtualization-wrapper"><div id="LC421" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC422" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"--------------------------------------------------------\n"</span>);</div>
<div id="LC423" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"| %-25s: %10d                                     |\n"</span>, <span class="pl-s">"📝 Total Attempted"</span>, <span class="pl-s1">attempted</span>);</div>
<div id="LC424" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"***********************************************************************\n\n"</span>);</div>
<div id="LC425" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC426" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">append_result</span>(<span class="pl-s1">name</span>, <span class="pl-s1">roll</span>, <span class="pl-s1">weightedScore</span>, <span class="pl-s1">wrongCount</span>, <span class="pl-s1">attempted</span>, <span class="pl-s1">isCheating</span>, <span class="pl-s1">responseTimes</span>, <span class="pl-s1">totalAnswerTime</span>);</div>
<div id="LC427" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">pthread_exit</span>(<span class="pl-c1">NULL</span>);</div>
<div id="LC428" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">}</div>
<div id="LC429" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC430" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">loadDashboardData</span>() {</div>
<div id="LC431" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">FILE</span> <span class="pl-c1">*</span><span class="pl-s1">file</span> <span class="pl-c1">=</span> <span class="pl-en">fopen</span>(<span class="pl-c1">RESULT_FILE</span>, <span class="pl-s">"r"</span>);</div>
<div id="LC432" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">if</span> (<span class="pl-s1">file</span> <span class="pl-c1">==</span> <span class="pl-c1">NULL</span>) <span class="pl-k">return</span>;</div>
<div id="LC433" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC434" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-s1">studentCount</span> <span class="pl-c1">=</span> <span class="pl-c1">0</span>;</div>
<div id="LC435" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">char</span> <span class="pl-s1">line</span>[<span class="pl-c1">MAX_LINE</span>];</div>
<div id="LC436" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">while</span> (<span class="pl-en">fgets</span>(<span class="pl-s1">line</span>, <span class="pl-k">sizeof</span>(<span class="pl-s1">line</span>), <span class="pl-s1">file</span>) <span class="pl-c1">&amp;&amp;</span> <span class="pl-s1">studentCount</span> <span class="pl-c1">&lt;</span> <span class="pl-c1">MAX_STUDENTS</span>) {</div>
<div id="LC437" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-smi">DashboardStudent</span> <span class="pl-c1">*</span><span class="pl-s1">s</span> <span class="pl-c1">=</span> <span class="pl-c1">&amp;</span><span class="pl-s1">dashboardStudents</span>[<span class="pl-s1">studentCount</span>];</div>
<div id="LC438" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">token</span> <span class="pl-c1">=</span> <span class="pl-en">strtok</span>(<span class="pl-s1">line</span>, <span class="pl-s">"|"</span>);</div>
<div id="LC439" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        </div>
<div id="LC440" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">strcpy</span>(<span class="pl-s1">s</span><span class="pl-c1">-&gt;</span><span class="pl-c1">roll</span>, <span class="pl-s1">token</span>);</div>
<div id="LC441" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">token</span> <span class="pl-c1">=</span> <span class="pl-en">strtok</span>(<span class="pl-c1">NULL</span>, <span class="pl-s">"|"</span>);</div>
<div id="LC442" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">strcpy</span>(<span class="pl-s1">s</span><span class="pl-c1">-&gt;</span><span class="pl-c1">name</span>, <span class="pl-s1">token</span>);</div>
<div id="LC443" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">token</span> <span class="pl-c1">=</span> <span class="pl-en">strtok</span>(<span class="pl-c1">NULL</span>, <span class="pl-s">"|"</span>);</div>
<div id="LC444" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">s</span><span class="pl-c1">-&gt;</span><span class="pl-c1">correctAnswers</span> <span class="pl-c1">=</span> <span class="pl-en">atoi</span>(<span class="pl-s1">token</span>);</div>
<div id="LC445" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">token</span> <span class="pl-c1">=</span> <span class="pl-en">strtok</span>(<span class="pl-c1">NULL</span>, <span class="pl-s">"|"</span>);</div>
<div id="LC446" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">s</span><span class="pl-c1">-&gt;</span><span class="pl-c1">totalQuestions</span> <span class="pl-c1">=</span> <span class="pl-en">atoi</span>(<span class="pl-s1">token</span>);</div>
<div id="LC447" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">token</span> <span class="pl-c1">=</span> <span class="pl-en">strtok</span>(<span class="pl-c1">NULL</span>, <span class="pl-s">"|"</span>);</div>
<div id="LC448" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">s</span><span class="pl-c1">-&gt;</span><span class="pl-c1">flagged</span> <span class="pl-c1">=</span> <span class="pl-en">atoi</span>(<span class="pl-s1">token</span>);</div>
<div id="LC449" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">token</span> <span class="pl-c1">=</span> <span class="pl-en">strtok</span>(<span class="pl-c1">NULL</span>, <span class="pl-s">"|"</span>);</div>
<div id="LC450" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">s</span><span class="pl-c1">-&gt;</span><span class="pl-c1">totalTime</span> <span class="pl-c1">=</span> <span class="pl-en">atoi</span>(<span class="pl-s1">token</span>);</div>
<div id="LC451" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        </div>
<div id="LC452" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-smi">char</span> <span class="pl-c1">*</span><span class="pl-s1">timeToken</span> <span class="pl-c1">=</span> <span class="pl-en">strtok</span>(<span class="pl-s1">token</span>, <span class="pl-s">","</span>);</div>
<div id="LC453" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-smi">int</span> <span class="pl-s1">i</span> <span class="pl-c1">=</span> <span class="pl-c1">0</span>;</div>
<div id="LC454" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">while</span> (<span class="pl-s1">timeToken</span> <span class="pl-c1">!=</span> <span class="pl-c1">NULL</span> <span class="pl-c1">&amp;&amp;</span> <span class="pl-s1">i</span> <span class="pl-c1">&lt;</span> <span class="pl-c1">NUM_EXAM_QUESTIONS</span>) {</div>
<div id="LC455" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-s1">s</span><span class="pl-c1">-&gt;</span><span class="pl-c1">responseTimes</span>[<span class="pl-s1">i</span><span class="pl-c1">++</span>] <span class="pl-c1">=</span> <span class="pl-en">atoi</span>(<span class="pl-s1">timeToken</span>);</div>
<div id="LC456" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-s1">timeToken</span> <span class="pl-c1">=</span> <span class="pl-en">strtok</span>(<span class="pl-c1">NULL</span>, <span class="pl-s">","</span>);</div>
<div id="LC457" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        }</div>
<div id="LC458" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        </div>
<div id="LC459" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">studentCount</span><span class="pl-c1">++</span>;</div>
<div id="LC460" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div>
<div id="LC461" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">fclose</span>(<span class="pl-s1">file</span>);</div>
<div id="LC462" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">}</div>
<div id="LC463" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC464" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">flagSuspiciousActivity</span>() {</div>
<div id="LC465" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">for</span> (<span class="pl-smi">int</span> <span class="pl-s1">i</span> <span class="pl-c1">=</span> <span class="pl-c1">0</span>; <span class="pl-s1">i</span> <span class="pl-c1">&lt;</span> <span class="pl-s1">studentCount</span>; <span class="pl-c1">++</span><span class="pl-s1">i</span>) {</div>
<div id="LC466" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">for</span> (<span class="pl-smi">int</span> <span class="pl-s1">j</span> <span class="pl-c1">=</span> <span class="pl-c1">0</span>; <span class="pl-s1">j</span> <span class="pl-c1">&lt;</span> <span class="pl-s1">dashboardStudents</span>[<span class="pl-s1">i</span>].<span class="pl-c1">totalQuestions</span>; <span class="pl-c1">++</span><span class="pl-s1">j</span>) {</div>
<div id="LC467" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-k">if</span> (<span class="pl-s1">dashboardStudents</span>[<span class="pl-s1">i</span>].<span class="pl-c1">responseTimes</span>[<span class="pl-s1">j</span>] <span class="pl-c1">&lt;</span> <span class="pl-c1">2</span>) {</div>
<div id="LC468" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">                <span class="pl-s1">dashboardStudents</span>[<span class="pl-s1">i</span>].<span class="pl-c1">flagged</span> <span class="pl-c1">=</span> <span class="pl-c1">1</span>;</div>
<div id="LC469" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">                <span class="pl-k">break</span>;</div>
<div id="LC470" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            }</div>
<div id="LC471" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        }</div>
<div id="LC472" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div>
<div id="LC473" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">}</div>
<div id="LC474" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC475" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">rankStudents</span>() {</div>
<div id="LC476" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">for</span> (<span class="pl-smi">int</span> <span class="pl-s1">i</span> <span class="pl-c1">=</span> <span class="pl-c1">0</span>; <span class="pl-s1">i</span> <span class="pl-c1">&lt;</span> <span class="pl-s1">studentCount</span> <span class="pl-c1">-</span> <span class="pl-c1">1</span>; <span class="pl-c1">++</span><span class="pl-s1">i</span>) {</div>
<div id="LC477" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">for</span> (<span class="pl-smi">int</span> <span class="pl-s1">j</span> <span class="pl-c1">=</span> <span class="pl-c1">0</span>; <span class="pl-s1">j</span> <span class="pl-c1">&lt;</span> <span class="pl-s1">studentCount</span> <span class="pl-c1">-</span> <span class="pl-s1">i</span> <span class="pl-c1">-</span> <span class="pl-c1">1</span>; <span class="pl-c1">++</span><span class="pl-s1">j</span>) {</div>
<div id="LC478" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-k">if</span> (<span class="pl-s1">dashboardStudents</span>[<span class="pl-s1">j</span>].<span class="pl-c1">correctAnswers</span> <span class="pl-c1">&lt;</span> <span class="pl-s1">dashboardStudents</span>[<span class="pl-s1">j</span> <span class="pl-c1">+</span> <span class="pl-c1">1</span>].<span class="pl-c1">correctAnswers</span>) {</div>
<div id="LC479" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">                <span class="pl-smi">DashboardStudent</span> <span class="pl-s1">temp</span> <span class="pl-c1">=</span> <span class="pl-s1">dashboardStudents</span>[<span class="pl-s1">j</span>];</div>
<div id="LC480" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">                <span class="pl-s1">dashboardStudents</span>[<span class="pl-s1">j</span>] <span class="pl-c1">=</span> <span class="pl-s1">dashboardStudents</span>[<span class="pl-s1">j</span> <span class="pl-c1">+</span> <span class="pl-c1">1</span>];</div></div>
<div class="react-no-virtualization-wrapper"><div id="LC481" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">                <span class="pl-s1">dashboardStudents</span>[<span class="pl-s1">j</span> <span class="pl-c1">+</span> <span class="pl-c1">1</span>] <span class="pl-c1">=</span> <span class="pl-s1">temp</span>;</div>
<div id="LC482" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            }</div>
<div id="LC483" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        }</div>
<div id="LC484" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div>
<div id="LC485" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC486" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">for</span> (<span class="pl-smi">int</span> <span class="pl-s1">i</span> <span class="pl-c1">=</span> <span class="pl-c1">0</span>; <span class="pl-s1">i</span> <span class="pl-c1">&lt;</span> <span class="pl-s1">studentCount</span>; <span class="pl-c1">++</span><span class="pl-s1">i</span>) {</div>
<div id="LC487" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-s1">dashboardStudents</span>[<span class="pl-s1">i</span>].<span class="pl-c1">rank</span> <span class="pl-c1">=</span> <span class="pl-s1">i</span> <span class="pl-c1">+</span> <span class="pl-c1">1</span>;</div>
<div id="LC488" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div>
<div id="LC489" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">}</div>
<div id="LC490" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC491" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">displayDashboard</span>() {</div>
<div id="LC492" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">loadDashboardData</span>();</div>
<div id="LC493" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">flagSuspiciousActivity</span>();</div>
<div id="LC494" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">rankStudents</span>();</div>
<div id="LC495" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC496" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"\n\n--------------------------------------------------\n"</span>);</div>
<div id="LC497" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"| Rank | Name         | Total Time | Accuracy | Flagged |\n"</span>);</div>
<div id="LC498" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"--------------------------------------------------\n"</span>);</div>
<div id="LC499" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC500" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">for</span> (<span class="pl-smi">int</span> <span class="pl-s1">i</span> <span class="pl-c1">=</span> <span class="pl-c1">0</span>; <span class="pl-s1">i</span> <span class="pl-c1">&lt;</span> <span class="pl-s1">studentCount</span>; <span class="pl-c1">++</span><span class="pl-s1">i</span>) {</div>
<div id="LC501" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-smi">float</span> <span class="pl-s1">accuracy</span> <span class="pl-c1">=</span> <span class="pl-s1">dashboardStudents</span>[<span class="pl-s1">i</span>].<span class="pl-c1">totalQuestions</span> <span class="pl-c1">&gt;</span> <span class="pl-c1">0</span> ? </div>
<div id="LC502" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            (<span class="pl-smi">float</span>)<span class="pl-s1">dashboardStudents</span>[<span class="pl-s1">i</span>].<span class="pl-c1">correctAnswers</span> / <span class="pl-s1">dashboardStudents</span>[<span class="pl-s1">i</span>].<span class="pl-c1">totalQuestions</span> <span class="pl-c1">*</span> <span class="pl-c1">100</span> : <span class="pl-c1">0</span>;</div>
<div id="LC503" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        </div>
<div id="LC504" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"| %-4d | %-12s | %-10d | %-8.2f | %-7s |\n"</span>,</div>
<div id="LC505" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">               <span class="pl-s1">dashboardStudents</span>[<span class="pl-s1">i</span>].<span class="pl-c1">rank</span>,</div>
<div id="LC506" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">               <span class="pl-s1">dashboardStudents</span>[<span class="pl-s1">i</span>].<span class="pl-c1">name</span>,</div>
<div id="LC507" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">               <span class="pl-s1">dashboardStudents</span>[<span class="pl-s1">i</span>].<span class="pl-c1">totalTime</span>,</div>
<div id="LC508" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">               <span class="pl-s1">accuracy</span>,</div>
<div id="LC509" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">               <span class="pl-s1">dashboardStudents</span>[<span class="pl-s1">i</span>].<span class="pl-c1">flagged</span> ? <span class="pl-s">"🚩"</span> : <span class="pl-s">"✅"</span>);</div>
<div id="LC510" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div>
<div id="LC511" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"--------------------------------------------------\n"</span>);</div>
<div id="LC512" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">}</div>
<div id="LC513" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC514" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">add_question</span>() {</div>
<div id="LC515" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">FILE</span> <span class="pl-c1">*</span><span class="pl-s1">fp</span> <span class="pl-c1">=</span> <span class="pl-en">fopen</span>(<span class="pl-c1">QUESTION_FILE</span>, <span class="pl-s">"a"</span>);</div>
<div id="LC516" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">if</span>(<span class="pl-s1">fp</span> <span class="pl-c1">==</span> <span class="pl-c1">NULL</span>) {</div>
<div id="LC517" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">perror</span>(<span class="pl-s">"📛 Error opening questions file"</span>);</div>
<div id="LC518" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">return</span>;</div>
<div id="LC519" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div>
<div id="LC520" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC521" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">Question</span> <span class="pl-s1">newQuestion</span>;</div>
<div id="LC522" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"📝 Enter the question: "</span>);</div>
<div id="LC523" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">clear_input_buffer</span>();</div>
<div id="LC524" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">fgets</span>(<span class="pl-s1">newQuestion</span>.<span class="pl-c1">question</span>, <span class="pl-c1">MAX_LINE</span>, <span class="pl-s1">stdin</span>);</div>
<div id="LC525" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">trim</span>(<span class="pl-s1">newQuestion</span>.<span class="pl-c1">question</span>);</div>
<div id="LC526" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC527" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"🅰️  Enter option A: "</span>);</div>
<div id="LC528" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">fgets</span>(<span class="pl-s1">newQuestion</span>.<span class="pl-c1">optionA</span>, <span class="pl-c1">MAX_LINE</span>, <span class="pl-s1">stdin</span>);</div>
<div id="LC529" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">trim</span>(<span class="pl-s1">newQuestion</span>.<span class="pl-c1">optionA</span>);</div>
<div id="LC530" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC531" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"🅱️  Enter option B: "</span>);</div>
<div id="LC532" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">fgets</span>(<span class="pl-s1">newQuestion</span>.<span class="pl-c1">optionB</span>, <span class="pl-c1">MAX_LINE</span>, <span class="pl-s1">stdin</span>);</div>
<div id="LC533" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">trim</span>(<span class="pl-s1">newQuestion</span>.<span class="pl-c1">optionB</span>);</div>
<div id="LC534" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC535" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"©️  Enter option C: "</span>);</div>
<div id="LC536" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">fgets</span>(<span class="pl-s1">newQuestion</span>.<span class="pl-c1">optionC</span>, <span class="pl-c1">MAX_LINE</span>, <span class="pl-s1">stdin</span>);</div>
<div id="LC537" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">trim</span>(<span class="pl-s1">newQuestion</span>.<span class="pl-c1">optionC</span>);</div>
<div id="LC538" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC539" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"🅳  Enter option D: "</span>);</div>
<div id="LC540" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">fgets</span>(<span class="pl-s1">newQuestion</span>.<span class="pl-c1">optionD</span>, <span class="pl-c1">MAX_LINE</span>, <span class="pl-s1">stdin</span>);</div></div>
<div class="react-no-virtualization-wrapper"><div id="LC541" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">trim</span>(<span class="pl-s1">newQuestion</span>.<span class="pl-c1">optionD</span>);</div>
<div id="LC542" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC543" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"✅ Enter the correct option (A/B/C/D): "</span>);</div>
<div id="LC544" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">scanf</span>(<span class="pl-s">" %c"</span>, <span class="pl-c1">&amp;</span><span class="pl-s1">newQuestion</span>.<span class="pl-c1">correct</span>);</div>
<div id="LC545" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-s1">newQuestion</span>.<span class="pl-c1">correct</span> <span class="pl-c1">=</span> <span class="pl-en">toupper</span>(<span class="pl-s1">newQuestion</span>.<span class="pl-c1">correct</span>);</div>
<div id="LC546" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC547" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"📊 Enter difficulty level (1=Easy, 2=Medium, 3=Hard): "</span>);</div>
<div id="LC548" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">scanf</span>(<span class="pl-s">"%d"</span>, <span class="pl-c1">&amp;</span><span class="pl-s1">newQuestion</span>.<span class="pl-c1">difficulty</span>);</div>
<div id="LC549" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC550" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">fprintf</span>(<span class="pl-s1">fp</span>, <span class="pl-s">"%s\n%s\n%s\n%s\n%s\n%c\n%d\n"</span>, </div>
<div id="LC551" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">           <span class="pl-s1">newQuestion</span>.<span class="pl-c1">question</span>, </div>
<div id="LC552" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">           <span class="pl-s1">newQuestion</span>.<span class="pl-c1">optionA</span>,</div>
<div id="LC553" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">           <span class="pl-s1">newQuestion</span>.<span class="pl-c1">optionB</span>,</div>
<div id="LC554" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">           <span class="pl-s1">newQuestion</span>.<span class="pl-c1">optionC</span>,</div>
<div id="LC555" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">           <span class="pl-s1">newQuestion</span>.<span class="pl-c1">optionD</span>,</div>
<div id="LC556" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">           <span class="pl-s1">newQuestion</span>.<span class="pl-c1">correct</span>,</div>
<div id="LC557" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">           <span class="pl-s1">newQuestion</span>.<span class="pl-c1">difficulty</span>);</div>
<div id="LC558" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC559" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">fclose</span>(<span class="pl-s1">fp</span>);</div>
<div id="LC560" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"🎉 Question added successfully!\n"</span>);</div>
<div id="LC561" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">}</div>
<div id="LC562" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC563" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">set_time_limit</span>() {</div>
<div id="LC564" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-s1">new_time</span>;</div>
<div id="LC565" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"⏱️  Enter the new time limit for each question (in seconds): "</span>);</div>
<div id="LC566" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">scanf</span>(<span class="pl-s">"%d"</span>, <span class="pl-c1">&amp;</span><span class="pl-s1">new_time</span>);</div>
<div id="LC567" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-s1">answerTimeout</span> <span class="pl-c1">=</span> <span class="pl-s1">new_time</span>;</div>
<div id="LC568" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC569" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">FILE</span> <span class="pl-c1">*</span><span class="pl-s1">fp</span> <span class="pl-c1">=</span> <span class="pl-en">fopen</span>(<span class="pl-c1">RULES_FILE</span>, <span class="pl-s">"w"</span>);</div>
<div id="LC570" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">if</span>(<span class="pl-s1">fp</span> <span class="pl-c1">!=</span> <span class="pl-c1">NULL</span>) {</div>
<div id="LC571" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">fprintf</span>(<span class="pl-s1">fp</span>, <span class="pl-s">"Time limit per question: %d\nMarks awarded for correct answer: %.2f\nMarks deducted for incorrect answer: %.2f\n"</span>, </div>
<div id="LC572" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">                <span class="pl-s1">answerTimeout</span>, <span class="pl-s1">marksForCorrectAnswer</span>, <span class="pl-s1">marksDeductedForWrongAnswer</span>);</div>
<div id="LC573" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">fclose</span>(<span class="pl-s1">fp</span>);</div>
<div id="LC574" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div>
<div id="LC575" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"🔄 Time limit set to %d seconds.\n"</span>, <span class="pl-s1">answerTimeout</span>);</div>
<div id="LC576" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">}</div>
<div id="LC577" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC578" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">set_marking_scheme</span>() {</div>
<div id="LC579" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"➕ Enter marks for correct answer: "</span>);</div>
<div id="LC580" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">scanf</span>(<span class="pl-s">"%f"</span>, <span class="pl-c1">&amp;</span><span class="pl-s1">marksForCorrectAnswer</span>);</div>
<div id="LC581" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"➖ Enter marks deducted for wrong answer: "</span>);</div>
<div id="LC582" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">scanf</span>(<span class="pl-s">"%f"</span>, <span class="pl-c1">&amp;</span><span class="pl-s1">marksDeductedForWrongAnswer</span>);</div>
<div id="LC583" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC584" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">FILE</span> <span class="pl-c1">*</span><span class="pl-s1">fp</span> <span class="pl-c1">=</span> <span class="pl-en">fopen</span>(<span class="pl-c1">RULES_FILE</span>, <span class="pl-s">"w"</span>);</div>
<div id="LC585" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">if</span>(<span class="pl-s1">fp</span> <span class="pl-c1">!=</span> <span class="pl-c1">NULL</span>) {</div>
<div id="LC586" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">fprintf</span>(<span class="pl-s1">fp</span>, <span class="pl-s">"Time limit per question: %d\nMarks awarded for correct answer: %.2f\nMarks deducted for incorrect answer: %.2f\n"</span>, </div>
<div id="LC587" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">                <span class="pl-s1">answerTimeout</span>, <span class="pl-s1">marksForCorrectAnswer</span>, <span class="pl-s1">marksDeductedForWrongAnswer</span>);</div>
<div id="LC588" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">fclose</span>(<span class="pl-s1">fp</span>);</div>
<div id="LC589" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div>
<div id="LC590" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"🔄 Marking scheme updated: +%.2f for correct, -%.2f for wrong.\n"</span>, </div>
<div id="LC591" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">           <span class="pl-s1">marksForCorrectAnswer</span>, <span class="pl-s1">marksDeductedForWrongAnswer</span>);</div>
<div id="LC592" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">}</div>
<div id="LC593" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC594" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">void</span> <span class="pl-en">instructor_menu</span>() {</div>
<div id="LC595" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-s1">instructor_choice</span>;</div>
<div id="LC596" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">do</span> {</div>
<div id="LC597" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"\n📋 Instructor Menu:\n"</span>);</div>
<div id="LC598" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"1. ⏱️  Set Time Limit for Questions\n"</span>);</div>
<div id="LC599" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"2. 📝 Add a Question\n"</span>);</div>
<div id="LC600" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"3. 📊 Set Marking Scheme\n"</span>);</div></div>
<div class="react-no-virtualization-wrapper"><div id="LC601" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"4. 📈 View Dashboard\n"</span>);</div>
<div id="LC602" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"5. 🚪 Exit\n"</span>);</div>
<div id="LC603" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"🎯 Enter your choice: "</span>);</div>
<div id="LC604" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">scanf</span>(<span class="pl-s">"%d"</span>, <span class="pl-c1">&amp;</span><span class="pl-s1">instructor_choice</span>);</div>
<div id="LC605" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        </div>
<div id="LC606" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">switch</span> (<span class="pl-s1">instructor_choice</span>) {</div>
<div id="LC607" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-k">case</span> <span class="pl-c1">1</span>:</div>
<div id="LC608" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">                <span class="pl-en">set_time_limit</span>();</div>
<div id="LC609" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">                <span class="pl-k">break</span>;</div>
<div id="LC610" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-k">case</span> <span class="pl-c1">2</span>:</div>
<div id="LC611" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">                <span class="pl-en">add_question</span>();</div>
<div id="LC612" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">                <span class="pl-k">break</span>;</div>
<div id="LC613" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-k">case</span> <span class="pl-c1">3</span>:</div>
<div id="LC614" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">                <span class="pl-en">set_marking_scheme</span>();</div>
<div id="LC615" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">                <span class="pl-k">break</span>;</div>
<div id="LC616" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-k">case</span> <span class="pl-c1">4</span>:</div>
<div id="LC617" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">                <span class="pl-en">displayDashboard</span>();</div>
<div id="LC618" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">                <span class="pl-k">break</span>;</div>
<div id="LC619" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-k">case</span> <span class="pl-c1">5</span>:</div>
<div id="LC620" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">                <span class="pl-en">printf</span>(<span class="pl-s">"\n🚪 Exiting...\n"</span>);</div>
<div id="LC621" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">                <span class="pl-k">break</span>;</div>
<div id="LC622" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-k">default</span>:</div>
<div id="LC623" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">                <span class="pl-en">printf</span>(<span class="pl-s">"\n📛 Invalid choice! Please try again.\n"</span>);</div>
<div id="LC624" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        }</div>
<div id="LC625" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">clear_input_buffer</span>();</div>
<div id="LC626" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    } <span class="pl-k">while</span> (<span class="pl-s1">instructor_choice</span> <span class="pl-c1">!=</span> <span class="pl-c1">5</span>);</div>
<div id="LC627" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">}</div>
<div id="LC628" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">
</div>
<div id="LC629" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div "><span class="pl-smi">int</span> <span class="pl-en">main</span>() {</div>
<div id="LC630" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"\n\n✨✨✨ Welcome to ExamSys - Online Examination System ✨✨✨\n\n"</span>);</div>
<div id="LC631" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">load_rules</span>();</div>
<div id="LC632" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC633" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-smi">int</span> <span class="pl-s1">choice</span>;</div>
<div id="LC634" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"👤 Are you a:\n1. Student\n2. Instructor\n🎯 Enter your choice (1/2): "</span>);</div>
<div id="LC635" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">scanf</span>(<span class="pl-s">"%d"</span>, <span class="pl-c1">&amp;</span><span class="pl-s1">choice</span>);</div>
<div id="LC636" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC637" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">if</span> (<span class="pl-s1">choice</span> <span class="pl-c1">==</span> <span class="pl-c1">1</span>) {</div>
<div id="LC638" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-smi">char</span> <span class="pl-s1">roll</span>[<span class="pl-c1">50</span>], <span class="pl-s1">password</span>[<span class="pl-c1">50</span>];</div>
<div id="LC639" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"\n🎓 Welcome to ExamSys Online MCQ Exam Platform\n"</span>);</div>
<div id="LC640" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"📝 Enter Roll No: "</span>);</div>
<div id="LC641" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">scanf</span>(<span class="pl-s">"%s"</span>, <span class="pl-s1">roll</span>);</div>
<div id="LC642" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"🔒 Enter Password: "</span>);</div>
<div id="LC643" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">clear_input_buffer</span>();</div>
<div id="LC644" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">getPassword</span>(<span class="pl-s1">password</span>, <span class="pl-k">sizeof</span>(<span class="pl-s1">password</span>));</div>
<div id="LC645" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        </div>
<div id="LC646" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-smi">char</span> <span class="pl-s1">name</span>[<span class="pl-c1">MAX_LINE</span>], <span class="pl-s1">reg_no</span>[<span class="pl-c1">MAX_LINE</span>];</div>
<div id="LC647" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">if</span>(!<span class="pl-en">verify_student</span>(<span class="pl-s1">roll</span>, <span class="pl-s1">password</span>, <span class="pl-s1">name</span>, <span class="pl-s1">reg_no</span>)) {</div>
<div id="LC648" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-en">printf</span>(<span class="pl-s">"📛 Invalid credentials! Exiting.\n"</span>);</div>
<div id="LC649" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-en">exit</span>(<span class="pl-c1">EXIT_FAILURE</span>);</div>
<div id="LC650" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        }</div>
<div id="LC651" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        </div>
<div id="LC652" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"\n🎉 Login successful. Welcome, %s!\n"</span>, <span class="pl-s1">name</span>);</div>
<div id="LC653" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        </div>
<div id="LC654" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"\n====================================================\n"</span>);</div>
<div id="LC655" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"| 📜          RULES FOR THE EXAM                 |\n"</span>);</div>
<div id="LC656" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"====================================================\n"</span>);</div>
<div id="LC657" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"| 🔹 Number of questions: 5                        |\n"</span>);</div>
<div id="LC658" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"| ⏱️  Time per question: %-3d seconds                  |\n"</span>, <span class="pl-s1">answerTimeout</span>);</div>
<div id="LC659" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"| ➕ Marks for correct answer: %-4.2f                   |\n"</span>, <span class="pl-s1">marksForCorrectAnswer</span>);</div>
<div id="LC660" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"| ➖ Marks deducted for wrong answer: %-4.2f            |\n"</span>, <span class="pl-s1">marksDeductedForWrongAnswer</span>);</div></div>
<div class="react-no-virtualization-wrapper"><div id="LC661" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"====================================================\n"</span>);</div>
<div id="LC662" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        </div>
<div id="LC663" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-smi">char</span> <span class="pl-s1">ready</span>;</div>
<div id="LC664" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"\n🎯 Press 'R' when you are ready to start the exam: "</span>);</div>
<div id="LC665" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">scanf</span>(<span class="pl-s">" %c"</span>, <span class="pl-c1">&amp;</span><span class="pl-s1">ready</span>);</div>
<div id="LC666" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">if</span> (<span class="pl-en">toupper</span>(<span class="pl-s1">ready</span>) <span class="pl-c1">!=</span> <span class="pl-c1">'R'</span>) {</div>
<div id="LC667" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-en">printf</span>(<span class="pl-s">"\n🚪 Exiting exam.\n"</span>);</div>
<div id="LC668" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-en">exit</span>(<span class="pl-c1">EXIT_SUCCESS</span>);</div>
<div id="LC669" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        }</div>
<div id="LC670" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        </div>
<div id="LC671" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">load_questions</span>();</div>
<div id="LC672" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">if</span>(<span class="pl-s1">totalQuestions</span> <span class="pl-c1">==</span> <span class="pl-c1">0</span>) {</div>
<div id="LC673" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-en">printf</span>(<span class="pl-s">"\n📛 No questions loaded. Exiting.\n"</span>);</div>
<div id="LC674" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-en">exit</span>(<span class="pl-c1">EXIT_FAILURE</span>);</div>
<div id="LC675" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        }</div>
<div id="LC676" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        </div>
<div id="LC677" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-smi">pthread_t</span> <span class="pl-s1">overallTimerThread</span>;</div>
<div id="LC678" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">if</span>(<span class="pl-en">pthread_create</span>(<span class="pl-c1">&amp;</span><span class="pl-s1">overallTimerThread</span>, <span class="pl-c1">NULL</span>, <span class="pl-s1">overall_timer</span>, <span class="pl-c1">NULL</span>) <span class="pl-c1">!=</span> <span class="pl-c1">0</span>) {</div>
<div id="LC679" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-en">perror</span>(<span class="pl-s">"📛 Error creating overall timer thread"</span>);</div>
<div id="LC680" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-en">exit</span>(<span class="pl-c1">EXIT_FAILURE</span>);</div>
<div id="LC681" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        }</div>
<div id="LC682" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        </div>
<div id="LC683" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-smi">pthread_t</span> <span class="pl-s1">exam_thread</span>;</div>
<div id="LC684" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">if</span>(<span class="pl-en">pthread_create</span>(<span class="pl-c1">&amp;</span><span class="pl-s1">exam_thread</span>, <span class="pl-c1">NULL</span>, <span class="pl-s1">exam_session</span>, (<span class="pl-smi">void</span> <span class="pl-c1">*</span>)<span class="pl-s1">roll</span>) <span class="pl-c1">!=</span> <span class="pl-c1">0</span>) {</div>
<div id="LC685" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-en">perror</span>(<span class="pl-s">"📛 Error creating exam thread"</span>);</div>
<div id="LC686" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-en">exit</span>(<span class="pl-c1">EXIT_FAILURE</span>);</div>
<div id="LC687" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        }</div>
<div id="LC688" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        </div>
<div id="LC689" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">pthread_join</span>(<span class="pl-s1">exam_thread</span>, <span class="pl-c1">NULL</span>);</div>
<div id="LC690" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">pthread_join</span>(<span class="pl-s1">overallTimerThread</span>, <span class="pl-c1">NULL</span>);</div>
<div id="LC691" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    } <span class="pl-k">else</span> <span class="pl-k">if</span> (<span class="pl-s1">choice</span> <span class="pl-c1">==</span> <span class="pl-c1">2</span>) {</div>
<div id="LC692" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-smi">char</span> <span class="pl-s1">instructor_id</span>[<span class="pl-c1">50</span>], <span class="pl-s1">password</span>[<span class="pl-c1">50</span>], <span class="pl-s1">name</span>[<span class="pl-c1">MAX_LINE</span>];</div>
<div id="LC693" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"\n👨‍🏫 Enter Instructor ID: "</span>);</div>
<div id="LC694" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">scanf</span>(<span class="pl-s">"%s"</span>, <span class="pl-s1">instructor_id</span>);</div>
<div id="LC695" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"🔒 Enter Password: "</span>);</div>
<div id="LC696" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">clear_input_buffer</span>();</div>
<div id="LC697" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">getPassword</span>(<span class="pl-s1">password</span>, <span class="pl-k">sizeof</span>(<span class="pl-s1">password</span>));</div>
<div id="LC698" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        </div>
<div id="LC699" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-k">if</span>(!<span class="pl-en">verify_instructor</span>(<span class="pl-s1">instructor_id</span>, <span class="pl-s1">password</span>, <span class="pl-s1">name</span>)) {</div>
<div id="LC700" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-en">printf</span>(<span class="pl-s">"\n📛 Invalid credentials! Exiting.\n"</span>);</div>
<div id="LC701" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">            <span class="pl-en">exit</span>(<span class="pl-c1">EXIT_FAILURE</span>);</div>
<div id="LC702" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        }</div>
<div id="LC703" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        </div>
<div id="LC704" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"\n🎉 Login successful. Welcome, %s!\n"</span>, <span class="pl-s1">name</span>);</div>
<div id="LC705" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">instructor_menu</span>();</div>
<div id="LC706" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    } <span class="pl-k">else</span> {</div>
<div id="LC707" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">printf</span>(<span class="pl-s">"\n📛 Invalid choice! Exiting.\n"</span>);</div>
<div id="LC708" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">        <span class="pl-en">exit</span>(<span class="pl-c1">EXIT_FAILURE</span>);</div>
<div id="LC709" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    }</div>
<div id="LC710" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    </div>
<div id="LC711" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-en">printf</span>(<span class="pl-s">"\n✨ Thank you for using ExamSys! Goodbye! ✨\n"</span>);</div>
<div id="LC712" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">    <span class="pl-k">return</span> <span class="pl-c1">0</span>;</div>
<div id="LC713" class="react-code-text react-code-line-contents-no-virtualization react-file-line html-div ">}</div></div></div></div><button hidden="" data-hotkey="Control+a"></button></div></div></div></div><div id="copilot-button-container"></div></div><div id="highlighted-line-menu-container"></div></div></div></section></div></div></div> <!-- --> <!-- --> </div></div></div><div></div></div></div></div></div><div id="find-result-marks-container" class="Box-sc-g0xbh4-0 cCoXib"></div><button hidden="" data-testid="" data-hotkey-scope="read-only-cursor-text-area" data-hotkey="Control+F6,Control+Shift+F6"></button><button hidden="" data-hotkey="Control+F6,Control+Shift+F6"></button></div> <!-- --> <!-- --> <script type="application/json" id="__PRIMER_DATA_:R0:__">{"resolvedServerColorMode":"night"}</script></div>
</react-app>




  </div>

</turbo-frame>

    </main>
  </div>

  </div>

          <footer class="footer pt-8 pb-6 f6 color-fg-muted p-responsive" role="contentinfo" hidden="">
  <h2 class="sr-only">Footer</h2>

  


  <div class="d-flex flex-justify-center flex-items-center flex-column-reverse flex-lg-row flex-wrap flex-lg-nowrap">
    <div class="d-flex flex-items-center flex-shrink-0 mx-2">
      <a aria-label="Homepage" title="GitHub" class="footer-octicon mr-2" href="https://github.com/">
        <svg aria-hidden="true" height="24" viewBox="0 0 24 24" version="1.1" width="24" data-view-component="true" class="octicon octicon-mark-github">
    <path d="M12 1C5.9225 1 1 5.9225 1 12C1 16.8675 4.14875 20.9787 8.52125 22.4362C9.07125 22.5325 9.2775 22.2025 9.2775 21.9137C9.2775 21.6525 9.26375 20.7862 9.26375 19.865C6.5 20.3737 5.785 19.1912 5.565 18.5725C5.44125 18.2562 4.905 17.28 4.4375 17.0187C4.0525 16.8125 3.5025 16.3037 4.42375 16.29C5.29 16.2762 5.90875 17.0875 6.115 17.4175C7.105 19.0812 8.68625 18.6137 9.31875 18.325C9.415 17.61 9.70375 17.1287 10.02 16.8537C7.5725 16.5787 5.015 15.63 5.015 11.4225C5.015 10.2262 5.44125 9.23625 6.1425 8.46625C6.0325 8.19125 5.6475 7.06375 6.2525 5.55125C6.2525 5.55125 7.17375 5.2625 9.2775 6.67875C10.1575 6.43125 11.0925 6.3075 12.0275 6.3075C12.9625 6.3075 13.8975 6.43125 14.7775 6.67875C16.8813 5.24875 17.8025 5.55125 17.8025 5.55125C18.4075 7.06375 18.0225 8.19125 17.9125 8.46625C18.6138 9.23625 19.04 10.2125 19.04 11.4225C19.04 15.6437 16.4688 16.5787 14.0213 16.8537C14.42 17.1975 14.7638 17.8575 14.7638 18.8887C14.7638 20.36 14.75 21.5425 14.75 21.9137C14.75 22.2025 14.9563 22.5462 15.5063 22.4362C19.8513 20.9787 23 16.8537 23 12C23 5.9225 18.0775 1 12 1Z"></path>
</svg>
</a>
      <span>
        © 2025 GitHub,&nbsp;Inc.
      </span>
    </div>

    <nav aria-label="Footer">
      <h3 class="sr-only" id="sr-footer-heading">Footer navigation</h3>

      <ul class="list-style-none d-flex flex-justify-center flex-wrap mb-2 mb-lg-0" aria-labelledby="sr-footer-heading">

          <li class="mx-2">
            <a data-analytics-event="{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to Terms&quot;,&quot;label&quot;:&quot;text:terms&quot;}" href="https://docs.github.com/site-policy/github-terms/github-terms-of-service" data-view-component="true" class="Link--secondary Link">Terms</a>
          </li>

          <li class="mx-2">
            <a data-analytics-event="{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to privacy&quot;,&quot;label&quot;:&quot;text:privacy&quot;}" href="https://docs.github.com/site-policy/privacy-policies/github-privacy-statement" data-view-component="true" class="Link--secondary Link">Privacy</a>
          </li>

          <li class="mx-2">
            <a data-analytics-event="{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to security&quot;,&quot;label&quot;:&quot;text:security&quot;}" href="https://github.com/security" data-view-component="true" class="Link--secondary Link">Security</a>
          </li>

          <li class="mx-2">
            <a data-analytics-event="{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to status&quot;,&quot;label&quot;:&quot;text:status&quot;}" href="https://www.githubstatus.com/" data-view-component="true" class="Link--secondary Link">Status</a>
          </li>

          <li class="mx-2">
            <a data-analytics-event="{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to docs&quot;,&quot;label&quot;:&quot;text:docs&quot;}" href="https://docs.github.com/" data-view-component="true" class="Link--secondary Link">Docs</a>
          </li>

          <li class="mx-2">
            <a data-analytics-event="{&quot;category&quot;:&quot;Footer&quot;,&quot;action&quot;:&quot;go to contact&quot;,&quot;label&quot;:&quot;text:contact&quot;}" href="https://support.github.com/?tags=dotcom-footer" data-view-component="true" class="Link--secondary Link">Contact</a>
          </li>

          <li class="mx-2">
  <cookie-consent-link data-catalyst="">
    <button type="button" class="Link--secondary underline-on-hover border-0 p-0 color-bg-transparent" data-action="click:cookie-consent-link#showConsentManagement" data-analytics-event="{&quot;location&quot;:&quot;footer&quot;,&quot;action&quot;:&quot;cookies&quot;,&quot;context&quot;:&quot;subfooter&quot;,&quot;tag&quot;:&quot;link&quot;,&quot;label&quot;:&quot;cookies_link_subfooter_footer&quot;}">
      Manage cookies
    </button>
  </cookie-consent-link>
</li>

<li class="mx-2">
  <cookie-consent-link data-catalyst="">
    <button type="button" class="Link--secondary underline-on-hover border-0 p-0 color-bg-transparent" data-action="click:cookie-consent-link#showConsentManagement" data-analytics-event="{&quot;location&quot;:&quot;footer&quot;,&quot;action&quot;:&quot;dont_share_info&quot;,&quot;context&quot;:&quot;subfooter&quot;,&quot;tag&quot;:&quot;link&quot;,&quot;label&quot;:&quot;dont_share_info_link_subfooter_footer&quot;}">
      Do not share my personal information
    </button>
  </cookie-consent-link>
</li>

      </ul>
    </nav>
  </div>
</footer>



    <ghcc-consent id="ghcc" class="position-fixed bottom-0 left-0" style="z-index: 999999" data-initial-cookie-consent-allowed="" data-cookie-consent-required="false" data-catalyst=""></ghcc-consent>



  <div id="ajax-error-message" class="ajax-error-message flash flash-error" hidden="">
    <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-alert">
    <path d="M6.457 1.047c.659-1.234 2.427-1.234 3.086 0l6.082 11.378A1.75 1.75 0 0 1 14.082 15H1.918a1.75 1.75 0 0 1-1.543-2.575Zm1.763.707a.25.25 0 0 0-.44 0L1.698 13.132a.25.25 0 0 0 .22.368h12.164a.25.25 0 0 0 .22-.368Zm.53 3.996v2.5a.75.75 0 0 1-1.5 0v-2.5a.75.75 0 0 1 1.5 0ZM9 11a1 1 0 1 1-2 0 1 1 0 0 1 2 0Z"></path>
</svg>
    <button type="button" class="flash-close js-ajax-error-dismiss" aria-label="Dismiss error">
      <svg aria-hidden="true" height="16" viewBox="0 0 16 16" version="1.1" width="16" data-view-component="true" class="octicon octicon-x">
    <path d="M3.72 3.72a.75.75 0 0 1 1.06 0L8 6.94l3.22-3.22a.749.749 0 0 1 1.275.326.749.749 0 0 1-.215.734L9.06 8l3.22 3.22a.749.749 0 0 1-.326 1.275.749.749 0 0 1-.734-.215L8 9.06l-3.22 3.22a.751.751 0 0 1-1.042-.018.751.751 0 0 1-.018-1.042L6.94 8 3.72 4.78a.75.75 0 0 1 0-1.06Z"></path>
</svg>
    </button>
    You can’t perform that action at this time.
  </div>

    <template id="site-details-dialog"></template>

    <div class="Popover js-hovercard-content position-absolute" style="display: none; outline: none;">
  <div class="Popover-message Popover-message--bottom-left Popover-message--large Box color-shadow-large" style="width:360px;"></div>
</div>

    <template id="snippet-clipboard-copy-button"></template>
<template id="snippet-clipboard-copy-button-unpositioned"></template>


    <style>
      .user-mention[href$="/sahelidgp"] {
        color: var(--color-user-mention-fg);
        background-color: var(--bgColor-attention-muted, var(--color-attention-subtle));
        border-radius: 2px;
        margin-left: -2px;
        margin-right: -2px;
      }
      .user-mention[href$="/sahelidgp"]:before,
      .user-mention[href$="/sahelidgp"]:after {
        content: '';
        display: inline-block;
        width: 2px;
      }
    </style>


    </div>

    <div id="js-global-screen-reader-notice" class="sr-only mt-n1" aria-live="polite" aria-atomic="true">ExamSystem/project.c at main · AnimeshSatyapragyanPatra/ExamSystem&nbsp;</div>
    <div id="js-global-screen-reader-notice-assertive" class="sr-only mt-n1" aria-live="assertive" aria-atomic="true"></div>
  


<div class="sr-only mt-n1" id="screenReaderAnnouncementDiv" role="alert" data-testid="screenReaderAnnouncement" aria-live="assertive">&nbsp;</div><span id="PING_IFRAME_FORM_DETECTION" style="display: none;"></span><span id="PING_CONTENT_DLS_POPUP" style="display: none;"></span><div style="background-color: transparent; border: none; bottom: 15px; display: block; margin: 0px; opacity: 1; padding: 0px; position: fixed; right: 15px; z-index: 2147483647;"><template shadowrootmode="closed"><style>/*!
 * 
 *     MCAFEE RESTRICTED CONFIDENTIAL
 *     Copyright (c) 2025 McAfee, LLC
 *
 *     The source code contained or described herein and all documents related
 *     to the source code ("Material") are owned by McAfee or its
 *     suppliers or licensors. Title to the Material remains with McAfee
 *     or its suppliers and licensors. The Material contains trade
 *     secrets and proprietary and confidential information of McAfee or its
 *     suppliers and licensors. The Material is protected by worldwide copyright
 *     and trade secret laws and treaty provisions. No part of the Material may
 *     be used, copied, reproduced, modified, published, uploaded, posted,
 *     transmitted, distributed, or disclosed in any way without McAfee's prior
 *     express written permission.
 *
 *     No license under any patent, copyright, trade secret or other intellectual
 *     property right is granted to or conferred upon you by disclosure or
 *     delivery of the Materials, either expressly, by implication, inducement,
 *     estoppel or otherwise. Any license under such intellectual property rights
 *     must be expressed and approved by McAfee in writing.
 *
 */
@font-face{font-family:"McAfeePoppins";src:url("../../../fonts/Poppins-Thin.ttf") format("truetype");font-weight:100;font-style:normal}@font-face{font-family:"McAfeePoppins";src:url("../../../fonts/Poppins-ThinItalic.ttf") format("truetype");font-weight:100;font-style:italic}@font-face{font-family:"McAfeePoppins";src:url("../../../fonts/Poppins-ExtraLight.ttf") format("truetype");font-weight:200;font-style:normal}@font-face{font-family:"McAfeePoppins";src:url("../../../fonts/Poppins-ExtraLightItalic.ttf") format("truetype");font-weight:200;font-style:italic}@font-face{font-family:"McAfeePoppins";src:url("../../../fonts/Poppins-Light.ttf") format("truetype");font-weight:300;font-style:normal}@font-face{font-family:"McAfeePoppins";src:url("../../../fonts/Poppins-LightItalic.ttf") format("truetype");font-weight:300;font-style:italic}@font-face{font-family:"McAfeePoppins";src:url("../../../fonts/Poppins-Regular.ttf") format("truetype");font-weight:400;font-style:normal}@font-face{font-family:"McAfeePoppins";src:url("../../../fonts/Poppins-Italic.ttf") format("truetype");font-weight:400;font-style:italic}@font-face{font-family:"McAfeePoppins";src:url("../../../fonts/Poppins-Medium.ttf") format("truetype");font-weight:500;font-style:normal}@font-face{font-family:"McAfeePoppins";src:url("../../../fonts/Poppins-MediumItalic.ttf") format("truetype");font-weight:500;font-style:italic}@font-face{font-family:"McAfeePoppins";src:url("../../../fonts/Poppins-SemiBold.ttf") format("truetype");font-weight:600;font-style:normal}@font-face{font-family:"McAfeePoppins";src:url("../../../fonts/Poppins-SemiBoldItalic.ttf") format("truetype");font-weight:600;font-style:italic}@font-face{font-family:"McAfeePoppins";src:url("../../../fonts/Poppins-Bold.ttf") format("truetype");font-weight:700;font-style:normal}@font-face{font-family:"McAfeePoppins";src:url("../../../fonts/Poppins-BoldItalic.ttf") format("truetype");font-weight:700;font-style:italic}@font-face{font-family:"McAfeePoppins";src:url("../../../fonts/Poppins-ExtraBold.ttf") format("truetype");font-weight:800;font-style:normal}@font-face{font-family:"McAfeePoppins";src:url("../../../fonts/Poppins-ExtraBoldItalic.ttf") format("truetype");font-weight:800;font-style:italic}@font-face{font-family:"McAfeePoppins";src:url("../../../fonts/Poppins-Black.ttf") format("truetype");font-weight:900;font-style:normal}@font-face{font-family:"McAfeePoppins";src:url("../../../fonts/Poppins-BlackItalic.ttf") format("truetype");font-weight:900;font-style:italic}*{border:0;box-sizing:border-box;font:inherit;font-family:"McAfeePoppins",Helvetica,Arial;font-size:100%;margin:0;padding:0;vertical-align:baseline;outline:none}article,aside,details,figcaption,figure,footer,header,hgroup,menu,nav,section{display:block}html,body{background-color:#f5f6fa;font-family:"McAfeePoppins",Helvetica,Arial;line-height:1;height:100%;width:100%}ol,ul{list-style:none}blockquote,q{quotes:none}blockquote:after,blockquote:before,q:after,q:before{content:"";content:none}table{border-collapse:collapse;border-spacing:0}b{font-weight:bold}img{display:block}.dls__container{align-items:center;display:flex;margin:0 auto;margin-top:50px;position:relative}.dls__popup__expanded{align-items:center;overflow:hidden;border-radius:100px;cursor:pointer;display:flex;left:0;padding:15px;position:absolute;height:95px;width:383px;background-color:#fff;transition:all .3s ease-in-out}.dls__popup__expanded .dls__icon{height:65px;width:73px}.content{margin-left:12px}.content .content__images{display:flex;align-items:center;width:250px}.content .content__images .seperator__line{margin-left:5px;margin-right:10px}.content .content__images #dls_close_icon{cursor:pointer;margin-left:auto;margin-right:0px}.content p{font-family:"McAfeePoppins",Helvetica,Arial;font-weight:"400";font-size:14px;line-height:20px;margin-top:8px;color:#4258ff;width:250px;cursor:pointer}.shield{overflow:hidden;box-shadow:0px 2px 4px 0px rgba(33,41,52,.12),0px -1px 2px 0px rgba(0,0,0,.08);align-items:center;border-radius:100px;bottom:0;display:flex;height:95px;justify-content:center;position:absolute;right:0;width:383px;transition:all .3s ease-in-out}.shield__circle{display:flex;justify-content:center;align-items:center;width:55px;height:55px;background-color:#c01818;transition:all .6s ease-in-out .2s;z-index:1;opacity:0}

/*# sourceMappingURL=../sourceMap/chrome/css/download_scan_popup.css.map*/</style><div class="dls__container">
  <div class="shield" style="background: transparent; opacity: 0.1; display: none;">
    <div class="shield__circle" style="opacity: 1;">
      <img src="chrome-extension://fheoggkfdfchfphceeifdbepaooicaho/images/download_scan/mcafee_logo_white.svg?secret=o4gi15" x-mcsrc="" id="dls_ballon_icon" x-mcsrcparsed="true">
    </div>
    <div class="dls__popup__expanded" style="opacity: 0;">
      <img src="chrome-extension://fheoggkfdfchfphceeifdbepaooicaho/images/download_scan/download_scan_icon.svg?secret=o4gi15" x-mcsrc="" class="dls__icon" x-mcsrcparsed="true">
      <div class="content">
        <div class="content__images">
          <img src="chrome-extension://fheoggkfdfchfphceeifdbepaooicaho/images/download_scan/mcafee_logo_red.svg?secret=o4gi15" x-mcsrc="" id="dls_mcafee_logo" x-mcsrcparsed="true">
          <img src="chrome-extension://fheoggkfdfchfphceeifdbepaooicaho/images/download_scan/seperator_line.svg?secret=o4gi15" x-mcsrc="" class="seperator__line" x-mcsrcparsed="true">
          <img src="chrome-extension://fheoggkfdfchfphceeifdbepaooicaho/images/download_scan/webadvisor.svg?secret=o4gi15" x-mcsrc="" x-mcsrcparsed="true">
          <img src="chrome-extension://fheoggkfdfchfphceeifdbepaooicaho/images/download_scan/close-outline.svg?secret=o4gi15" x-mcsrc="" id="dls_close_icon" x-mcsrcparsed="true">
        </div>
        <p id="download_scan_popup_expanded_descriptions">Your download's being scanned. We'll let you know if there's an issue.</p>
      </div>
    </div>
  </div>
</div><style>/*!
 * 
 *     MCAFEE RESTRICTED CONFIDENTIAL
 *     Copyright (c) 2025 McAfee, LLC
 *
 *     The source code contained or described herein and all documents related
 *     to the source code ("Material") are owned by McAfee or its
 *     suppliers or licensors. Title to the Material remains with McAfee
 *     or its suppliers and licensors. The Material contains trade
 *     secrets and proprietary and confidential information of McAfee or its
 *     suppliers and licensors. The Material is protected by worldwide copyright
 *     and trade secret laws and treaty provisions. No part of the Material may
 *     be used, copied, reproduced, modified, published, uploaded, posted,
 *     transmitted, distributed, or disclosed in any way without McAfee's prior
 *     express written permission.
 *
 *     No license under any patent, copyright, trade secret or other intellectual
 *     property right is granted to or conferred upon you by disclosure or
 *     delivery of the Materials, either expressly, by implication, inducement,
 *     estoppel or otherwise. Any license under such intellectual property rights
 *     must be expressed and approved by McAfee in writing.
 *
 */
.mc-interactive-balloon{position:absolute;right:-50px;bottom:8px;box-shadow:rgba(0,0,0,.12) 0px 0px 10px;height:40px;width:40px;background:#1671ee;border-radius:20px;display:flex;justify-content:center;align-items:center}

/*# sourceMappingURL=../sourceMap/chrome/css/interactive_balloon.css.map*/</style></template></div></body></html>