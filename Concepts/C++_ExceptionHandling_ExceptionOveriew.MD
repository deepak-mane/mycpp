# C++ ExceptionHandling : ExceptionOveriew

In this chapter we're going to talk about exception handling and exception handling allows us to keep

our programs from crashing back to the operating system.

In other words it allows us to neatly handle errors in our programs or so-called exceptions so that

our programs don't crash and to begin the chapter I want to show you an example of why exception handling

is necessary.

Let's look at a very simple program.

We're creating a variable called Neumar.

Or numerator.

Set it to 12.

And we're going to create another variable dunam or denominator.

Set it to zero.

Remember going to write out the value of dividing numerator by denominator must watch what happens when

we build and run this program.

Well as you can see the program crashed and took me back to the operating system so all I can do here

is close the program.

The reason for that is because dividing by zero is a fatal error and it will crash your program.

And the way we can keep that by happening is by handling exceptions usually by something called try

and catch.

And by doing that we will keep problems like this from crashing programs.

When we show you a very simple example of how to use exception handling and then we'll develop it further

in the coming lessons per se to come up to the global area and I'm going to create a constant divide

by zero.

We're going to set it to a value really doesn't matter what the value is.

Now to keep divide by zero or errors from occurring we need to put our code that we're going to test

inside what's called a try statement.

I'm going to erase the code and put it back in.

So let me go ahead and bracket try inside the try.

We put code that we believe can lead to a error.

So we'll put our code back in and then here's where we can test for our exception before it happens.

What we're saying is that if the denominator is zero then we want to throw a divide by zero exception.

Else seek out.

Numerator divided by denominator.

And then below are try when he scroll the screen up a little bit right here.

We had our catch kids can take an argument.

So here we say if he is equal to the constant divide by zero and C out can't divide by zero.

Now it's really not good practice to write errors to the standard output.

Normally you write them to see air C R R but for this demonstration only I'm going to simply put it

there instead.

Which is a little bit easier.

And the next lesson in the coming lessons I'll show you more thoroughly how to catch exceptions and

what to do with them.

So now let's run this program.

And so as you see other than crashing the program by testing the denominator we throw the exception

divide by zero.

The exception is caught handled by our catch statement which returns can't divide by zero.

So that's an overview of how exception handling works.

Let's move on to the next lesson where I'm going to show you a more proper way to throw exceptions by

creating an exception class and then using that as a means of throwing exceptions.

```cpp
```
- [Back](./README.MD)

