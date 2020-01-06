# Pre-processing Directives


## So what are preprocessor directives ?

In a C code and the line which is start with hash symbol is a preprocessor directive and the most commonly used preprocessor directives are hashing clewed and hence define. So remember text substitution is performed first before the compiler actually starts the completion 
of source files.Now this is something very important.

And I was going to explain this point more elaborate to me in the coming slides directives can be written and bought the source files as well as header files. Now following is a list of most common preprocessor directives which we use in our day to day coding in C or C++ so we can see that there are many preprocessor directives that is:

|Preprocessor | Function |
|---|---|
|#define | Subsitutes a preprocessor macro|
|#include| Inserts a particular header from another file|
|#undef|Undefinesa  preprocessor macro|
|#ifdef|Returns true if this macro is defined|
|#ifndef|Returns true if this macro is Not Defined|
|#if|Tests if a compile time condition is true|
|#else|The alterantive for #if|
|#elif|#else and #if in one statement|
|#endif|Ends preprocessor conditional|

And if of course there are a few more preprocessor directives but their discussion is not relevant here. So you can see that preprocessor directives always start with a hash symbol and they're called a preprocessor because they are processed before.

Actually the compiler starts completion of sorts. Fine. Are going to understand that how preprocessor directives are executed so please go to these preprocessor directives and try to understand that what is the function of each of these pre-processing directives. So now going forward. Consider the following simple Secord right. So let us go through this code line by line.

You can see that using has defined pre-processing directive. I have defined a as a constant which is 10. Similarly I have defined another constant B as 20. Now I have defined a macro squared X whose definition is X into x. Now in this line I'm checking whether the symbol a has been defined or not. Now please remember that the processing on preprocessor directives happens from top towards the bottom of the source file. So by the time the compiler reaches this line the compiler will know that there is something called it which is already defined. Therefore this condition would be true and because this statement is true. Therefore all the statements which is enclosed between hash if defined and hash and IV will be considered as a part of a code therefore hash include extort at will be included.

Now here we are simply saying to undefine  the symbol A. Now at this point of line in the code the compiler will forget that there is something called A. Ever defined. Now here we are checking whether A symbol has been defined or not. Now of course this condition will going to be false therefore all the code which is written in between this hash if defined and this hash. And it will not be a part of a code and will be completely omitted. So this line will not be a part of a code. Now going forward here we are checking whether the symbol is not defined. Now this condition was going to be true. Why.

Because here we have already undefined the symbol A.So because this condition is true therefore this chord will be considered as a part of a chord. Therefore this line will be considered for completion. And because this line is encapsulated between hash as and hash and if therefore this line will not be a part of a final chord.

So you can see that the preprocessing directives are processed from top to bottom of the source file. So the final source file that you will get after processing all the pre-processing directives will be simply the contents off extort etc file and this line so this will be the final content of the source file after processing all the pre processing directives. So the final source file which the compiler takes as an input before final completion is actually the source file which is ABC Darci.

So remember this file is obtained after applying the text substitution. That is one that has to finds have been replaced by their actual definition and all the hash includes have been replaced by the corresponding files which they include. So the final code which make it to the final version of source file which will be compiled eventually by the compiler.

![Alt text](../images/Pre-processor_directives.PNG?raw=true "Title")


Is this line and a false hash. Include will be replaced by the contents of start. That's fine. And another line which makes it the final code is this line. Right. So this is the second line. So apart from these two lines everything will be unwanted from the final source file. And this is the final version of the file which the compiler takes for completion.

So now going forward. Now let us see how preprocessor directives can solve the problem of duplicate header file inclusion.
