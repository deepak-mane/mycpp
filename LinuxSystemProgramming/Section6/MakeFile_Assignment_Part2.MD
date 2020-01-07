# MakeFile Assignment Part2.MD


```sh
cat Makefile

TARGET: exe
common_math.o:common_math/common_math.c
        gcc  -c -I common_math common_math/common_math.c -o common_math/common_math.o
complex_math.o:complex_math/complex_math.c
        gcc  -c -I complex_math complex_math/complex_math.c -o complex_math/complex_math.o        
trig_math.o:trig_math/trig_math.c
        gcc  -c -I trig_math trig_math/trig_math.c -o trig_math/trig_math.o
libcalc.a:trig_math/trig_math.o common_math/common_math.o complex_math/complex_math.o
        ar rs mylibmath.a common_math/common_math.o complex_math/complex_math.o trig_math/trig_math.o
exe:main.o libcalc.a
        gcc  main.o -o exe -L . libcalc.a -lm
main.o:main.c
        gcc  -c -I common_math -I complex_math -I trig_math main.c -o main.o
clean:
        rm common_math/common_math.o
        rm complex_math/complex_math.o
        rm trig_math/trig_math.o
        rm main.o
        rm libcalc.a
        rm exe
```
So guys continuing from the previous slide in make Prialt read write That's right and rules have the following syntax so you can see that rules have three parts 
+ the first part is what we want to prepare,that is the final dish that we want to prepare.  
+ The second part of the rule is that what other raw materials you need in order to prepare the final dish.
+ And the third part of the rule is the recipe all the steps that you will follow in order to prepare the final dish from the raw materials that you have.

So the make file rule has these three parts. Now let us take an example regarding how to write a make file rule. So if you recall the dependency tree in order to prepare Lipka Siddharth is a static library. You can see that in order to prepare this Lipka else he thought a static library. You first need all the object files in hand. So let us discuss the rules in order to create each of these object files so going forward.

![Alt text](../images/MakeFileAssignmentPart2_1.PNG?raw=true "Title")

So in this case the final dish will be the object file that we will going to prepare and offcourse we know that the object files are created out of the source file. So the raw material will be the source file. And what does the command to create an object file out of source file. Now you already know how to compile our source file to create an object file.  So just write a simple compiler command that does : 

```sh
common_math.o:common_math/common_math.c
        gcc  -c -I common_math common_math/common_math.c -o common_math/common_math.o
Note: below flags 
-c stands for compilation
-I <path> is used to specify the directory/location of all dependent header files.
-o the name of the object find that you want to create
```

The compiler will search in this directory to locate at all the dependent header files which are hash included in the source file. If the header file which is included by this source file is present in multiple directories you can repeat '-I' flags followed by directory multiple times in the same line.
We will see this example in the next slide. So just remember, '-I' flag is used to specify that directory or location of header files. Next just specify the source file which you want to compile and using '-o' specify the name of the object find that you want to create.

So you can see that this is the part 3 of the rule.Similarly you can create other object files in the similar fashion so this is the complex_math.o (object) file which requires complex_math.c as a raw material source file and the rule to create are complex or the school mascot or object file is the following

```sh
complex_math.o:complex_math/complex_math.c
        gcc  -c -I complex_math complex_math/complex_math.c -o complex_math/complex_math.o
```
So exactly in a similar manner.You can also create drag underscore might start all object file following the same approach.

```sh
trig_math.o:trig_math/trig_math.c
        gcc  -c -I trig_math trig_math/trig_math.c -o trig_math/trig_math.o
```

So as per the dependency tree,now we have all the elements ready which are required to prepare __libcalc.a__ static library. Right so where and when elements means that all the object files on which __libcalc.a__ static library is directly dependent. So now we have all the object files ready.

![Alt text](../images/MakeFileAssignmentPart2_2.PNG?raw=true "Title")

We are not in a position to write a rule which will prepare __libcalc.a__ static library as a final dish and we already know that static libraries need object files as raw materials so specify all the object files separated by space and you already know the command to create a static library out of all that dependent object files.

