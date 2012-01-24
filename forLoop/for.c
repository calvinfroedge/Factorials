#include <stdio.h>

int factorial(int number)
{
	int product, i;

	for(i = 1, product = 1; i < (number + 1); i++) 
		
		product = product * i;

	return product;
}

int main(int argc, int *argv[])
{
	printf("%d", factorial( atoi(argv[1]) ));
	return 0;
}