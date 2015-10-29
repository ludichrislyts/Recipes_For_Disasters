if(!class_exists('DrupalFakeCache')){
	$conf['cache_backends'][] = 'includes/cache-install.inc';
}
$conf['cache_default_class'] = 'DrupalFakeCache';
$conf['cache_class_cashe_from'] = 'DrupalDatabaseCache';

// this goes at the bottom of settings.php
<!--if (file_exists('sites/default/settings.local.php')) {
  require_once 'sites/default/settings.local.php';
}-->