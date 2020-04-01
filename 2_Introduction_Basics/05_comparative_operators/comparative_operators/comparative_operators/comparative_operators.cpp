// Anthony Glossner
// 03-31-2020
// Comparative Operators : Compares integers using "if" statements + relational operators + equality operators

// allows the program to output data to the screen using the API functions
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

// begin main program execution
int main()
{
	// variable declarations
	int number1;
	int number2;

	// prompt user for integers to compare
	std::cout << "Enter two integers to compare : ";
	std::cin >> number1 >> number2;

	// declaration of comparative statements
	if (number1 == number2)
		cout << number1 << "==" << number2 << endl;

	if (number1 != number2)
		cout << number1 << "!=" << number2 << endl;

	if (number1 < number2)
		cout << number1 << "<" << number2 << endl;

	if (number1 > number2)
		cout << number1 << ">" << number2 << endl;
	
	if (number1 <= number2)
		cout << number1 << "<=" << number2 << endl;

	if (number1 >= number2)
		cout << number1 << ">=" << number2 << endl;

	// indicates that the program ended successfully
	return 0;
} // end of main function