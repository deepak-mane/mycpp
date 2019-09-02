//============================================================================
// Name        : AreaRectangle.cpp
// Author      : Deepak Mane
// Version     : v1.0
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class Rectangle {
private:
	int length;
	int breadth;

public:
	// Overloaded Constructors
	Rectangle() {length=breadth=1;}
	Rectangle(int l,int b);
	// Facilitators
	int area();
	int perimeter();
	// Accessor / Getter Function
	int getlength() {return length;}
	// Mutator / Setter Function
	void setlength(int l) {length = l;}
	// Destructor
	~Rectangle();
};

// Functions
Rectangle::Rectangle(int l, int b) {
	length = l;
	breadth = b;
}

int Rectangle::area() {
	return length * breadth;
}

int Rectangle::perimeter() {
	return 2 * (length + breadth);
}

Rectangle::~Rectangle() {

}

// Main Function
int main() {
	Rectangle r(10,5);
	cout<< r.area() <<endl;
	cout<< r.perimeter()<<endl;
	r.setlength(20);
	cout<<r.getlength()<<endl;
	return 0;
}
