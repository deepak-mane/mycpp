 # Final MakeFile
 
So guys you can see the content of the makefile that I have written. Right. And you can see that in this make trial I have written down all the rules that we have discussed so far as it is.
It's a complete copy paste.

I've simply copy pasted all the rules that we have discussed in this makefile.

Right.

So you can see that in the first line just specify the final product that you want to prepare.

In our case we want to prepare the final product which is executable.

So the name of the executable is simply X-C.

Note that this target is not a keyword.

You can write anything that you want here.

For example you can specify final product column X-C.

Right.

And after that I haven't specified all the rules one by one.

Right now you must be thinking that in what order should you specify these rules.

So just to let you know that makefile execution do not happen.

Line by line from top to bottom.

Rules do not execute in the order they are specified in the makefile.

In fact rules execute as part of the Depth first Traversal dependency tree.

Now if you recall the Depth First Alogithm for such traversal of  tree than you would going to understand

that Tarrell rules were going to execute in a makefile for that information.

This data first search is also called post-traumatic evidence of a tree.

So to make certain the very first line the midpoint will come to know that we want to create a final

product whose name is X-C.

So to make people search among the list of rules in this makefile and try to locate the rule whose name

is X-C so such as this one that is line number two because here we have the rule name right.

So the makefile will now see that.

What are the components required in order to create the final product.

So the may be looked at it has to create meaning or object find farmer by Lipka Siddharth a static library.

Right.

So as a result now the Booneville search in the list of rules I try to look at that rule which is responsible

to prepare main But object file.

So such a rule is this one right.

So the Maktoum will execute this rule because it is dependent on a source file and source file is already

an existing entity.

So to make an exec you read this rule first after this execution is complete.

When Daut object file will be available.

Now the next rule that the pool will find to look at is the rule which will prepare Lipkind Siddharth

a static library.

So such a rule is this one that is in line before Samick Booneville now see that on what components

is the Lipkind see brought a static library is dependent.

So clearly we know that in order to create a static library we should have all that dependent object

files right.

So the make believe will now see that it has to prepare take mat data or object file.

So now it will search in a list of rules which prepare strict math Daut or as a final product.

So such a rule is this one right.

So the second rule that will be executed will be this rule.

Similarly make tune now try to look at a rule which prepares common underscored Matha Docteur object

file as a final product.

So such a rule is this one right in the similar way the make do and will try to locate a rule which

will prepare complex underscored my or object file as a final product and such a rule is this one right.

So you can see the order of execution of the rule so you can see the order of execution of this rule

really is not dependent in the order in which they are specified in the makefile.

Now after the execution of rule number for all the compliments which are required to prepare Lipkind

Siddharth a static library will be ready and available.

Right.

So the pool we're now going to execute this rule number 5 and after execution of rule number 5 Lipka

as the door is tatic library will be available now coming back there's the MC pool had started from

that is prepossession off executable file file so the components which are required to bird final exit

file are all antidotal right and up to the execution of all these five rules.

Both of these components are now available to make tool right.

So because all the components are available therefore make Booneville execute.

Rule number 6 and after the execution of rule number 6 the final executable this created let us run

this make pride and verify whether this rules executed in the order in which we have discussed so now.

So now I'm in this directory and I have this makefile which we have just discussed.

So in order to run this makefile you simply run the command make and you can see that the rules execute

exactly in the order in which we had discussed.

And you can see that the final product that is created by this make file is a final executable.

Right.

And you can see that just before the final executable was created live Kelsey dot a static library was

also created.

So this is how makefile looks.

So one thing to note here is that I have specified an additional rule here with named clean in makefile

we always have to specify a rule called clean.

This rule is used to actually delete everything that was burned by this make fine.

So you should clean up all the object files all the libraries and all the executable in this rule using

autem come on.

So to execute this rule you simply run MC and provide the rule name and it will run the clean rule.

In fact you can specify any rules which you have which you have mentioned and that make fine.

For example you want to create only static libraries or specify the rule name after the make command.

And this will and this will build only Lipkind Siddharth.

As a final product you can see that there is no executable created because we wanted to create only

liberals who don't a as a final product by specifying the rule name after the make.

Come on.

Also note that in one directory there has to be only and only one Makefile.

You cannot create multiple make files add in a single directory.

Right.

So here you can not create another makefile.

And there has to be only one Makefile in one directory.

So I hope I'm able to explain to you the concept of writing makefile.

And henceforward to my novel you write to your programs of it's involved multiple source files and linking

with multiple libraries.

You are always advised to write make files in order to build your programs.
