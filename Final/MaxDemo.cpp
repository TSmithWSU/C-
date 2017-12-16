// max.cpp : Defines the entry point for the console application.
//

#include <string>
#include <iostream>
#include "Person.h"
#include "BankAccount.h"

using namespace std;

template <class T>
T mymax(T& t1, T& t2)
{
	return t1 < t2 ? t2 : t1;
}

template <class T>
T mymax(const T& t1, const T& t2)
{
	return t1 < t2 ? t2 : t1;
}


int main()
{
	cout << "max of 33 and 44 is " << mymax(33, 44) << endl;
	string s1 = "hello";
	string s2 = "world";
	cout << "max of " << s1 << " and " << s2 <<
		" is " << mymax(s1, s2) << endl;
	Person p1("Kate", "Gregory", 123);
	Person p2("Someone", "Else", 456);
	cout << "max of " << p1.GetName() << " and " << p2.GetName() <<
		" is " << mymax(p1, p2).GetName() << endl;

	

	BankAccount account1("Jack", 1000 , 27);
	BankAccount account2("Jake", 2000 , 28);

	cout << mymax(account1, account2) << endl;
	return 0;
}

