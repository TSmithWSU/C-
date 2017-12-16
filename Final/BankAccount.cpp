#include "BankAccount.h"

BankAccount::BankAccount()
{}

BankAccount::BankAccount(string name, double bal , int accnum) :holder_name(name), balance(bal) , accountNumber(accnum)
{

}
BankAccount::~BankAccount()
{}
string BankAccount::getHolderName()
{
	return holder_name;
}
double BankAccount::getBalance()
{
	return balance;
}

bool BankAccount::operator<(BankAccount& b)
{
	return balance < b.balance;
}

int BankAccount::getAccountNumber()
{
	return accountNumber;
}