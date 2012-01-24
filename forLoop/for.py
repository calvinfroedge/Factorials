def factorial(number):

	product = 1
	
	for i in range(number):
		
		product = product * (i + 1)

		#This will also work:	
		#for i in range(number + 1)
		#		if i > 0: product = product * (i)

	return product

number = input("Enter an integer, fool:")
print(factorial(number))