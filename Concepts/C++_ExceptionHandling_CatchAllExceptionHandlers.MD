# C++ ExceptionHandling : CatchAll ExceptionHandlers

  + [Exception Handling]()
    - [Exception Overview](./C++_ExceptionHandling_ExceptionOveriew.MD)
    - [Throw Exceptions](./C++_ExceptionHandling_ThrowExceptions.MD)
    - [Catching Exceptions](./C++_ExceptionHandling_CatchingExceptions.MD)
    - [Catch All Exception Handlers](./C++_ExceptionHandling_CatchAllExceptionHandlers.MD)
    - [Exercise 1](./C++_ExceptionHandling_Exercise1.MD)    
    
In this very brief last lesson of the chapter I'm going to demonstrate how to create a catch all catch statement that will catch all exceptions and not just specific ones. Notice that in the example from the last lesson we created a divide by zero exception. Here's the class definition up above. Divide by zero which inherited from runtime error. There can be situations and programs especially large programs where you cannot possibly know of all the exceptions that can occur.

When that happens you need to be able to catch exceptions without knowing exactly what they are. So what am I to do that is by using an ellipsis as the argument to the catch statement. Let me demonstrate how that works. Pursuing going to do is come in and out this old kitsch and now we're right. Our catchall which I like to call it. So we just put an ellipsis inside parentheses and then we really can't identify what the exception is. So all we can do is just identify to the user or the program that an exception was thrown and it was caught in our catch all catch statement.

So let's build and run this program. Let's run it with the zero denominator. And you see that our message is displayed exception thrown and caught. And again don't use this if you know exactly what exceptions are going to be thrown. But like I said before in a large program you might have a series of different specific catches for all of the exceptions. You know can be thrown and then at the very end of the series of statements and you can always have more than one you'll include the catch all to catch any exceptions that were left out of the specific list. Well demonstrate how this works in more detail and one of the exercises at the end of the chapter.

And in fact we're going to move into those exercises right now.

```cpp
//============================================================================
// Name        : Sec4_ExceptionHandling_CatchingAllExceptionsHandlers.cpp
// Author      : Deepak Mane
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdexcept> // standard exception header

using namespace std;

// Creating Derived class, inherits from
// one of the standard c++ exception classes runtime error
class DivideByZero: public runtime_error {
public:
	DivideByZero() :
			runtime_error("Divide by zero exception") {
	}
	;
};

double quotient(double numer, double denom) {
	if (denom == 0) {
		throw DivideByZero();
	} else {
		return numer / denom;
	}
}

int main() {
	double number1, number2, ratio;
	cout << "Enter a numerator: ";
	cin >> number1;
	cout << "Enter a denominator: ";
	cin >> number2;
	try {
		ratio = quotient(number1, number2);
		cout << "Result is: " << ratio << endl;
	}

	/*catch (DivideByZero &except) {
		cout << except.what() << endl;
	}*/

	catch (...) {
		cout << "Exception thrown and caught" << endl;
	}
	return 0;
}
```
__Output:__
```
Enter a numerator: 12
Enter a denominator: 0
Exception thrown and caught
```
- [Back](./README.MD)

