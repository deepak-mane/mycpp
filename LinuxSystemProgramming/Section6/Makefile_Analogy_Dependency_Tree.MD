# Makefile Analogy Dependency Tree 


So guys before diving deep into writing our own make fly Let us understand the concept of dependences

tree.

So make fight valks on the concept of dependency tree.

Now let us understand the concept of dependency tree with the help of an analogy.

So suppose you want to have a delicious meal.

Right.

And you are delicious meal is composed of food compliments.

That is chicken curry chapatti Coke tri's and wine.

So if you have all these four components in your dinner plate then you will have a delicious meal.

Right now each of these for competence in tones are composed of supplements for example chicken curry

is composed of raw chicken onions and chicken powder.

Right.

You need these raw materials in order to prepare chicken curry.

Similarly you can prepare to party only if you have wheat flour and some water right.

Similarly for to have a good dry ice you need draw rice and some water right.

So you can see that in order to have your delicious meal you need to have these four continents and

each of these four can put an intern is dependent on competence.

So you can see that this diagram takes the shape of a tree.

Let us call that root of the tree that is that delicious meal is that little zero the competence at

level 1 is the components which is a prerequisite to have a delicious meal.

And the components at level 2 are the subcomponents which are required to prepare each of the components

present in level 1.

So this diagram is actually called a dependency tree where each component is actually dependent on subcomponent

present at a lower levels.

So now let us go to certain points regarding this tip and and citrine.

So you can see here that the level an element cannot be prepared unless all its immediate descendant

aliment adlibbing and plus one are available.

Right.

So you cannot prepare chicken curry unless you have raw chicken onions and chicken powder available.

Right.

And you cannot have a delicious meal unless you have all the components at level one ready in your dinner

plate.

So this statement simply means that an element which is present at level and can not be prepared unless

all of its prerequisite elements that are subcomponents present at level and plus one are available

then the second point is that root element is the ultimate target that we want to prepare.

So in this dependency tree this is the root.

So the ultimate target that we want to prepare is the delicious meal.

The third point is that preparation of the recipe takes place from bottom to up in the tree.

Right.

And that is pretty much all of this from this dependency tree if element at level and is changed or

updated all ancestors from level and minus one up to the root of the tree needs to be updated.

Now you can correlate this point with this analogy.

Let's say that Suppose I replace this chicken powder with another kind of powder which has another flavor

all together.

So if I replace this chicken powder time obviously the pay is trough your chicken curry will change.

Right.

It will not be same as before.

And because our chicken taste has been changed.

The delicious meal that you are having today is entirely different from that delicious meal that you

had yesterday so you can see that if there is a change in a continent then that change is propagated

along the same branch up to the root of the dependency tree.

If you choose the chicken powder does that impact and the way the taste of your Tea Party.

No right.

Does that impact in any way does it taste or flavor of cooked rice.

Absolutely not.

Right.

So this point is that if element at level is changed or updated all ancestors from the label and minus

one up to the root of the tree needs to be updated.

Now why I'm discussing this and how lucky I am discussing this and I'm OK because the makefile exactly

was asked about this and all Oggy in many trials the delicious meal corresponds to the final executable

on library that you want to prepare the level of continence corresponds to that dependent object file

or external libraries

because you create the final executable or library out of the object file or Ekstrom the libraries and

yark level two components corresponds to source files because from the source files only you create

object files.

So Max Wrubel do an assignment on Makefile and we will try to correlate that how may find Roths exactly

as part of this and analogy.

![Alt text](../images/MakeFileDependencyTree.PNG?raw=true "Title")
