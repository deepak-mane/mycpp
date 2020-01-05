# C++ Polymorphism : Virtual Functions

We're now ready to see the solution to our polymorphism problem and it's really quite a simple one __to have the compiler be able to determine which function to call at runtime based not on the data type of the variable but the type of object that's actually stored in the variable__ which is right here where we have pointer pointing to any manager object we need to make the function in question in the base class a virtual function by virtual.

I'm saying it's polymorphic like so by typing the keyword virtual before the return data type know what this means is that now the compiler will look at that function. Know that it's virtual and determine which code to run based on the type of object that is stored in the variable rather than just the data type that the variable was declared as. 

Now it's necessary __absolutely necessary that you make the base class function a virtual function__. It's not required but it's recommended that you also make the derived class function virtual also. That will just make your intent easier to read. For someone looking at your code. So now that we've made gross pay virtual in both the base class and the derived class we can build and run our program.

And you'll see that now we're getting the correct answer. Jones gets paid a thousand that's 25 times 40 hours and Smith who has a manager gets paid the salary of twelve hundred dollars which is what they are supposed to get paid based on the fact that their salaried field is set to true by marking a function as virtual. We were able to __*let the compiler decide at runtime or dynamically which function to execute based on the type of object that it's working with.*__ 

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

	virtual double grossPay(int hours) {
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

	virtual double grossPay(int hours) {
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
We can now also go back and fix our vector problem so that the vector objects will also be called correctly.

First let's make sure we have the vector class poun included and we do so it's come back down to our code. We'll create a vector object. Now this time it needs to be a employee pointer vector game because we need pointers for the compiler to work correctly. Now we can push back our two objects and the need to be references. So one there we go and manager one where we can write a loop. This is going to look a little funny when well in the line right below it and then we can do the pay the same way employees. I need a pointer to gross pay and we'll pass in 40 hours and then in line and then close the loop shark code looks correct it does you know it's built run. So the second set of names and pay are coming from the vector and you'll see that it is still finding the right function to call based on the type of object that it comes across.

So now you see the advantages of polymorphism by making our functions polymorphic we can store objects of any type B of the base class of the derived class in a single container and then call the correct function for that object based on the type of object that it is and that makes our programs much more flexible especially when we're dealing with objects of related classes.

So that wraps up this lesson on virtual functions and now we're ready to look at one more idea behind polymorphism and that's the idea of the abstract class and abstract class as a class that has function declarations but not executable code in them. For example I can have a Shape class that has a virtual function draw but then is only implemented with specific types of shapes such as the draw function for a circle or the draw function for a square. And we're going to see how to create abstract classes in the next lesson.

```cpp

```

- [Back](./README.MD)
