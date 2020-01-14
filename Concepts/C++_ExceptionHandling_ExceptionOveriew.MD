# C++ ExceptionHandling : ExceptionOveriew

In this chapter we're going to talk about exception handling and exception handling allows us to keep our programs from crashing back to the operating system. In other words it allows us to neatly handle errors in our programs or so-called exceptions so that 
our programs don't crash and to begin the chapter I want to show you an example of why exception handling is necessary.

Let's look at a very simple program. We're creating a variable called Neumar.Or numerator. Set it to 12. And we're going to create another variable dunam or denominator. Set it to zero. Remember going to write out the value of dividing numerator by denominator must watch what happens when we build and run this program. Well as you can see the program crashed and took me back to the operating system so all I can do here is close the program. The reason for that is because dividing by zero is a fatal error and it will crash your program.

And the way we can keep that by happening is by handling exceptions usually by something called try and catch. And by doing that we will keep problems like this from crashing programs. When we show you a very simple example of how to use exception handling and then we'll develop it further in the coming lessons per se to come up to the global area and I'm going to create a constant divide by zero. We're going to set it to a value really doesn't matter what the value is. Now to keep divide by zero or errors from occurring we need to put our code that we're going to test inside what's called a try statement. I'm going to erase the code and put it back in. So let me go ahead and bracket try inside the try. We put code that we believe can lead to a error. So we'll put our code back in and then here's where we can test for our exception before it happens. What we're saying is that if the denominator is zero then we want to throw a divide by zero exception. Else seek out. Numerator divided by denominator. And then below are try when he scroll the screen up a little bit right here. We had our catch kids can take an argument. So here we say if he is equal to the constant divide by zero and C out can't divide by zero. Now it's really not good practice to write errors to the standard output. Normally you write them to stderr but for this demonstration only I'm going to simply put it there instead.

Which is a little bit easier. And the next lesson in the coming lessons I'll show you more thoroughly how to catch exceptions and 
what to do with them. So now let's run this program. And so as you see other than crashing the program by testing the denominator we throw the exception divide by zero. The exception is caught handled by our catch statement which returns can't divide by zero.
```cpp
//============================================================================
// Name        : Sec4_ExceptionHandling.cpp
// Author      : Deepak Mane
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
const int DivideByZero = 1;

int main() {

	try {
		int numer = 12;
		int denom = 0;
		if (denom == 0) {
			throw DivideByZero;
		} else {
			cout << numer / denom;
		}
	} catch (int e) {
		if ( e == DivideByZero) {
			cout << "Can't Divide by zero" << endl;
		}
	}
	return 0;
}
```
__Output:__
```
Can't Divide by zero
```
So that's an overview of how exception handling works. Let's move on to the next lesson where I'm going to show you a more proper way to throw exceptions by creating an exception class and then using that as a means of throwing exceptions.

One of the advantages of C++ over C is Exception Handling. Exceptions are run-time anomalies or abnormal conditions that a program encounters during its execution. There are two types of exceptions: 
a) Synchronous, 
b) Asynchronous (Ex:which are beyond the program’s control, Disc failure etc). 

C++ provides following specialized keywords for this purpose.
- <b>try:</b> represents a block of code that can throw an exception.
- <b>throw:</b> Used to throw an exception. Also used to list the exceptions that a function throws, but doesn’t handle itself.
- <b>catch:</b> represents a block of code that is executed when a particular exception is thrown.


<b>Why Exception Handling?</b>
Following are main advantages of exception handling over traditional error handling.

1) Separation of Error Handling code from Normal Code: In traditional error handling codes, there are always if else conditions to handle errors. These conditions and the code to handle errors get mixed up with the normal flow. This makes the code less readable and maintainable. With try catch blocks, the code for error handling becomes separate from the normal flow.

2) Functions/Methods can handle any exceptions they choose: A function can throw many exceptions, but may choose to handle some of them. The other exceptions which are thrown, but not caught can be handled by caller. If the caller chooses not to catch them, then the exceptions are handled by caller of the caller.
In C++, a function can specify the exceptions that it throws using the throw keyword. The caller of this function must handle the exception in some way (either by specifying it again or catching it)

