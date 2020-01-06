# C++ Polymorphism : Exercise 1

This exercise we're going to revisit an exercise from last chapter where we built a quadrilateral class and then built two derived classes from it. We'd like to do in the exercises demonstrate how to use polymorphism with these classes to be able to display objects of multiple types from a vector. So if you recall we had the quadrilateral class followed by the trapezoid's class followed by the square class. What we're going to need to do is make our display method virtual in the quadrilateral class. And let's also copy it because we're going to need it in the next two classes. So we're going to come down into our trapper's or class put his face there at a display function also calling it virtual change that the trapper's Zoid will come down to the square class.The same thing change that to square.

So now we have the ability for our display method to determine which type of object is being called at runtime. So let's modify our main program. We have two objects. Well the first thing we need to do before we do that can include vector into the program. Let's do that so the vector in its right here are going to say vector. Would that be a pointer will cause a vector Quad's never going to say Quad's pushback and then a reference charge to one object Quad's push back a reference char as one object now would write a for loop equals zero. I Clive's dot size plus plus high quad Sabai arrow symbol display like the check are coded at all x there. 
Looks correct.

So it's build and run the program and there we go so by making the display method Virtual I can put objects of trapper's or square type into a quadrilateral vector. Yet when we try to bring the objects back out of the vector the compiler can figure out what type of object it is and call the correct display method to show us the right type of object we need to traverse order Square.

So that's the solution to the problem we had back in chapter 1. And that wraps up this exercise. And now we're going to look at one more exercise that deals with polymorphism.

```cpp
//============================================================================
// Name        : Sec2_Polymorphism_Exercise1.cpp
// Author      : Deepak Mane
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

// Base Class
class Quadrilateral {
protected:
	double side1, side2, side3, side4;
public:
	Quadrilateral(double s1, double s2, double s3, double s4) {
		side1 = s1;
		side2 = s2;
		side3 = s3;
		side4 = s4;
	}
	~Quadrilateral(){}

	virtual void display() {
		cout << "Quadrilateral with sides: "
			 << side1 << " "
			 << side2 << " "
			 << side3 << " "
			 << side4 << endl;
	}
};

// derived class1
class Trapezoid : public Quadrilateral {
public:
	Trapezoid(double s1, double s2, double s3, double s4) :
		Quadrilateral(s1, s2, s3, s4) {
	}
	~Trapezoid(){}
	virtual void display() {
		cout << "Trapezoid with sides: "
			 << side1 << " "
			 << side2 << " "
			 << side3 << " "
			 << side4 << endl;
	}
};

// derived class2
class Square : public Quadrilateral {
public:
	Square(double side) :
		Quadrilateral(side, side, side, side) {
	}
	~Square() {}
	virtual void display() {
		cout << "Square with sides: "
			 << side1 << " "
			 << side2 << " "
			 << side3 << " "
			 << side4 << endl;
	}

};

int main() {
	Trapezoid t1(3,5,5,2);
	Square s1(6);
	vector<Quadrilateral*> quads;
	quads.push_back(&t1);
	quads.push_back(&s1);
	for (unsigned int i = 0; i < quads.size(); ++i) {
		quads[i]->display();
	}
	return 0;
}

```
__Outout:__
```sh
Trapezoid with sides: 3 5 5 2
Square with sides: 6 6 6 6

```
- [Back](./README.MD)
