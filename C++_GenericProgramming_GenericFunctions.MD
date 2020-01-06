# C++ Generic Programming : GenericFunctions

And the last lesson I explain why it's useful to have the ability to do generic programming and the example I gave was a couple of arrays that we created and that we wanted to display with a function 
and because the arrays of different data types we had to create two different functions splay and display straight with generic programming however we could have just one function display that would work for 
any data type.

So in this lesson we're going to learn how to create generic functions the first time we're going to

do is move out to our function definition for display type in the key word template followed by an open

angled bracket less than Sanan the keyword type name and a type placeholder which will use t as that

placeholder.

And that's a convention to use t because it represents a type.

Now all we have to do is wherever we have a reference to the data type that we want to make flexible

or generic We just put t in its place.

So far int array parameter we change that to t or right now at runtime the compiler will replace T with

the actual data type of the array that is passed in as an argument.

So because we've made display generic we can actually get rid of display string right here.

We can come down to our main program and change display's string to just splay in our program should

using one function display both our array and our string array.

So let's build and run the program and there we see put it into view.

Now we have the numbers and the names using one single function call.

So that in essence is our generic function programming works.

Let's look at one more example just to reinforce the idea what we'd like to do is be able to check to

see what is the maximum value of two values of the same data type.

For example two numbers are two strings.

So we're doing some sort of sorting program so we can do that by creating a generic max function.

The first thing we do is start off with template type name T.

Now because our max function is going to return data it won't be a void function.

We're going to put T where the return data type is for the function definition followed by the name

of the function.

Max followed by T for our first parameter data type and then we need to make these references because

we might be working with numbers.

And a compiler will give us a hard time if you don't make the parameters references.

So we use reference types for ARG one and our two but our code is very simple if ARG one greater than

our two return our one else we turn our two and close off the function that's coming out.

The other program or their earlier program that we wrote.

And then let's test this out with a couple of data types will say you want a equals 12 B 24 C out Max

a b and d l double x sequel's two point twenty five double y equals point twenty five C out max A B

L and then string w one equals Apple.

Strain W2 equals Aardvark C-L Max.

W1 to Del rebuild and Ron Oh I see so little mistake X and Y for the second call to max build and run

again.

There we go.

All right into the new it is.

So we see that 24 point five an apple or the max values in each of these calls to Max and we did all

three calls using the same function.

That's defined as a template.

Then there's the definition again.

So review we begin a generic function with the template type name T and then every place in the function

definition where we want a flexible or generic data type.

We replace a specific data type name or the specific data type name with the placeholder T and again

t is just a convention.

We could use anything that T is what you'll see most often in the literature and it makes the most sense.

So that describes how you create generic functions.

Now we're going to increase the complexity a little bit and talk about how to create generic class definitions

so that we can create classes that will work with flexible data types and we'll see how to do that in

the next lesson.
