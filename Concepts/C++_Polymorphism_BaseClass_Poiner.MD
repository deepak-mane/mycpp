# C++ Polymorphism: Base Class Poiner

In the last lesson we saw that when we create a vector of employee objects or a base class vector and then store both base class employee and derived class manager objects in that vector and then call a specific function. <i><b>The compiler looks at the type of the vector to determine what function to call not the type of the object.</i></b> 

So that even with manager objects in the vector it will still calling the gross pay function for employee objects and other solution we might try is to create pointers and use pointers to try to get the compiler to figure out what type of function to call. So let's give that a shot. 

We'll create an employee pointer or a pointer to an employee object like so then let's assign it the address of emp1 employee object and then will write a little code to return the name and then also to return gross pay to pass the hours in for gross pay and then let's run the program OK.

So that looks correct and we expect to try the same thing with a manager object. This time we'll assign the address of (mgr1) manager one to our employee pointer check it with the same code remember for a manager object. If salaried is true which it is then the compiler should ignore the number of hours passed in and simply return the salary as gross pay. So it's build and run this program now. 

So we get. And no we still have the same problem. <i><b>The problem here is that the compiler is looking at not the type of object that is stored in our variable but instead the data type of the variable itself to decide what to do.</i></b> 

<span style="text-decoration:underline">So a pointer to employee is still going to call the employee gross pay function even if it's a manager object just like what happened with the director. So we still haven't solved the problem but don't worry there's a solution close at hand.</span>

<b>What we need to do is we need to modify the definition of the employee gross pay function and the manager gross pay function with one simple keyword and we'll fix this whole problem and we're going to see how to do that in the next lesson.</b>

```cpp
//============================================================================
// Name        : Sec1_Polymorphism.cpp
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
	Employee *empPtr;
	empPtr = &emp1;
	cout << "Name: " << empPtr->getName() << endl;
	cout << "Pay: " << empPtr->grossPay(40) << endl;
	empPtr = &mgr1;
	cout << "Name: " << empPtr->getName() << endl;
	cout << "Pay: " << empPtr->grossPay(40) << endl;
	return 0;
}

```
<u>Output</u>
```html
Name: Jones
Pay: 1000
Name: Smith
Pay: 48000

```
- [Back](./README.MD)
