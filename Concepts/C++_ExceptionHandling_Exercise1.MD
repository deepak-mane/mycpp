# C++ ExceptionHandling : Exercise1

In This exercise we're going to demonstrate exception handling with file input output, While in this case really

just File Inout. First I am  going to demonstrate what happens when you don't use exception handling when

trying to open a file that doesn't exist.

Then I'll show you how to handle the exception correctly using a try catch statement.

So we've found included the stream headers so we're already ready there.

So let's go ahead and start our program.

So we're going to do is create an eye of stream object what is called File Number going to open a file

that doesn't exist.

Biodata text does not exist on my hard drive.

And we're going to say while not file you know if see out file don't get it simply returns a single

character from the file and then we'll close the file as the last step.

So what we would see if there was data in this file or the file even existed where the ASCII representations

of the different characters.

But instead what we see is a steady string of negative ones indicating that we're not even getting into

the file at all.

So we'll do a Control-C to stop that.

So what we need to do is add exception handling to this program.

The first thing I have to do in C++ is I have to add what's called a bit mask to let the program know

what possible errors can exist and so we're going to have to set what's called a failed bid and a bad

bit.

And this will signal to the compiler.

When I try to call an exception that there is an exception to be handled.

Now after these two lines I can go ahead and call my try kid will insert a try and will indent our executable

code inside the tri will save the clothes to the outside and then we'll have our catch statement which

would take an extreme failure object and I can capture the exact error with the dot.

What that's not going to really tell us anything.

I'll leave it in there.

But instead we just want to see is something to let us know what went wrong and then we also need to

be able to in the program gracefully so we're going to put a return one here so that the program will

stop and it would turn want to go back to the system prompt.

So it's build and run the program.

So you see that the air that was returned by the exception object was basic Iowas clear.

Well that doesn't tell us anything.

So that's why I added the extra statement.

Your opening file.

So what I wanted to do in this exercise was demonstrate in a different environment how exception handling

works in the lessons we work primarily with numeric exceptions.

Here we work with a different kind of example.

So I demonstrated how to check to see if a file is open and then handle the exception when it's not.

And as you can see by what happened before we added the try catch not handling that exception leads

to the program just running interminably.

So by adding a file exception a file in this case scenario string failure exception to the program when

we could not open the file at this statement right here.

The exception was thrown to our catch and then the program displayed what the problem was and gracefully

terminated.

It would have been impossible right here to include code to allow the user to re-enter a new file name.

But really all I want to demonstrate here is just the general overview of how to use try catch would

follow.

So that's how you do it.

And with that we in this chapter on exception handling.

```cpp
//============================================================================
// Name        : Sec4_ExceptionHandling_Exercise1.cpp
// Author      : Deepak Mane
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <stdexcept> // standard exception header

using namespace std;

int main() {
	ifstream file;
	file.exceptions(ifstream::failbit | ifstream::badbit);

	try {
		file.open("file.txt");
		while (!file.eof()) {
			cout << file.get();
		}
	} catch (ifstream::failure e) {
		cout << e.what() << endl;
		cout << "Error Opening file." << endl;
		return 1;
	}

	file.close();
	return 0;
}
```
__Output:__
```
basic_ios::clear: iostream error
Error Opening file.
```
- [Back](./README.MD)

