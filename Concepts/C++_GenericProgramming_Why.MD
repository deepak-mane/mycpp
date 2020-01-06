C++ Generic Programming: Why is Needed ?

This chapter introduces the concept of generic programming engineering programming just means that we

can write code to perform certain tasks without specifying the data type.

For example of a return value for a function at compile time but rather we can determine the data type

at runtime so that we can create more flexible programs.

In this last I'm going to give you a motivating example of why we need to Nurick programming.

So first US to say we want to create a simple array and we'll make it a smaller array of only 10 items

so we write in little loop to create the array

and we're finished.

Now we want to display the array but we might want to display it many times so we don't really want

to have another for loop throughout the program what we need is a function a void function that displays

the array.

So I come up to our function area we'll call it display

and essentially it's the very same thing as our loop for it equals zero less than size plus plus I see

out the race of why what is put in space to make it simple you will see at an end at the end.

So now we going to have our function call and let's build and run this program.

But then when you see it so there are 10 items and that's really quite simple.

Now let's say in the same program we needed to create an array of strings say names.

The first thing we need to do is come back up to our plan includes and include the string class.

There we go and then we say string names will keep it size

when in fact we'll just do it like this.

I can think of 10 names.

Now I'm ready to display this set of names but I have a problem if I want to use my display method as

is I have to change the data type of the array parameter.

So instead my only other solution is to create yet another function.

I'll just copy and paste and make the changes I need to make.

We have to call it something else we'll call it display string.

Change this argument to string and where we want to call the function just like so

build and run and there's our names.

These are essentially the same functions that do the very same thing.

But because we're dealing with different data types with one array to the other right we have to create

two distinct functions to handle the different data types of the arrays.

So what we would rather do is write a single function display that then has what's called a template

to allow us to change the data type of the array when we call the function.

And that's what generic programming does.

And starting in the next lesson we're going to see how to create templates as a way of performing generic

programming in C++.

So we're going to begin to see how to do that in the next lesson.
