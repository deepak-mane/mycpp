# C++ Polymorphism : Exercise 2

This exercise we're going to demonstrate polymorphism using abstract classes.

What I'm going to do is I'm going to create an abstract Animal class and then drive to classes from

that dog and cat and not trying to be overly practical here or just trying to demonstrate the techniques

involved in pure virtual functions and abstract classes.

So what we have is an Animal class we had public to this real quick and we make a talk function a pure

virtual function so that each derived function is going to implement its own version of talk which is

where our polymorphism comes in because the compiler is going to understand that a dog's version of

talk began about to implement right now will be different than a cat's version.

So there's our dog talk

now it's build to cat class

close off the definition.

And in the next race is there it's bring that up a little bit we go come down to it main and we'll say

dog Fido.

There we go cat kitty and then we can just write Fido talk.

And Kitty talk and the compiler will know which version of talk to call based on the object that it

is you see.

Once again my typos may be instructive to you left off the semi-colon.

Now at the dog class definition so that caused an error in my cat class definition.

Try again.

So it's like I did it all the way down the line.

There we go.

Now let's try it one more time.

And we have success.

OK.

So dog Fido says bowell and our cat kitty says meow.

So here's another example this time using abstract classes where we can have a single function talk

and the compiler will figure out how to use it based on the object that it's connected to.

And here we took the idea one step further by including an abstract class which each class inherits

from and I understand that because it's a pure virtual function each class had to implement at least

the talk function.

And of course it could have added its own functions and fields if it wanted to.

I didn't add anything else that I can isolate just the pure virtual function talk to demonstrate how

it works.

And with that that closes out our chapter on polymorphism.

```cpp

```