```sh
libcalc.a:trig_math/trig_math.o common_math/common_math.o complex_math/complex_math.o
        ar rs mylibmath.a common_math/common_math.o complex_math/complex_math.o trig_math/trig_math.o
```
So after this is step we have now created our library which is __libcalc.a__ right. Now, next we also want to create an executable because we have main.c source file. So now let us discuss the dependency tree of executable. So inorder to create an executable as a final dish the data dependent component is an object file correspond to the source file which contains main function. Since main.c is such a source file therefore we need that as an object file in order to prepare this executable also our executables will make use of the library that we have just prepared. So the external library on which our executable is dependent is live considered.

![Alt text](../images/MakeFileAssignmentPart2_3.PNG?raw=true "Title")

And note that an executable is also dependent on another external library which is a standard library called __libmath.so__. Now the question is that WHY? our executable is dependent on this external standard library. __*So it is because infile trig_math.c , if you open this file. I have included the standard math.h a header file and because I'm using sine and consine functions which are inbuilt in C library these functions are actually coming from liberary math.h*__. You know that in order to create final executable we need to include all the external libraries on which our executable is dependent.

![Alt text](../images/MakeFileAssignmentPart2_4.PNG?raw=true "Title")

So __libmath.so__ is the standard external library which is already existing in your system. So guys going forward now we have discussed our dependency tree to create our executable as a final product.

So now let us discuss the rule that we will going to write in our makefile which honors this dependency tree so executable is dependent on of course 
- the main.o object file and 
- the external library 

```sh
exe:main.o libcalc.a
        gcc  main.o -o exe -L . libcalc.a -lm
```

The standard external library that is __libmath.so__ need not to be specified in the rule. But while writing a recipe to create a final executable it is important that we specify all the libraries on which are executable is dependent. So here we have the specified the external library which is prepared by us.
And here we have the specified standard libmath.so as a library. You can see that this standard library can be specified by using simply '-lm' as a shorthand.

__*We already know that the step in which we create a final executable is called linking*__ . And of course this main.o object file also needs to be prepared. So we need to write one more groon to prepare main.o object file as a final product. And you can see that main.o  object file is dependent on all the header files.

```sh
main.o:main.c
        gcc  -c -I common_math -I complex_math -I trig_math main.c -o main.o
```

If you open a file main.c you can see that in this main.c file I have Hash included all the header files right. So it is for this reason that you need to specify all the directories using '-I' switch because these directories contains the header file which has included in the source file.

So we have discussed all the __*RULES*__ that we need to put together in one single makefile. So now let us discuss how can we do that.

So guys know next we will going to write make while in order to create this final executable. So you can see that on this black window on the right hand side I have opened the editor and I will code up my file. So the very first thing that is in the very first line of the make file you have to specify the final product that this makefile is supposed to prepare.

![Alt text](../images/MakeFileAssignmentPart2_5.PNG?raw=true "Title")

In our case our end product is the final executable and therefore the syntax to specify the end product is some variable. So Target is not a keyword. It is just some variable separated by a colon and the name of the final product that you want to prepare in case you want to prepare multiple end products and you can specify all those and products separated by space.

- In this first line of the find that after that we need to specify the rules one after another as part a dependency tree. So you can see that if we recap we discussed these set of rules to prepare the object file. So just to specify these set of rules as it is that is copy paste in this makefile so we can see that  I've simply copy pasted all these rules in this makefile as it is. And after that we have three more rules. That is a rule to prepare __libcalc.a__ .And so here you can specify the rule Lippe considered it as it is of course. 

- And then we had two more rules. That is the rule to prepare the final executable and the rule to prepare main.o object file. So you can specify these two rules as it is in the make file. So you can see that I had done nothing. I simply copy pasted the rules that we have discussed in this makefile. Please note that you can specify these rules in any order you want the order of the rules in the make file do not matter. 

- And after that I will specify one special rule whose name is __clean__ and I will discuss about this rule in detail. Basically in this rule will delete everything that was built by this makefile . Be it, Object files, the static library, used shared libraries, executables or any other product which was prepared by this makefile. I will discuss about this __clean RULE__ in detail in the next video. 
        
I have this makefile ready and now we will discuss that how the execution of this makefile happens step by step. Also please be careful that while writing a Makefile make use of tab in the front of a line where you specify the recipe. Please use TAB and do not use spaces. So let us discuss that hired this makefile actually works.

