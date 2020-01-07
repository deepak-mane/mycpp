# MakeFile Assignment Part1
![Alt text](../images/MakeFileAssignmentPart1_1.PNG?raw=true "Title")

So guys we will going to discuss one example using which we will all going to learn how to write our  very first line. So you need to go to this direct report that is Library designing slash make file assignment. So on this slide I have shown the data structure which is present inside the. We make file assignment so you can see that this data print contains three other directories. That is that is common Matha directory complex math directory and trig triadic tree. 

You have three other directories inside. Make file assignment directory right and along with these directories you have one source file called Main Dotsie And this source file the main function is implemented. And because we have a source file in which main function is implemented it is desirable that we need to create an executable and inside the same directory We have a makefile. And it is this makefile that we need to write. Now if you look at each of these directories that is inside the Coleman underscore Matt you have one
source file and had a file. Now I urge you to open this common underscore math doxies source file and see that I have really implemented very obvious mathematical functions such as add subtract multiply or do by two numbers. 

In fact I can show you one of the source file. So you can see that inside the source file. I have simply implemented these functions right. Similarly if you go and open complex underscore math Doxey file you will find very simple functions to add or subtract to complex numbers. Similarly under the directory tree underscore Matt there is a file click underscore Matha Dotsie and Pyg underscore Matha dot etch. This works fine implements very obvious trigonometry functions. So if you just have a quick look in each of the source file you'll be able to understand the functionality provided each of the source file.

So our goal is to understand how to write this particular makefile. This makefile will create an executable as well as a library which is required to create an executable. So our anti-med girl as a part of this assignment is to write this particular Makefile and this makefile will take an import source file and the header file that we have so you can see that we have common underscore my doxies source file complex and format doxies source file and Trico underscore maps Dotsie source file along with main doxies source file.

Right and we also have the corresponding header files so search right and header files is the raw material which is taken as an input by this makefile. And eventually people going to create one executable. Why are we creating an executable. Because we have a source file. Man Doxey in which there is a main function. Whenever you have a source file in which there is a main function it means that you need to create an executable because the execution of the executable starts from men and the second and product that we need to create is a library called Lipkind 2.8. This library will going to encapsulate all the mathematical functionalities that is provided by Goleman underscored by the doxies source file. Complex underscore the math Doxey a source file and trig underscore to doxies source y. So we're going to have a library which will going to provide a double up on the mathematical functionalities that we have sometime let us discuss that part our dependency tree or Phlip considered a static library would look like.

![Alt text](../images/MakeFileAssignmentPart1_2.PNG?raw=true "Title")

So going forward so let us suppose that we want to create a library Lipkind 2. A which will be a collection of all mathematical functions defined in all the source file that we have. So the final dish or dog delicious meal that we will going to prepare is the Lipka 2.8.  Now going by the number you are delicious menu. What are the prerequisite components which is required to prepare lip Kelcey dot a static library. Now we know that we create a library out of all don't object files so we need all the object files as a prerequisite component in order to prepare live Kelcey not a static library. So libraries are created out of object files of source files and of course the object files are created out of source files. Right.

![Alt text](../images/MakeFileAssignmentPart1_3.PNG?raw=true "Title")

So you can see that the dependency tree to prepare Lipkind Siddharta is static library is pretty much simple and straight. Right. We have source file at the bottom most level of this dependency tree from the source file we will going to create object files and once we have all the object files then we will be in the position to create our final static library Lipka Altidore the next let us discuss step by step. And we write Makefile in order to create our final dish that is look he taught a static library as an end product.




