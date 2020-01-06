# C++ GenericProgramming : Exercise2

This exercise we're going to build a list class to demonstrate how to do class template programming by creating a generic list class that can be used with multiple types. The first thing we need to do is include the vector header because we're going to be using a vector to store data for our class. We start out with a template type name T which I've already typed in followed by the name of our class list our only private field is going to be the vector that we're going to store data. And of course we want that to be generic because we want to change the type based on the type of items we want to store in the list.

So we put the T in brackets after the keyword vector and then we're going to cause a vector to store our public S. we'll first include a default constructor with nobody an Add method. And again because the items we're going to add will be based on the data type of the list we use t for the placeholder for the data type of the item to be added and then here we'll use the push back function of the vector class to add an item to the list and then our last function will be a display function. We won't be anything generic about it. Excuse the pun.

So we'll just run right up the code very quickly. It's a typical leap through a vector code and then another close bracket and then a final close curly brace to close the class. Now we're ready to test the class. We'll start out first. We'll write a grocery list so that you string to tell the compiler that I'm going to be adding string data to the list. We'll start out with milk eggs bread and then we want to display it just go ahead and build and run the program so far. 

We're going to run another list in just a minute. So there are three items. Milk eggs and bread. Let's put a space here and then let's begin another list. Our list is going to be grades that are inside your tie. So we're going to put a keyword it in brackets after the class name. West we will add some grades to the list. Display the grades build and run the program again. And there are grades along with the grocery list from previous. So there's much more we can do to the list class but to demonstrate the generic nature of the class all I needed to show is that add items in and to do that I have to create a template at the beginning used the template placeholder the type placeholder wherever I reference a data type.

So for the vector declaration and as the data type for that parameter for ADD and then everything else works normally. Now of course if I had any other functions that required a data type then I would have to use t if that data type refers to the item that's in the list. So that wraps up this exercise and that wraps up this chapter on generic programming.

```cpp
```
- [Back](./README.MD)
