C++ Polymorphism Understanding
[Back](./README.MD)
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
#include <vector>
using namespace std;

// Base Class
class Employee {
protected:
	string name;
	double pay;
public:
	Employee(){
		name = "";
		pay = 0;
	}
	Employee(string empName, double payRate) {
		name = empName;
		pay = payRate;
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
	Manager(string name, double payRate, bool isSalaried) : Employee(name, payRate) {
		salaried = isSalaried;
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
		stm << name << " : " << pay
				<< " : " << salary << endl;
		return stm.str();
	}
};

int main() {
	vector<Employee> emps;
	Employee emp1 ("Jones", 25.00);
	Manager mgr1("Smith", 1200, true);
	emps.push_back(emp1);
	emps.push_back(mgr1);
	for (unsigned int i = 0; i < emps.size(); i++) {
		 cout << emps[i].grossPay(40) << endl;
	}

	return 0;
}
```
