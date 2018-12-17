<?php
	$image = imagecreatetruecolor(1000, 600);
	$bg = imagecolorallocate($image, 2, 102, 1);
	imagefill($image, 0, 0, $bg);
	$col_ellipse = imagecolorallocate($image, 255, 0, 0);
	imagefilledellipse($image, 450, 300, 400, 400, $col_ellipse);
	header("Content-type: image/png");
	imagepng($image);
?>