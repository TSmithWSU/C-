//Write a complete C++ program with the two alternate functions specified below, each of which simply triples the
//variable count defined in main.In main function, test the two functions by asking the user to input an integer value,
//save it to a variable, then call the two functions, and display the variable before and after the function calls.Then
//compare and contrast the two approaches.These two functions are
//	a) function tripleByValue that passes a copy of count by value, triples the copy and returns the new value.The
//	signature of the function should be :
//	int tripleByValue(int a)
//	b) function tripleByReference that passes count by reference via a reference parameter and triples the original
//	value of count through its alias(i.e., the reference parameter).The signature of the function should be :
//	void tripleByReference(int &a)

#include <iostream>
using namespace std; 

//declare functions
int tripleByValue(int a);
void tripleByReference(int& a);

int main()
{
	//init vars
	int input; 
	int input2;
	char answer;

	//greeting
	cout << "Welcome. ";

	do
	{
		//ask for integer
		cout << "Enter an integer: ";
		cin >> input;
		input2 = input;

		//display integer before tripple
		cout << "Your integer before being trippled by value is " << input << endl;

		//display result
		input = tripleByValue(input);
		cout << "Your integer after being trippled by value is " << input << endl;

		//display before
		cout << "Your integer before being trippled by reference is " << input2 << endl;

		tripleByReference(input2);
		cout << "Your integer after being trippled by reference is " << input2 << endl;

		cout << "Do this again? (y/n) ";
		cin >> answer;

	} while (answer == 'y');
	

	cout << "Using the function by value required a value to be returned and the function by refernce did not.";

} //end main

//define functions
int tripleByValue(int a) {

	a = a * a * a; 
	return a;
} //end tripleByValue

void tripleByReference(int& a) {

	a = a * a * a; 

} //end tripleByReference