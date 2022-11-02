//bankApp.cpp

#include <iostream>
#include "bankAccount.h"

using namespace std;

int main(int argc, char* argv[])
{
//part a
bankAccount jackAccount("Jack Smith", 50);
//part b
bankAccount jillAccount("Jill Brian", 100);
//part c
bankAccount accountArray[3] = {bankAccount("Ralph Kramden", 10), bankAccount("Alice Kramden", 20), bankAccount("Ed Norton", 30)};
//part d
for(int i=0;i<3;i++)
{
	accountArray[i].deposit(30);
}
//part e
for(int i=0;i<3;i++)
{
	accountArray[i].withdraw(20);
}
//part d
cout << jackAccount.getName() << jackAccount.getBalance() << endl;
cout << jillAccount.getName() << jillAccount.getBalance() << endl;
for(int i=0;i<3;i++)
{
	cout << accountArray[i].getName() << accountArray[i].getBalance() << endl;
}

}