3) Grouping of Error Types: In C++, both basic types and objects can be thrown as exception. We can create a hierarchy of exception objects, group exceptions in namespaces or classes, categorize them according to types.

1) Following is a simple example to show exception handling in C++. The output of program explains flow of execution of try/catch blocks.

## Exception Handling in C++
1) Following is a simple example to show exception handling in C++. The output of program explains flow of execution of try/catch blocks.

```cpp
#include <iostream> 
using namespace std; 
  
int main() 
{ 
   int x = -1; 
  
   // Some code 
   cout << "Before try \n"; 
   try { 
      cout << "Inside try \n"; 
      if (x < 0) 
      { 
         throw x; 
         cout << "After throw (Never executed) \n"; 
      } 
   } 
   catch (int x ) { 
      cout << "Exception Caught \n"; 
   } 
  
   cout << "After catch (Will be executed) \n"; 
   return 0; 
} 

Output:
===========
Before try
Inside try
Exception Caught
After catch (Will be executed)
```

2) There is a special catch block called ‘catch all’ catch(…) that can be used to catch all types of exceptions. For example, in the following program, an int is thrown as an exception, but there is no catch block for int, so catch(…) block will be executed.

```cpp
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    try  { 
       throw 10; 
    } 
    catch (char *excp)  { 
        cout << "Caught " << excp; 
    } 
    catch (...)  { 
        cout << "Default Exception\n"; 
    } 
    return 0; 
}
Output:
===============
Default Exception
```

3) Implicit type conversion doesn’t happen for primitive types. For example, in the following program ‘a’ is not implicitly converted to int

```cpp
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    try  { 
       throw 'a'; 
    } 
    catch (int x)  { 
        cout << "Caught " << x; 
    } 
    catch (...)  { 
        cout << "Default Exception\n"; 
    } 
    return 0; 
}
Output:
==================
Default Exception
```

4) If an exception is thrown and not caught anywhere, the program terminates abnormally. For example, in the following program, a char is thrown, but there is no catch block to catch a char.

```cpp
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    try  { 
       throw 'a'; 
    } 
    catch (int x)  { 
        cout << "Caught "; 
    } 
    return 0; 
}
Output:
=========================================================
terminate called after throwing an instance of 'char'
This application has requested the Runtime to terminate it in an 
unusual way. Please contact the application's support team for 
more information.
```
We can change this abnormal termination behavior by writing our own unexpected function.


5) A derived class exception should be caught before a base class exception. See this for more details.
- Exception Handling – catching base and derived classes as exceptions:
  If both base and derived classes are caught as exceptions then catch block of derived class must appear before the base class.
  If we put base class first then the derived class catch block will never be reached. For example, following C++ code prints “Caught Base Exception”

```cpp
#include<iostream> 
using namespace std; 
  
class Base {}; 
class Derived: public Base {}; 
int main() 
{ 
   Derived d; 
   // some other stuff 
   try { 
       // Some monitored code 
       throw d; 
   } 
   catch(Base b) {  
        cout<<"Caught Base Exception"; 
   } 
   catch(Derived d) {  //This catch block is NEVER executed 
        cout<<"Caught Derived Exception"; 
   } 
   getchar(); 
   return 0; 
} 
```
In the above C++ code, if we change the order of catch statements then both catch statements become reachable. Following is the modifed program and it prints “Caught Derived Exception”

```cpp
#include<iostream> 
using namespace std; 
  
class Base {}; 
class Derived: public Base {}; 
int main() 
{ 
   Derived d; 
   // some other stuff 
   try { 
       // Some monitored code 
       throw d; 
   } 
   catch(Derived d) {  
        cout<<"Caught Derived Exception"; 
   } 
   catch(Base b) {  
        cout<<"Caught Base Exception"; 
   } 
   getchar(); 
   return 0; 
} 
```
In Java, catching a base class exception before derived is not allowed by the compiler itself. In C++, compiler might give warning about it, but compiles the code.

6) Like Java, C++ library has a standard exception class which is base class for all standard exceptions. All objects thrown by components of the standard library are derived from this class. Therefore, all standard exceptions can be caught by catching this type

