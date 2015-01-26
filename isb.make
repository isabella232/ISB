api = 2
core = 7.x
projects[drupal][type] = core
projects[drupal][version] = 7.34

; CORE PATCHES

; Raise minimum PHP version to work around core requirements check bug.
; Keep eyeballs posted on http://drupal.org/node/1724130.
projects[drupal][patch][1724012] = "http://drupal.org/files/drupal-increase-php-version-1724012_0.patch"

; Allow installation profile inheritance
projects[drupal][patch][] = "http://drupal.org/files/1356276-make-D7-21.patch"

; Download the ISB install profile and recursively build all its dependencies
projects[isb][type] = "profile"
projects[isb][download][type] = "git"
projects[isb][download][url] = "https://github.com/datagovuk/ISB.git"
projects[isb][download][branch] = "master"

; Download the Spark install profile and recursively build all its dependencies
projects[spark][type] = "profile"
projects[spark][download][type] = "git"
projects[spark][download][tag] = "7.x-1.0-beta1"
projects[spark][patch][] = "http://www.drupal.org/files/issues/spark_security_updates.patch"


; Download Shiny administration theme
projects[shiny][type] = "theme"
projects[shiny][version] = "1.6"
projects[shiny][subdir] = "contrib"


; Download additional contributed modules not included in Spark distro
projects[features][version] = "2.0"
projects[features][subdir] = "contrib"
projects[features][patch][] = "http://raw.github.com/datagovuk/dgu_d7/master/patches/features_dont_convert_strings_to_integers.patch"

projects[strongarm][version] = "2.0"
projects[strongarm][subdir] = "contrib"

projects[token][version] = "1.5"
projects[token][subdir] = "contrib"

projects[diff][version] = "3.2"
projects[diff][subdir] = "contrib"

projects[entityreference][version] = "1.1"
projects[entityreference][subdir] = "contrib"

projects[pathauto][version] = "1.2"
projects[pathauto][subdir] = "contrib"
# Prevent losing manual aliases with node_save() calls https://drupal.org/node/936222
projects[pathauto][patch][] = "http://drupal.org/files/pathauto-persist-936222-130-pathauto-state.patch"

projects[rules][version] = "2.7"
projects[rules][subdir] = "contrib"

projects[rules_url_argument][version] = "1.2"
projects[rules_url_argument][subdir] = "contrib"

projects[field_permissions][version] = "1.0-beta2"
projects[field_permissions][subdir] = "contrib"

projects[field_group][version] = "1.1"
projects[field_group][subdir] = "contrib"

projects[field_collection][type] = "module"
projects[field_collection][download][type] = "git"
projects[field_collection][download][url] = "http://git.drupal.org/project/field_collection.git"
projects[field_collection][download][revision] = "6aecbd40bbd308157de528ae16f3c523c4f7e1cb"
projects[field_collection][subdir] = "contrib"
projects[field_collection][patch][] = "http://drupal.org/files/issues/field_collection-fields-not-saving-1549364-52.patch"

projects[field_collection_table][version] = "1.0-beta1"
projects[field_collection_table][subdir] = "contrib"
projects[field_collection_table][patch][] = "http://www.drupal.org/files/field_collection_table-1815496-2-fix_malformed_table.patch"
projects[field_collection_table][patch][] = "http://www.drupal.org/files/issues/field_collection_table-recurse_form-1438266-24.patch"
projects[field_collection_table][patch][] = "http://www.drupal.org/files/issues/field_collection_table_doesnt_format_as_table_with_single_row-1276446-5.patch"

projects[lexicon][version] = "1.10"
projects[lexicon][subdir] = "contrib"

projects[conditional_fields][version] = "3.0-alpha1"
projects[conditional_fields][subdir] = "contrib"

projects[stringoverrides][version] = "1.8"
projects[stringoverrides][subdir] = "contrib"

projects[fieldable_panels_panes][version] = "1.5"
projects[fieldable_panels_panes][subdir] = "contrib"

projects[context][version] = "3.6"
projects[context][subdir] = "contrib"

projects[redirect][version] = "1.0-rc1"
projects[redirect][subdir] = "contrib"
projects[redirect][patch][] = "http://raw.github.com/datagovuk/dgu_d7/master/patches/redirect_module_remove_oops_message.patch"

projects[advuser][version] = "3.0-beta1"
projects[advuser][subdir] = "contrib"

projects[google_analytics][version] = "2.0"
projects[google_analytics][subdir] = "contrib"

projects[flag][version] = "3.5"
projects[flag][subdir] = "contrib"

projects[emptyparagraphkiller][version] = "1.0-beta2"
projects[emptyparagraphkiller][subdir] = "contrib"

projects[smart_trim][version] = "1.4"
projects[smart_trim][subdir] = "contrib"
projects[mollom][version] = "2.10"
projects[mollom][subdir] = "contrib"

projects[devel][version] = "1.5"
projects[devel][subdir] = "contrib"

projects[path_breadcrumbs][version] = "3.0"
projects[path_breadcrumbs][subdir] = "contrib"

projects[print][version] = "2.0"
projects[print][subdir] = "contrib"

projects[date][version] = "2.8"
projects[date][subdir] = "contrib"

projects[imce][version] = "1.9"
projects[imce][subdir] = "contrib"

projects[facetapi][version] = "1.5"
projects[facetapi][subdir] = "contrib"

projects[search_api][version] = "1.13"
projects[search_api][subdir] = "contrib"

projects[search_api_db][version] = "1.4"
projects[search_api_db][subdir] = "contrib"

projects[faq][version] = "1.0-rc2"
projects[faq][subdir] = "contrib"

projects[webform][version] = "4.0"
projects[webform][subdir] = "contrib"

projects[captcha][version] = "1.1"
projects[captcha][subdir] = "contrib"

projects[recaptcha][version] = "1.11"
projects[recaptcha][subdir] = "contrib"

projects[imagefield_crop][version] = "1.1"
projects[imagefield_crop][subdir] = "contrib"
