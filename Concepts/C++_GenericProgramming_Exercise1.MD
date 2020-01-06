# C++ GenericProgramming : Exercise1

This exercise we're going to create a generic function for testing to see if two values are equal.

So let's go ahead and get started.

We begin our function definition with the template tightening key to represent our Kineret type in the

type will be for the arguments or the parameters of the function equals the name of a function will

return a boolean value either true or false.

So that's the name the function equals and then we use our type of placeholder for the first parameter

and for the second parameters that we can compare many different types the code itself is very straightforward.

We simply look to see if value 1 is equal to value to that is we return true

or otherwise we would term false and that's all there is to it.

So now let's write some code to test our function.

We start out with two integers we'll just do a and b to make it simple.

Let's make that a little readable.

So we have a good value one big its value to and we can say if equals a b c out.

So we're going to say that A and B are equal.

Else we'll write out that A and B are not equal.

Let's run that and see what we get.

One and two are not equal.

And sure enough that's correct.

Now let's try the same function with different data types.

This time we'll do strings will do string word one word to.

And here we're going to set them to the same values so we can do this string of assignments where we

can say I left out of two there and say hello is assigned a word to and word two is values assigned

to Word 1.

That's just a shortcut for signing one value to multiple variables.

Now we'll do the same test with equals

That's drop down to finish that up right.

So then we can write else we're in one and we're two

equal

just like Beth.

Take a look.

Now let's build and run the program.

I see what's wrong with software.

Here is at it again will run again.

And this time it says one and two are not equal and hello and hello are equal.

So let's go back a look at our generic function definition.

We start out with template and type name T being the placeholder for a type and bhool equals and then

we are placeholder t before value 1 in value 2 indicating that we're going to provide that type when

we use the function call in our code.

So then we simply do a comparison and return true if they're equal false otherwise.

Then you see in both examples we pass integers to equals.

In one case and strings to equals in the other case they both work has.

So with that we're finished with this exercise and we're ready to move to the second exercise of the

chapter where we're going to work with template classes.

```cpp
```
- [Back](./README.MD)
