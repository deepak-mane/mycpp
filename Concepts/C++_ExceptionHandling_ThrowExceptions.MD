# C++ ExceptionHandling : ThrowExceptions


In this lesson I'm going to demonstrate how to create an exception object and then how to throw that exception once the exception object has been created. So start with the first thing we need to do is bring in a header into our program and that heterozygous TDE except it stands for the standard exception header. We're going to be creating a exception class a derived class that is based on one of the standard C plus plus exceptions. Runtime Error. Now show you how to do that right now.

So we're going to create a exception class called divide by zero and it inherits from as I mentioned earlier one of the standard C plus plus exception classes. Runtime error because of a divide by zero error is indeed a runtime error. Our class definition is very simple. We have just a public section and then all we have is a constructor in that constructor. Only performs one task and that's to call the constructor for the base class runtime error and pass in a message that we want to be displayed when we try to divide by zero and that messages divide by zero exception. So that's all the class has to do. In all I divide by zero object has to do is when it's been called or when it's thrown. It has to display the message. Divide by zero exception so that the user will know what's wrong.

So that's all we need for our class definition. Now let's create a situation where this exception can be thrown.  We're going to do that by creating a function called quotient which will take two parameters the numerator and denominator  function then checks to see if the denominator is equal to zero. If it is then we want to throw a divide by zero exception in the way we do that is we use the keyword throw and then call the constructor for our divide by zero class and at that point if the denominator is equal to zero then the divide by zero exception will be thrown. Otherwise we want to return the numerator divided by the denominator. Very simple and that's all there is to it. 

So let's review what we've learned in this lesson. We can create our own exception objects. We do that by deriving our exception object from one of the standard C plus plus exception classes and so if we want to create our own exception object we're going to have to include the header yesterday except then our exception class will derive from one of these standard exception classes. In this case we're using runtime error. You can look up in a C++ reference what the other standard exceptions are. Then all our class has to do is have a constructor that calls the base class constructor with a customized message indicating what exception is being thrown. In this case it's a divide by zero exception. Then to throw the exception we simply need to test for a condition that would lead to that exception for divide by zero. That means the denominator has to be equal to zero when and if that condition occurs then we throw the exception by using the keyword throw followed by a call to the constructor for our exception class and 
that's all there is to it. 

```cpp
//============================================================================
// Name        : Sec4_ExceptionHandling_ThrowingExceptions.cpp
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
	int numer = 12;
	int denom = 0;
	quotient(numer, denom);

	return 0;
}
```
__Output:__
```
terminate called after throwing an instance of 'DivideByZero'
  what():  Divide by zero exception
```

We're now ready to move to the next list and we're going to demonstrate what to do with an exception when it's been thrown which is to catch the exception so that the program doesn't crash and we're going to see how to do that in the next lesson.


- [Back](./README.MD)

