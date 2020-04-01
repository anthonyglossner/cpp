// Anthony Glossner
// 04-01-2020
// Gradebook : Creates a gradebook class w/ a function requiring a parameter

// allows the program to output data to the screen using the API functions
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

// Creates a GradeBook class
class GradeBook
{
public:
	// function that displays a welcome message to the Gradebook user
	void displayMessage(string courseName)
	{
		cout << "Welcome to the grade book for\n" << courseName << "!" << endl;
	} // end function displayMessage
}; // end class Gradebook

// function main begins program execution
int main()
{
	// string of characters to store course name
	string nameOfCourse;
	// creates a Gradebook object
	GradeBook myGradeBook;

	// prompts user for course name
	cout << "Please enter the course name : " << endl;
	getline(cin, nameOfCourse);
	cout << endl;

	// calls object's displayMessage function
	myGradeBook.displayMessage(nameOfCourse);

	// Indicates the program ran successfully
	return 0;
} // end of main function