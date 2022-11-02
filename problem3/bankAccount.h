//bankAccount.h

#include<iostream>
#include<fstream>
#include<string>
#include<unistd.h>
using namespace std;

class bankAccount
{
	private:
		string accountName;
		float balance;
		void setName(string n);
		void setBalance(float bal);
	public:
		bankAccount(string n, float bal);
		string getName();
		float getBalance();
		void deposit(float dep);
		void withdraw(float draw);
		~bankAccount();
};
