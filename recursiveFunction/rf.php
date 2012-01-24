<?php
function factorial($number)
{
	return ($number <= 1) ? $number : $number * factorial($number - 1);
}

$number = $argv[1];
echo factorial($number) . " \n";