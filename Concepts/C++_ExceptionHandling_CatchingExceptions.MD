# C++ ExceptionHandling : CatchingExceptions


In this lesson I'm going to demonstrate how to catch an exception object. In this case the divide by zero object that we created in the last lesson.  So here's our code that we've written so far. All we need now is some main code that will cause the exception to be thrown. So we're going to declare a couple of numeric variables here.  Will simply prompt the user to enter a numerator 
and prompt the user to enter a denominator numbers one and number two.
 
Then we'll begin our tri. Remember that we put a possible exception causing statement in a try and then we'll have the catch part catch that exception. So where are exception could be thrown is in the quotient function call with number one and number two just see out statement to display the result. So there's our Try number ready for the catch. And here's the tricky part.

We need to declare in the catch argument a divide by zero and we want to pass a reference to that object we'll call it except that's going to store the exception object. Divide by zero exception object that is thrown when we try to divide by zero. Then to show the use of the error we call the accept object and we call the what function what returns. The argument that we passed in a peer when we call the constructor for our divide by zero exception object.

So there's where the divide by zero exception message is displayed and that's via the what function of our except object which is simply a divide by zero object and that's all we want our catch to do for this particular simple case so we'll stop it here. So let's build and run first time through Let's do a normal execution of the program to see that it works correctly.

Now let's build and run again or just run this time we don't have to do all this time we'll do 12 and zero and we'll see that divide by zero exception occurs and again I can't emphasize enough that we want this exception to occur when we try to divide by zero so that the program doesn't crash. You never ever ever want a program to crash you always want to try to handle exceptions. In the program and what we could have done and will see this in the exercises at the end of the chapter we could have this in a loop so that if you divide by zero exception occurs we can give the user the opportunity to correct that by changing the denominator to a value other than zero.

But this is how exceptions are caught. We catch an exception in a catch statement by passing on the Exception object that we're looking for and noticed that we're looking for a particular exception. There are situations where we might have more than one exception to catch for example trying to open a file that doesn't exist or trying to access an array element that's beyond the end of the array. Called an out of bounds error or out-of-bounds exception. There are situations where you have multiple catches that you can make and then the next lesson are going to look at what's called a catch all to catch all the exceptions that can occur in any given set of code or program statements. 

And when to see how to do that in the next slide.


```cpp
//============================================================================
// Name        : Sec4_ExceptionHandling_CatchingExceptions.cpp
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
	} catch (DivideByZero &except) {
		cout << except.what() << endl;
	}
	return 0;
}
```
__Output:__
```
Enter a numerator: 12
Enter a denominator: 0
Divide by zero exception
```
- [Back](./README.MD)

