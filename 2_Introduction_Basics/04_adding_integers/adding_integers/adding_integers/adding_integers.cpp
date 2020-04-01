// Anthony Glossner
// 03-31-2020
// Adding Integers : Addition program that displays the sum of two integers

// allows the program to output data to the screen using the API functions
#include <iostream>

// begin main program execution
int main()
{
	// variable declarations
	int number1;
	int number2;
	int sum;

	// prompt user for 1st integer and store
	std::cout << "Enter first integer : ";
	std::cin >> number1;

	// prompt user for 2nd integer and store
	std::cout << "Enter second integer : ";
	std::cin >> number2;

	// add the two integers
	sum = number1 + number2;

	// print result
	std::cout << "The sum is " << sum << std::endl;

	// indicates that the program ended successfully
	return 0;
} // end of main function