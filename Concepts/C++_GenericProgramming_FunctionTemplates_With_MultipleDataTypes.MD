# C++ GenericProgramming : FunctionTemplates with Multiple Data Types

In previous lessons we've looked at templates both for functions and classes that worked with only one

data type NiSource.

I'm going to introduce you to function templates that work with two templated data types.

So let's get started.

What we want to do is define a max or maximum function that will work with say two different data types

so that we could compare say an integer with a double.

So do that we're going to start out just as we always do with template and then type name we'll have

tea for our first type when we have a comma and then we'll call the second type you.

That's just arbitrary and typically because you follows t you'll see that used a lot we could have picked

any name type 1 type to begin any name for the placeholder will work.

So then for the function's return type we have to decide which type we want to use.

So we're just going to pick T.

And I'll explain why it's important not so much the name but that you're consistent in the return type

followed by the function name.

And there are parameters so we'll have t are one and you are two for this function we're going to use

the conditional operator would say this is a quick way to write a simple IF statement.

And here's how the conditional operator works.

First you provide your relational expression in this case for one to see if one is greater than are

two then the first part of the operator is the question mark the question mark is followed by the value

you want to return.

If the expression is true.

So if one is greater than are two we want this statement to return 1 then the second part of the operator

is a colon that represents our else part.

And here we're going to write our two.

So the net result of this statement is that if one is greater than are two it will return 1.

But otherwise it's going to return or two when we get it to return by adding return keyword before the

operator and then we close off the function definition with a closing curly brace.

Right so let's test this so or create a couple of numbers here.

Let's do double first.

We'll write double.

Number one is equal to thirty five point fifty five

them all right.

Number two is equal to 13.

Now we'll just call the function with no one and 2

let's add a little descriptor.

Value is

melodies build and run them explain a little bit about what's going on here.

All right so the function returns the max value is thirty five point fifty five reason I said you had

to be careful about the return type of this function is that we have to make sure that the data is being

returned by the function will fit into the return type stated in the function definition.

For example if we returned a double into an int bin it might not work.

So let's turn that around.

Let's take them to make it the first argument then number one build and run.

And look what happened max value is 35.

Well clearly that happened because we tried to put a double value into an int return type and the floating

point part of the number was truncated.

So that's why you have to be careful and make sure that you use your arguments correctly with the return

type.

Otherwise you'll have a problem.

Now of course we could have returned and it into that double without any problem.

But to as a larger yet leave someone as a double.

Now we'll build and run again.

And you'll see that 130 works just fine.

And that's because we're not losing any data going from the 130 into double.

That's called a winding conversion and that works without any problems.

To review we can create a generic function with multiple data types that are templated.

If you want to use that term by specifying the different placeholders in the bracketed part of the template

statement then we just have to make sure we use them in the function correctly and you have to pay special

attention to the return type in certain circumstances such as when we're mixing floating point numbers

with integers just because we have to worry about the possible loss of data.

If we try to put for example a floating point value into an integer data type be seen how to have multiple

data types templated in a function.

Now let's see how to do the same thing with classes.

And I was going to come up in the next.

```cpp
```
- [Back](./README.MD)

