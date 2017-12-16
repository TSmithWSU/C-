#pragma once
#include <iostream>
using namespace std;

class BankAccount
{
private:
	string holder_name;
	double balance;
	int accountNumber;
public:
	BankAccount();
	BankAccount(string, double, int);
	~BankAccount();
	string getHolderName();
	int  getAccountNumber();
	double getBalance();
	bool operator<(BankAccount& b);
};

