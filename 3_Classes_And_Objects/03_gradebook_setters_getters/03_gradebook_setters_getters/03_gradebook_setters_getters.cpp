// Anthony Glossner
// 04-01-2020
// Gradebook : Creates a gradebook class w/ a data member, a setter and a getter

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

	// function that sets the course name
	void setCourseName(string name)
	{
		//store the course name in the object
		courseName = name;
	} // end function setCourseName

	// function that gets the course name
	string getCourseName()
	{
		// return the object's course name
		return courseName;
	}

	// function that displays a welcome message
	void displayMessage()
	{
		cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
	} // end function displayMessage

// sets a private attribute for this class
private:
	string courseName;
}; // end class Gradebook



// function main begins program execution
int main()
{
	// string of characters to store course name
	string nameOfCourse;
	// creates a Gradebook object
	GradeBook myGradeBook;

	// prompts user for course name
	cout << "Initial course name is : " << myGradeBook.getCourseName() <<  endl;
	cout << "Please enter the course name : " << endl;
	getline(cin, nameOfCourse);
	// sets the course name
	myGradeBook.setCourseName(nameOfCourse);

	cout << endl;
	// calls object's displayMessage function
	myGradeBook.displayMessage();

	// Indicates the program ran successfully
	return 0;
} // end of main function