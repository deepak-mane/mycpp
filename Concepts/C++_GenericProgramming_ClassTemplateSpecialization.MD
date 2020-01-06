# C++ GenericProgramming : Class Template Specialization

In the last lesson I demonstrated how to create a template KLAUSE.

When I got to the end of the lesson I pointed out that while the template worked fine for numbers that

you're using a stack with it doesn't work very well with strings primarily because of the pop where

we set a default value to zero.

Well if we were pushing strings or popping strings off a stack setting the default value to zero would

be incorrect since the default value for a string is the empty string.

So all we can do to remedy that situation is create what's called a template specialization the we do

that is as we begin a new class definition we write a template with an open closed brackets.

Then we add in the new definition for Klause all started off followed by the data type that we're going

to specialize in string.

Now at this point what I want to do is copy the old code into this definition and then we're going to

change the parts that need to be changed.

So do the Control-C and then a control the right here and then what we need to do is every place where

we see a reference to the we're going to change to string right there here is not a reference to t.

but we need to change the data type of the type of value we're pushing onto the stack.

And of course none doesn't really work as a very mnemonic for a string values who we're going to change

that to a more general term.

Val so we'll change that to Val.

Here's another placeholder we need to change the string.

We can use Val here for this particular using Val right.

There's fine here's where you want to change the zero to empty string.

Go Peke we need to change from t to string.

And that looks like all of our changes go back and scan the file real quickly.

That looks correct.

So let's add some testing code.

We'll just comment out the code from previously

writes string names.

And again we're going to talk about stacks in more detail in a later lessons so I'm not going to spend

a lot of time talking about the use of stacks or didn't we just want to see that our class works correctly.

Well pop a name off the stack and pick again that should be a good test to see if our specialized template

works so it could build and run and there are two names.

So the program did work correctly so to review if for some reason we need to provide a specific type

in a class template.

We can do so using a template specialization and all we do is use the keyword template with empty brackets.

Start the class definition specify the data type we want to use and then make sure that in all the places

where the data type is needed that the correct data type is in place and then everything runs just fine.

So that finishes this discussion of template specialization.

Now we're going to move to the next lesson where we talk about creating class templates where the members

of the class especially the data members are of different types.



```cpp
```
- [Back](./README.MD)
