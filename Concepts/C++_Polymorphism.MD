# C++ Polymorphism
The primary usage of polymorphism (OOP's)  is the ability of objects belonging to different types to repsond to <b>method</b>,<b>field</b>,or <b>property </b> calls of the same name, each one accoprding to an appropirate type-specific behavior. The exact type of the object is not necessary to be know in advance and so the exact behavior is determined at <b>run-time</b>(this is called <b>late binding</b> or <b>dynamic binding</b>)

In C++ polymorphism is mainly divided into two types:
1. <b>Compile time Polymorphism:</b> This type of polymorphism is achieved by -
   1. <b>Function Overloading:</b> When there are multiple functions with same name but different parameters then these functions are said to be overloaded. Functions can be overloaded by change in number of arguments or/and change in type of arguments.
   2. <b>Operator Overloading:</b> This is is aceived when the operator (‘+’) for string class is concatenating two strings. We know that this is the addition operator whose task is to add two operands. So a single operator ‘+’ when placed between integer operands , adds them and when placed between string operands, concatenates them.
2. <b>Runtime Polymorphism:</b> This type of polymorphism is achieved by -
   1. <b>Function Overloading:</b> When a derived class has a definition for one of the member functions of the base class. That base function is said to be overridden.
