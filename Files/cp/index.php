<?php
// Helpers nand includes
include_once('/var/www/html/Lux/Core/Helper.php');

$FILES = new Files();
$REQUEST = new Request();
if($REQUEST->avail("admin") && $REQUEST->get("admin"))
	$RULES = new Rules(5, "files");
	$FILES->cp($REQUEST, '/var/www/html'.$REQUEST->get("admin_base", "/"));
}else{
	$RULES = new Rules(5, "files");
	$FILES->cp($REQUEST, '/var/www/html/uploads');
}
?>

