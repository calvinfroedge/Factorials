<?php

function factorial($number)
{
	$product = 1;
	$temp = 1;

	while($temp < ($number + 1))
	{
		$product = $product * $temp;
		++$temp;
	}

	return $product;
}

$number = $argv[1];

echo factorial($number) . "\n";