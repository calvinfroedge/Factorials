import sys

def factorial(number):
	
	product = 1
	temp = 1

	while(temp < (number + 1)):

		product = product * temp
		temp = temp + 1

	return product

number = int(sys.argv[1])
print(factorial(number))