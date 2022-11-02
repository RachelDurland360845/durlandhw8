//bankAccount.cpp

#include <iostream>
#include "bankAccount.h"

using namespace std;

//constructor
bankAccount::bankAccount(string n, float bal)
{
	accountName = n;
	balance = bal;
}

string bankAccount::getName()
{
	return accountName;
}

float bankAccount::getBalance()
{
	return balance;
}

void bankAccount::deposit(float dep)
{
	balance += dep;
}

void bankAccount::withdraw(float draw)
{
	balance -= draw;
}

bankAccount::~bankAccount()
{
	cout << "Removing the accounts before ending program" << endl;
}
