# C++ Inheritance :: Creating Base Class

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


class Employee {
private:
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
		stm << name << ": " << pay;
		return stm.str();
	}

};


int main() {
	Employee emp1("Jane Smith", 35000);
	Employee emp2("Bill Brown", 32000);
	cout << emp1.toString() << "\n"
		 << emp2.toString() << endl;
	return 0;
}
```
