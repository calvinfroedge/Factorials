import sys

def factorial(number):

	if number <= 1:
		
		return number

	else:
		
		return number * factorial(number - 1)

number = int(sys.argv[1])
print(factorial(number))