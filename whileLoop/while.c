#include <stdio.h>

int factorial(int number)
{
	int product = 1;
	int temp = 1;

	while(temp < (number + 1))
	{
		product = product * temp;
		++temp;
	}

	return product;
}

int main(int argc, char* argv[])
{
	printf("%d", factorial( atoi(argv[1]) ));
	printf("\n");
	return 0;
}