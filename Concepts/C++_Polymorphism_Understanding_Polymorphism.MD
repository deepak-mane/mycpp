# C++ Polymorphism : Understanding Polymorphism


This chapter we're going to be talking about polymorphism. Polymorphism is a somewhat misunderstood topic and Object-Oriented Programming. So before I go into a demonstration of why we need polymorphism I thought I'd bring up the Wikipedia page so I can review their definition of what polymorphism means. Kind of give you a way to visually see what I'm talking about. So scroll down to the paragraph that pertains to this chapter.Here it is right here.

<i><b>The primary usage of polymorphism in industry is the ability of objects belonging to different types to respond to method field property calls of the same name. Each one according to an appropriate type specific behavior the programmer does not have to know the exact type of the object in advance. And so the exact behavior is determined at run time. </b></i>

Let me give you an example to show you what I'm talking about. Let's take a look at this program right.This is from the chapter before on inheritance. We have an Employee class which is our base class and we have our manager class which is our derived class.
What we want to be able to do is create a collection of objects that can be manager objects or employee objects be able to call a function on those objects and have the compiler figure out at runtime which type of object it's calling the function for a mushroom talking about we're going to use a vector to  store objects so we need to pound include them into our programs.
We'll do that first. Now let's come down to Main let's create a employee vector we'll call it emp's for short.

Then let's create an employee object $25 and let's create a manager object.Smith twelve hundred true for salaried. Now let's place both of those objects into our vectors so Imp's pushed back you know one emp's push back in one so so far so good.

Now let's say we want to call the gross pay function for each of these via the vector. In other words I want to be able to run a loop where for each object in the vector I wanted to call the gross pay function for that object.
So we're going to write a loop that equals zero by less than you know its size. Plus plus I see out you know Sabai dot gross pay when we pass and the number of hours say 40 Del closed loop.

Now let's run the program.So you see the Employee object that works perfectly. Twenty five dollars an hour times 40 hours is a thousand dollars gross pay. However the manager object the manager was making twelve hundred the gross pay function is supposed to understand that that employee is a salaried employee and only paid them the twelve hundred rather than multiplying by the hours worked to get hours. That manager would like to make that kind of money but that's not how the program is supposed to work.
That problem occurred because the compiler did not know which type of gross pay function to call and because the type of our vector's employee it called the gross pay function for employees. Even though Smith is a manager not an employee. So it took that twelve hundred dollars. Multiply it by 40 to give it 48000. Now when we implement polymorphism correctly when we run this program again the compiler will understand that.

MS are MVR one manager or one isn't a manager object not an employee object and we'll call the correct
function for that type of object. So I guess I'm kind of explaining what polymorphism is by showing you how it is not working in this particular case. And then through some redefinition of our classes we'll be able to make it work.

So let's move on to the next lesson. Where would begin learning how to implement polymorphism in Object-Oriented Programming.

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

- [Back](./README.MD)