The C++ Standard library provides a base class specifically designed to declare objects to be thrown as exceptions. It is called std::exception and is defined in the <exception> header. This class has a virtual member function called what that returns a null-terminated character sequence (of type char *) and that can be overwritten in derived classes to contain some sort of description of the exception.

```cpp
// using standard exceptions
#include <iostream>
#include <exception>
using namespace std;

class myexception: public exception
{
  virtual const char* what() const throw()
  {
    return "My exception happened";
  }
} myex;

int main () {
  try
  {
    throw myex;
  }
  catch (exception& e)
  {
    cout << e.what() << '\n';
  }
  return 0;
}
Output
=====================
My exception happened.
```
We have placed a handler that catches exception objects by reference (notice the ampersand & after the type), therefore this catches also classes derived from exception, like our myex object of type myexception.

All exceptions thrown by components of the C++ Standard library throw exceptions derived from this exception class. These are:

|exception	|description|
| ---| ---|
|bad_alloc	|thrown by new on allocation failure|
|bad_cast	|thrown by dynamic_cast when it fails in a dynamic cast|
|bad_exception	|thrown by certain dynamic exception specifiers|
|bad_typeid	|thrown by typeid|
|bad_function_call	|thrown by empty function objects|
|bad_weak_ptr	|thrown by shared_ptr when passed a bad weak_ptr|

Also deriving from exception, header <exception> defines two generic exception types that can be inherited by custom exceptions to report errors:

|exception	|description|
| ---| ---|
|logic_error	|error related to the internal logic of the program|
|runtime_error	|error detected during runtime|

A typical example where standard exceptions need to be checked for is on memory allocation.The exception that may be caught by the exception handler in this example is a bad_alloc. Because bad_alloc is derived from the standard base class exception, it can be caught (capturing by reference, captures all related classes).

```cpp
// bad_alloc standard exception
#include <iostream>
#include <exception>
using namespace std;

int main () {
  try
  {
    int* myarray= new int[1000];
  }
  catch (exception& e)
  {
    cout << "Standard exception: " << e.what() << endl;
  }
  return 0;
}
```

7) Unlike Java, in C++, all exceptions are unchecked. Compiler doesn’t check whether an exception is caught or not (See this for details). For example, in C++, it is not necessary to specify all uncaught exceptions in a function declaration. Although it’s a recommended practice to do so. For example, the following program compiles fine, but ideally signature of fun() should list unchecked exceptions.

```cpp
#include <iostream> 
using namespace std; 
  
// This function signature is fine by the compiler, but not recommended. 
// Ideally, the function should specify all uncaught exceptions and function 
// signature should be "void fun(int *ptr, int x) throw (int *, int)" 
void fun(int *ptr, int x) 
{ 
    if (ptr == NULL) 
        throw ptr; 
    if (x == 0) 
        throw x; 
    /* Some functionality */
} 
  
int main() 
{ 
    try { 
       fun(NULL, 0); 
    } 
    catch(...) { 
        cout << "Caught exception from fun()"; 
    } 
    return 0; 
}
Output:
============================
Caught exception from fun()
```
8) In C++, try-catch blocks can be nested. Also, an exception can be re-thrown using “throw; ”

```cpp
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    try { 
        try  { 
            throw 20; 
        } 
        catch (int n) { 
             cout << "Handle Partially "; 
             throw;   //Re-throwing an exception 
        } 
    } 
    catch (int n) { 
        cout << "Handle remaining "; 
    } 
    return 0; 
}
Output:
================================
Handle Partially Handle remaining
```

A function can also re-throw a function using same “throw; “. A function can handle a part and can ask the caller to handle remaining.

9) When an exception is thrown, all objects created inside the enclosing try block are destructed before the control is transferred to catch block.

```cpp
#include <iostream> 
using namespace std; 
  
class Test { 
public: 
   Test() { cout << "Constructor of Test " << endl; } 
  ~Test() { cout << "Destructor of Test "  << endl; } 
}; 
  
int main() { 
  try { 
    Test t1; 
    throw 10; 
  } catch(int i) { 
    cout << "Caught " << i << endl; 
  } 
} 
Output:
=============================
Constructor of Test
Destructor of Test
Caught 10
```

- [Back](./README.MD)

