# C++ GenericProgramming : Class Templates with Multiple Data Types

In this less I am going to demonstrate how to create a class template that has more than one day type.

In this case two data types were going to recreate a class that's part of the standard template library

the map class and a map is a way to store a key value pairs.

We'll learn more about maps later in the course.

So to create a template we're going to need a type for the key and a type for the value.

So we do that we write template class t come a class you and again t and you are just placeholders that

can be anything and so that we don't conflict with the built in class we'll call our class c map

and the way we're going to write this class way we're going to find the class we're going to have two

vectors one vector of time T will store the keys and the other vector of type you will store the values.

And before I forget we need to come back up to the top here.

Intown include the vector Klause is that real quick.

We go.

So those are two data stores one vector for keys and one vector for values then keep it simple we're

not going to define a constructor we're just going to move straight to the insert.

Function and so its parameters or a key of type T and a value of type you and we'll push back key into

the Keys.

Vector

and we'll push back value into the value vector.

It will also write a method to get a particular item out of the map.

See map 1 of this to a very simple see out statement

really not trying to demonstrate any techniques other than how to use more than one data type template.

Let finisher's our class definition.

So let's create an object number ready to create an instance of our c map type.

So we're going to keep track of grades.

So we need a name which will be a string.

Now we need a grade which will be in it.

So that will be how we specified types we'll call our C math grades here will say grades.

Insert Jones 88 grades.

Insert Smith Naanee and we can say grades get zero C out in line.

Grades 1 C out at 9 months building run the program.

So there are two key value pairs stored in our seamount the.

So again to review when we want to provide more than one data type to a class template.

We simply put a comma after the first time and provide a placeholder for the second type.

In this case it's you.

And then we just simply use the data type any place where we need to make a data type declaration.

For example for values and right here for value just like we have T.

So our keys and t for a specific key and that's all you really need to understand to understand how

to create a class template with more than one data died and we needed a third data type.

We could have easily added one but a lot of times Ill just see one type or perhaps two.

So that wraps up this lesson on multi data types and class templates never ready to move on to the exercises

in this chapter.
```cpp
```
- [Back](./README.MD)
