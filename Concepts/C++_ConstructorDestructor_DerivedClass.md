# Constructor and Destructors in Derived Class


```cpp
//============================================================================
// Name        : Sec1_Inheritance.cpp
// Author      : Deepak Mane
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
using namespace std;

// Base Class
class Employee {
protected:
	string name;
	double pay;
public:
	Employee() {
		name = "";
		pay = 0;
	}
	Employee(string empName, double payRate) {
		name = empName;
		pay = payRate;
	}

	~Employee() {
		// Free Allocated Resources
	}
	// getter for name
	string getName() {
		return name;
	}
	// setter for name
	void setName(string empName) {
		name = empName;
	}
	// getter for pay
	double getPay() {
		return pay;
	}
	// setter for pay
	void setPay(double payRate) {
		pay = payRate;
	}

	// ToString function to return name + pay
	string toString() {
		stringstream stm;
		stm << name << " : " << pay;
		return stm.str();
	}

	double grossPay(int hours) {
		return pay * hours;
	}

};

// Derived Class
class Manager: public Employee {
private:
	bool salaried;
public:
	// default constructor
	Manager() : salaried(true) {

	}

	Manager(string name, double payRate, bool isSalaried) :
			Employee(name, payRate) {
		salaried = isSalaried;
	}

	~Manager() {
		// free allocated resources
	}

	bool getSalaried() {
		return salaried;
	}

	double grossPay(int hours) {
		if (salaried) {
			return pay;
		} else {
			return pay * hours;
		}
	}

	// ToString function to return name + pay
	string toString() {
		stringstream stm;
		string salary;
		if (salaried) {
			salary = "Salaried";
		} else {
			salary = "Hourly";
		}
		stm << name << " : " << pay << " : " << salary << endl;
		return stm.str();
	}
};

int main() {
	/*
	 Employee emp1("Jane Smith", 35000);
	 Employee emp2("Bill Brown", 32000);
	 cout << emp1.toString() << "\n"
	 << emp2.toString() << endl;
	 */

	Employee emp1("Mary Smith", 15.00);
	cout << "Employee name : " << emp1.getName() << endl;
	cout << "Employee pay rate : " << emp1.getPay() << endl;
	cout << "Employee gross pay : " << emp1.grossPay(40) << endl;
	Manager emp2("Bob Brown", 1500, true);
	cout << emp2.toString();
	cout << "Employee gross pay rate : " << emp2.grossPay(100) << endl;
	return 0;
}


```
