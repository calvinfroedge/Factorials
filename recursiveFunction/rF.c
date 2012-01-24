#include <stdio.h>

int factorial(int number)
{
	return (number <= 1) ? number : number * factorial(number - 1);
}

int main(int argc, char *argv[])
{
	printf("%d", factorial( atoi(argv[1]) ));
	printf("\n");
	return 0;
}