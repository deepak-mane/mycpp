# C++ Polymorphism : Exercise 1

This exercise we're going to revisit unexercised from last chapter where we built a quadrilateral class

and then built two derived classes from it.

We'd like to do in the exercises demonstrate how to use polymorphism with these classes to be able to

display objects of multiple types from a vector.

So if you recall we had the quadrilateral class followed by the trapper's the class followed by the

square class where we're going to need to do is make our display method virtual in the quadrilateral

class.

And let's also copy it because we're going to need it in the next two classes.

So we're going to come down into our trapper's or class put his face there at a display function also

calling it virtual change that the trapper's Zoid will come down to the square class.

The same thing change that to square.

So now we have the ability for our display method to determine which type of object is being called

at runtime.

So let's modify our main program.

We have two objects.

Well the first thing we need to do before we do that can include vector into the program.

Let's do that so the vector in

its right here are going to say vector.

Would that be a pointer will cause a vector Quad's never going to say Quad's pushback and then a reference

charge to one object Quad's push back a reference char as one object now would write a for loop equals

zero.

I Clive's dot size plus plus high quad Sabai arrow symbol display like the check are coded at all x

there.

Looks correct.

So it's build and run the program and there we go so by making the display method Virtual I can put

objects of trapper's or square type into a quadrilateral vector.

Yet when we try to bring the objects back out of the vector the compiler can figure out what type of

object it is and call the correct display method to show us the right type of object we need to traverse

order Square.

So that's the solution to the problem we had back in chapter 1.

And that wraps up this exercise.

And now we're going to look at one more exercise that deals with polymorphism.


```cpp

```
