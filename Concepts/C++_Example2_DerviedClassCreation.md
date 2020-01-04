# Example2 of Dervied Class Creation

```cpp
//============================================================================
// Name        : Sec1_Inheritance.cpp
// Author      : Deepak Mane
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
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

	void display() {
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
};

// derived class2
class Square : public Quadrilateral {
public:
	Square(double side) :
		Quadrilateral(side, side, side, side) {
	}
	~Square() {}

};

int main() {
	Trapezoid t1(3,5,5,2);
	Square s1(6);
	t1.display();
	s1.display();

	return 0;
}


```
