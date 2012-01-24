def factorial(number):
	
	product = 1
	temp = 1

	while(temp < (number + 1)):

		product = product * temp
		temp = temp + 1

	return product

number = input("Enter a number:")

print(factorial(number))