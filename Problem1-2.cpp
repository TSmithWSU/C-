//Write a function that, when you call it, displays a message telling how many times it has been called: “I have been
//called 3 times”, for instance.Write a main() program that calls this function at least 10 times.Try implementing this
//function in two different ways.First, use a global variable to store the count.Second, use a local static variable.
//Which is more appropriate ? Why can’t you use a local variable ?

#include <iostream>
using namespace std; 

//global variable
int global_times; 

//declare function
void function_count(int times);

int main()
{
	//greeting
	cout << "Welcome to the function call calculator..." << endl;

	//int times =0; //local variable would not work because it was not being changed, just the copy was

	char answer;

	do
	{
		for (int i = 0; i < 10; i++)
		{
			function_count(global_times);
		} //end for
		cout << "Do this again? (y/n)";
		cin >> answer;
	} while (answer == 'y'); //end do while
	
	cout << "The local variable would not work because its value was not being changed, just the copy's value was";
	
} //end main

//define function
void function_count(int times)
{
	global_times++;
	if (global_times == 1)
	{
		cout << "I have been called " << global_times << " time" << endl;
	} //end if
	else
	{
		cout << "I have been called " << global_times << " times" << endl;
	} //end else
} //end function_count