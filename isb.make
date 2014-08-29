api = 2
core = 7.x
projects[drupal][type] = core
projects[drupal][version] = 7.26

; CORE PATCHES

; Fix notices on PHP 5.4 and editing nodes with multiple terms.
projects[drupal][patch][1525176] = https://drupal.org/files/issues/drupal7.entity-system.1525176-143.patch

; Raise minimum PHP version to work around core requirements check bug.
; Keep eyeballs posted on http://drupal.org/node/1724130.
projects[drupal][patch][1724012] = http://drupal.org/files/drupal-increase-php-version-1724012_0.patch

projects[isb][type] = "profile"
projects[isb][download][type] = "git"
projects[isb][download][url] = "https://github.com/datagovuk/ISB.git"
projects[isb][download][branch] = "master"

; Download the Spark install profile and recursively build all its dependencies:
projects[spark][type] = profile
projects[spark][download][type] = git
projects[spark][download][tag] = 7.x-1.0-beta1
