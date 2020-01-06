# Solution to Duplicate Inclusion of Header Files Using Preprocessing

So guys now going forward.Now let us discuss the solution to the problem of duplicate inclusion of to file which we had discussed. So now doing a little recap here. We had the same set of header file that is attached and be dotage. And following is the definition of DS two header files.So these are exactly the same header files which we had discussed last time and the developer wrote application doxies swords file and let us call this file as was one of application doxies source file. So version 1 of application app.c is actually the code which was written by the programmer or developer.

![Alt text](../images/DuplicateInclusionOfHeaderFile-Solution_1.PNG?raw=true "Title")

Now if you remember that when you apply the tax substitution on the source file we ended up in compiling an error. Why?
Because the inclusion of header file be darte at leads to the duplicate inclusion of header file ablaut edge because of it. In the final code which the compiler compiles. There was duplicate declaration of this or some function. So the last time our code did not compile. 
Now of course that double up work cannot prevent from Hash Including be Dorte at because maybe that part of Warnes to make use of minimum function on Multiply function which is provided by header file be dot H.

Therefore the developer has no choice other than to include both the header files. Now let us see that how pre-processing directives can prevent the problem of duplicate inclusion of header file. So of course there is no need to make any changes in application Doxey fine as a solution to this problem. The changes needs to be made in header files so the content of the header file needs to be sandwiched between hash if not defined and the corresponding hash and if pre-processing directive Similarly in rebought header file just Sandwich's the tar content of dot header file in between hash. If not defined pre-processing directive and the corresponding hash and if pre-processing directive.

So this is a technique which we use in order to avoid the problem of duplicate inclusion of header file in C and C++. So now let us see that what is the impact of including these pre-processing directives in the beginning and end of the header files. So now giving the revised definition of how to find a dot at and be dot edge. Let us now apply the text substitution in the similar way that we applied before so you can see that in the first POS the pre-processing directive hash include it thought as it is replaced by the content of Daut etc file and the pre-processing directive has to include rebought as is replaced by the content of VIDOT at the head of line.

![Alt text](../images/DuplicateInclusionOfHeaderFile-Solution_2.PNG?raw=true "Title")

And of course this has to find is replaced by its definition in the source file. So what do we opt in after the text is Dushan pass one. Is the version 2 of the source. Fine. Now this version of the source file still contains one hash. Include statement. So again apply the tax substitution POS tool and we will get the version 3 of application doxies source file so you can see that in version 3 of the source file. This statement is replaced by the content of a by the content of a dot header file. Now in version 3 of the source fil there is more hash. Include pre-processing directive anywhere. So remember this is the version 3 off application doxies source file. And now going forward this is the version 3 off application dot source file which we have continued from the previous slide. Now as a final step of tax substitution phase we will now process all the conditional pre-processing directives from top to bottom. So as a result of processing conditional pre-processing directives there will be some part of the code which will be completely omitted out and will not be a part of final compilable code. So now let us process all the preprocessor directives from top to bottom so the first line says that.

![Alt text](../images/DuplicateInclusionOfHeaderFile-Solution_3.PNG?raw=true "Title")

If not defined symbol a. Now of course there is no symbol. The compiler has seen yet as it is a first line of the source file. Therefore this condition would be true and the compiler will define the symbol A. So this line would be a part of the code.Similarly this line will be a part of the code and this line also in the same way the compiler has not yet seen the symbol be there therefore this condition will be true. Now the compiler has defined the symbol B. Now this condition will be false. Why it is false because the compiler has already defined the symbol. Therefore this condition will be false. This will not be a part of code so going forward this will be a part of the code. This will be a part of the code and this will be a part of the code. So the remaining lines in this file will obviously be a part of the code. Now after preprocessing all the conditional pre-processing directives from top to bottom. Now remove all the statements which starts with hash.

![Alt text](../images/DuplicateInclusionOfHeaderFile-Solution_4.PNG?raw=true "Title")

So the final code that you get is the reason for of application Dotsie file and you can see that in this final version of application Doxey file. There is exactly one declaration of some function and therefore discord is compilable code. So file aeronaut as has been prevented from including an application multiple times. Why? Because off hash. If not defined preprocessing directives. So now make a rule from now for the rest of your life that whenever you write a header file make it as a principle of your life that you always sandwiched the entire content of the header file with hash. If not defined pre-processing directive. In fact in the production code if you write a header file without using this technique you will be definitely reprimanded by a manager ADI or whatever you will. 

So now you can see that it really doesn't matter how many times you hash include the same header file directly or indirectly in the same source file. This technique will prevent the inclusion of same header file multiple times in the source file. And your code will always compile. So let summarize this solution so we can see that this is the final version of source file. Then the header file was not Sandwich's to using hash. If not defined preprocess inductive. And in this final version of source file there were duplicate declaration of the function sum and because of this the completion of application RC file failed but in the second case we have application Dotsie 
file in which there is exactly one declaration of this function sum.

![Alt text](../images/DuplicateInclusionOfHeaderFile-Solution_5.PNG?raw=true "Title")

It is because in the header file we have used that technique of pre-processing directives to prevent the duplicate inclusion of header files and therefore this combines. So this shows the comparison between the final version of application Doxey file van pre-processing 
directive technique was not used and when preprocessing Darick the technique was used to prevent the duplicate inclusion of header file.
So make a principle of your life that you will write a header file starting with hash. If not define an ending with hash and if.












