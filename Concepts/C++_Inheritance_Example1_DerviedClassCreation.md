# C++ Inheritance :: Example1 of Derived Class creation

```cpp
//============================================================================
// Name        : Sec1_Inheritance.cpp
// Author      : Deepak Mane
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// Base Class
class Account {
protected:
	double balance;

public:
	Account(double bal) {
		if (bal > 0) {
			balance = bal;
		} else {
			bal = 0.0;
		}
	}

	void credit(double amount) {
		balance += amount;
	}

	void debit(double amount) {
		if (balance > amount) {
			balance = balance - amount;
		} else {
			cout << "Insufficient funds." << endl;
		}
	}

	double getBalance() {
		return balance;
	}

};

class CheckingAccount : public Account {
private:
	double fee;

public:
	CheckingAccount(double bal, double f) : Account(bal) {
		fee = f;
	}

	void debit(double amount) {
		if (balance > amount) {
			balance = balance - amount -fee;
		} else {
			cout << "Insufficient funds." << endl;
		}
	}
};

int main() {
	CheckingAccount myacct(500, .5);
	myacct.credit(100);
	cout << myacct.getBalance();
	cout << endl;
	myacct.debit(50);
	cout << myacct.getBalance();
	cout << endl;
	return 0;
}



```
