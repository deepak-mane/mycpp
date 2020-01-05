# C++ Polymorphism : Abstract Classes

Many times when we're working with polymorphism and inheritance we want to create a class that cannot actually be instantiated but instead is used as a base class and a model for all the derived classes in a chain of inheritance a class that cannot be instantiated or will not be instantiated is called an abstract class and it's very easy in C plus plus to create an abstract class.

Let me show you an example. Let's say we're creating a geometrical program of some type a program to draw shapes. A class we might want to use as a base for all of our other classes might be a Shape class but we wouldn't want to actually instantiate the Shape class because it won't have a particular shape. Instead we're going to derive classes from the Shape class such as Circle rectangle square those types of shapes. 

So what we can do is __*make the class abstract*__ and we do that very simply __*by creating a set of methods and making them all what are called pure virtual methods and the way you do that is that you provide an initializer for the virtual method.*__ So virtual void set X equals zero says that that function said X now becomes a pure virtual function. And so we can do the same thing with a set Y because we're going to have x and y coordinates. I'm sorry I cannot get that part out. So we might also have get X and get y functions will make both of those virtual as well and pure virtual by providing an initializer to zero.

And then finally also provide a draw method which one of the drive classes can use to draw the shape that specified. So now the shape class becomes abstract. By that we mean that we cannot instantiate Class. And if we try to we'll just get a compiler error. So what we want to do then is create a drive class that is based on this Shape class. So for example we might say class circle in public shape to indicate we are inheriting from the same class. Now in order for circle to become not a nother abstract class we have to implement all of the pure virtual functions in the base class shape. The first thing we need to do is create a few variables and make them private.

So we need a x y and radius to be able to define a circle. Or a public section will create a destructor that takes an x coordinate y coordinate and a radius and assigns them accordingly. And then we need to implement each of the pure virtual functions that are in the base class so we need a set X. We'll do that first 21:4 set Y. We also need a set radius method even though that's not part of the abstract class. We still need that and then we'll need a good X Y and a get radius that will implement those next and actually. So radius is not virtual so we'll change that and get X get y the nerds get radius and the last is the draw method. So it's virtual void draw.

Konst we don't have the capabilities to demonstrate how to draw a circle server is going to see out a couple of things here. What we'll say is we're drawing circles that will provide the x and y coordinates and put a space right there and that can be easier to read get y that will provide get radius Mandil never go shifted over a little bit and show that's everything. Enclose all of our quaffs definition very sure we did that with shape I believe I did. No I didn't.There you go.OK.

Let's create a circle object. X Y and a radius of five. Know we're going to say see one draw is to demonstrate how it works. So let's build and run it X and get y need to be method. So let's go fix that and run again. Little mistake there we need a space but I'll leave that out. So to wrap up __*a class becomes an abstract shape by making all of its functions pure virtual in the way we make a function pure virtual is by assigning an initializer of zero to the function as such. Then when we try to inherit from that abstract class we have to implement all of the functions that have been defined as pure virtual.*__ And that's what we did in circle. So that's how you create and use a shape class. And when we get to the exercises later on in the chapter we'll look a little bit more into how to work with abstract classes. 

```cpp
//============================================================================
// Name        : Sec1_Polymorphism_AbstractClass.cpp
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
class Shape {
	virtual void setX(int xcor) = 0;
	virtual void setY(int ycor) = 0;
	virtual int getX() const = 0;
	virtual int getY() const = 0;
	virtual void draw() const = 0;
};
// Derived Class
class Circle: public Shape {
private:
	int x, y, radius;
public:
	Circle(int xcor, int ycor, int r) {
		x = xcor;
		y = ycor;
		radius = r;
	}
	virtual void setX(int xcor) {
		x = xcor;
	}
	virtual void setY(int ycor) {
		y = ycor;
	}
	void setRadius(int r) {
		radius = r;
	}

	virtual int getX() const {
		return x;
	}
	virtual int getY() const {
		return y;
	}
	virtual int getRadius() const {
		return radius;
	}
	virtual void draw() const {
		cout << "drawing circle at: " <<
				getX() << ", " <<
				getY() << ", " <<
				"with a radius of: " <<
				getRadius() << endl;
	}
};

int main() {
	Circle c1(2, 3, 5);
	c1.draw();
	return 0;
}

```
__Output:__
```
drawing circle at: 2, 3, with a radius of: 5
```

- [Back](./README.MD)
