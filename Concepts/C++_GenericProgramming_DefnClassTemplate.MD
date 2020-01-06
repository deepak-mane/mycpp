# C++ GenericProgramming : Defining Class Template

In the last lesson we saw how to create function templates so that we can make functions generic so that they will work with multiple data types. In this lesson we're going to see how to do the same thing with a class and a class definition. So let's get started. The first thing we have to do is define our class.

We're going to do is we're going to create a very minimal class to implement stacks. So to do that we're going to assume that we're storing integers on a stack so we're going to have a data store to store the data. It's int. Now we also have a variable called top which is going to be used to keep track of where we are in the stack. As you may or may not know the stack is a last in first out data structure and items that are put on a stack to a process called push. The last one on would be the first one taken off the stack do a process called Pop. We're using an array to store the elements and so we use top as a variable to keep track of where the top of the stack is.

We've already declared our private section so for our public section first of all we're going to have a constructor. What it will do is it will top equal to negative 1. I'll explain how that works in just a moment. And that's all the constructor really needs to do. Now we're going to have a void function push that will increment top by one. That will give us the next open position in the array and then we'll store the number that we are trying to put on the stack in that position. Walls of a pop function that will simply return the item. We can make this a data returning function or not.  I believe I'll make it data returning You could also be void. We'll make a data returning in this particular case. So what happens here is we're going to decrement taught by one actually let's do it a different way. Pop can only return the item that's at the top of the stack so we're going to say that we're going to decrement taught by 1 and then we're going to return Val I needed to store the top element into a variable  before I decremented top that then I can just return what's involved that will be what comes off the top of the stack just to have it here we probably won't use it in the least done in this particular case is peak and peak will simply show us what's on the top of the stack without actually removing the element from that's all we need to get started.

That's not a complete implementation of a stack but it will work for the purposes of this demonstration so we can say stack numbers and we can say numbers push twell numbers push 22 and so on just to check things out we'll peak will pop here we're going to have to do something with that. We don't value equal numbers pop although we're not going to do anything with that return value is just there. And then we can speak again so we'll just copy and paste that code. And all I'm doing here is just verifying that the stack works as I built it. So we'll run this code real quick build and run. So we pushed on 12 and then 22. We took a peek at the top that was 22. Then we took a peek at the top again after we popped off the top and we got 12. So that's correct. Now here's the problem with the stack Klause the data store that storing the data is declared as an
integer array. So if I want to use some other data type I can't because I've committed the stack to storing only integers.

So what we want to do is like with our functions in the previous lesson use a template so that we can determine the type of the stack and the type of the data that stored on the stack when it's time to actually use it. So the way we do that it's very common to how we did it with functions is we're going to use template type name T just like we did before. And then any place that we need a reference to a type will replace that reference with T. Now of course top can stay the same because that's just a number that we're keeping track of. But right here we're pop returns in and we're going to have a return of T and peek where it returns a it we'll have it return empty. 

So now let's see how we would actually declare the stack. And just like with vectors all we do is provide the data type after the name stack. So if we want an entire stack we put it right here let's build and run and see that it works and it does we have the same result. Let's change it to double try again. And again it works just fine. So that is how you create a template class you simply add the keyword template type name of T and then any place we need a data type that's t we simply use the placeholder rather than a specific data type name.

And then at compile time when we declare the type in the declaration the compiler will replace t with that data type. Now there is one problem with this implementation. What if we want to use strings strings work fine except one problem. I didn't clear out before right here. The element in the top and I didn't do that on purpose I wanted to show you with the effect before we Dickerman top. We need to clear out what's stored in top because top is just a variable just an index number. We don't want to keep the value that we've stored in the stack after we've popped it off. So where that value is stored in the array the underlying array in data store would need to remove that or at least set it back to the erase default value. So we can set that value equal to zero. And that works great for numeric data types.

But what if we're working with strings if we are trying to work with strings then the whole implementation will fall apart __*because we get to this line when we try to store a number 0 in a string array or we're going to have an error but there is a solution to this problem and we're going to look at it in the next lesson and that's called a template specialization or a class template specialisation.*__ So we're going to see how to modify our stack class with that specialization in the next lesson.


```cpp
//============================================================================
// Name        : Sec3_GenericProgramming_DefiningClassTemplate.cpp
// Author      : Deepak Mane
// Version     : 1.0
// Copyright   : Your copyright notice
// Description : GenericProgramming in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

template <typename T>
class Stack {
private:
	T datastore[100];
	int top;
public:
	Stack() {
		top = -1;
	}
	void push(int num) {
		++top;
		datastore[top] = num;
	}
	T pop() {
		int val = datastore[top];
		datastore[top] = 0;
		--top;
		return val;
	}
	T peek() {
		return datastore[top];
	}
};

int main() {
	Stack<double> numbers;
	numbers.push(12);
	numbers.push(22);
	numbers.push(32);
	numbers.push(42);
	cout << numbers.peek() << endl;
	int value = numbers.pop();
	cout << numbers.peek() << endl;

	return 0;
}

```

- [Back](./README.MD)
