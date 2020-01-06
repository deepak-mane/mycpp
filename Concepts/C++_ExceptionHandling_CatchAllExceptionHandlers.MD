# C++ ExceptionHandling : CatchAll ExceptionHandlers

In this very brief last lesson of the chapter I'm going to demonstrate how to create a catch all catch

statement that will catch all exceptions and not just specific ones.

Notice that in the example from the last lesson we created a divide by zero exception.

Here's the class definition up above.

Divide by zero which inherited from runtime error.

There can be situations and programs especially large programs where you cannot possibly know of all

the exceptions that can occur.

When that happens you need to be able to catch exceptions without knowing exactly what they are.

So what am I to do that is by using an ellipsis as the argument to the catch statement.

Let me demonstrate how that works.

Pursuing going to do is come in and out this old kitsch

and now we're right.

Our catchall which I like to call it.

So we just put an ellipsis inside parentheses and then we really can't identify what the exception is.

So all we can do is just identify to the user or the program that an exception was thrown and it was

caught in our catch all catch statement.

So let's build and run this program.

Let's run it with the zero denominator.

And you see that our message is displayed exception thrown and caught.

And again don't use this if you know exactly what exceptions are going to be thrown.

But like I said before in a large program you might have a series of different specific catches for

all of the exceptions.

You know can be thrown and then at the very end of the series of statements and you can always have

more than one you'll include the catch all to catch any exceptions that were left out of the specific

list.

Well demonstrate how this works in more detail and one of the exercises at the end of the chapter.

And in fact we're going to move into those exercises right now.

```cpp
```
- [Back](./README.MD)

