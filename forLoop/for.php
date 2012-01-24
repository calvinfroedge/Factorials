<?php
function factorial($number)
{
	$product = 1;

	for($i = 1; $i < ($number + 1); $i++) 
	{
		$product = $product * $i;
	}

	return $product;
}

$number = factorial($argv[1]);
echo $number . "\n";