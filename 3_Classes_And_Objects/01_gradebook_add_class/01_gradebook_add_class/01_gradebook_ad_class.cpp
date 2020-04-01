// Anthony Glossner
// 04-01-2020
// Gradebook : Creates a gradebook class

// allows the program to output data to the screen using the API functions
#include <iostream>

using std::cout;
using std::endl;

// Creates a GradeBook class
class GradeBook
{
public:
	// function that displays a welcome message to the Gradebook user
	void displayMessage()
	{
		cout << "Welcome to the Grade Book!" << endl;
	} // end function displayMessage
}; // end class Gradebook

// function main begins program execution
int main()
{
	// creates a Gradebook object
	GradeBook myGradeBook;
	// calls object's displayMessage function
	myGradeBook.displayMessage();

	// Indicates the program ran successfully
	return 0;
} // end of main function