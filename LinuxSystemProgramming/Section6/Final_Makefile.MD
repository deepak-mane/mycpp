 # Final Makefile
 
![Alt text](../images/FinalMakeFile.PNG?raw=true "Title")

So guys you can see the content of the makefile that I have written. Right. And you can see that in this make trial I have written down all the rules that we have discussed so far as it is. It's a complete copy paste. I've simply copy pasted all the rules that we have discussed in this makefile. Right.

So you can see that in the first line just specify the final product that you want to prepare. In our case we want to prepare the final product which is executable. So the name of the executable is simply __EXE__. Note that this target is not a keyword. You can write anything that you want here. For example you can specify final product __EXE__. Right.

And after that I haven't specified all the rules one by one.Right now you must be thinking that in what order should you specify these rules. So just to let you know that makefile execution do not happen. Line by line from top to bottom. Rules do not execute in the order they are specified in the makefile.

In fact rules execute as part of the Depth first Traversal dependency tree. Now if you recall the Depth First Alogithm for such traversal of  tree than you would going to understand that how rules were going to execute in a makefile. For your information this __Depth first search [DFS]__ is also called __*post-order traversal*__  of a tree. So to make certain the very first line in make tool will come to know that we want to create a final product whose name is "__*EXE*__".

So the make tool will search among the list of rules in this makefile and try to locate the rule whose name is __EXE__ .So such as this one that is line number two. Because here we have the rule name right. So the makefile will now see that, what are the components required in order to create the final product. So the make tool will know that it has to create __main.o__ object file followed by __libcalc.a__  static library. Right. So as a result now the make tool will search in the list of rules and try to locate the rule which is responsible  to prepare __main.o__ object file. So such a rule is this one, right. So the make tool will execute this rule because it is dependent on a source file and source file is already  an existing entity. So the make tool will execcute you read this rule first after this execution is complete when main.object file will be available.

Now the next rule that the we will find to look at is the rule which will prepare __libcalc.a__ a static library. So such a rule is this one that is in line before Samick Booneville now see that on what components is the __libcalc.a__ see brought a static library is dependent. So clearly we know that in order to create a static library we should have all that dependent object files right. So the make believe will now see that it has to prepare take mat data or object file. So now it will search in a list of rules which prepare strict math Daut or as a final product. So such a rule is this one right.

So the second rule __2__ that will be executed will be this rule. Similarly make tune now try to look at a rule which prepares common_math.o object file as a final product. So such a rule is this one right in the similar way the make do and will try to locate a rule which will prepare complex underscored my or object file as a final product and such a rule is this one right. So you can see the order of execution of the rule so you can see the order of execution of this rule really is not dependent in the order in which they are specified in the makefile. Now after the execution of rule number for all the compliments which are required to prepare __libcalc.a__ a static library will be ready and available. Right.

So the make too will try to execute this rule number __5__ and after execution of rule number 5 __libcalc.a__ static library will be available now coming back there's the MC pool had started from that is prepossession off executable file file so the components which are required to bird final exit  file are all antidotal right and up to the execution of all these five rules.Both of these components are now available to make tool right. 

So because all the components are available therefore make Booneville execute. Rule number 6 and after the execution of rule number __6__ the final executable this created. Now let us run this makefile and verify whether this rules executed in the order in which we have discussed so now. 

So now I'm in this directory and I have this makefile which we have just discussed. So in order to run this makefile you simply run the command make and you can see that the rules execute exactly in the order in which we had discussed. And you can see that the final product that is created by this make file is a final executable. Right. And you can see that just before the final executable was created __libcalc.a__ static library was also created. So this is how makefile works.

![Alt text](../images/FinalMakeFile_2.PNG?raw=true "Title")


So one thing to note here is that I have specified an additional rule here with named **clean** in makefile we always have to specify a rule called clean. This rule is used to actually delete everything that was burned by this make fine. So you should clean up all the object files all the libraries and all the executable in this rule using __rm__ come on.

So to execute this rule you simply run __make__ and provide the rule name and it will run the clean rule. In fact you can specify any rules which you have which you have mentioned and that make fine. For example you want to create only static libraries or specify the rule name after the make command.
And this will and this will build only __libcalc.a__ as a final product you can see that there is no executable created because we wanted to create only __libcalc.a__ , who don't a as a final product by specifying the rule name after the make.

Also note that in one directory there has to be only and only one Makefile. You cannot create multiple make files  in a single directory.Right. So here you can not create another makefile. And there has to be only one Makefile in one directory. So I hope I'm able to explain to you the concept of writing makefile. And henceforward when you write your programs which involves multiple source files and linking with multiple libraries, you are always advised to write make files in order to build your programs.

## Simple Makefile
```make
TARGET ?= a.out
SRC_DIRS ?= ./src

SRCS := $(shell find $(SRC_DIRS) -name *.cpp -or -name *.c -or -name *.s)
OBJS := $(addsuffix .o,$(basename $(SRCS)))
DEPS := $(OBJS:.o=.d)

INC_DIRS := $(shell find $(SRC_DIRS) -type d)
INC_FLAGS := $(addprefix -I,$(INC_DIRS))

CPPFLAGS ?= $(INC_FLAGS) -MMD -MP

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o $@ $(LOADLIBES) $(LDLIBS)

.PHONY: clean
clean:
	$(RM) $(TARGET) $(OBJS) $(DEPS)

-include $(DEPS)

```

## Handle both C and C++ together Makefile snipped
If your requirements for building c/c++ programs were:
+ Out-of-source builds (object files get dumped in a separate directory from the source)
+ Automatic (and accurate!) header dependencies
+ Automatic determination of list of object/source files
+ Automatic generation of include directory flags

### Out-of-Source Builds
Artifacts from a build to end up in some directory (I usually name it “./build”) that’s separate from the source. This makes is easy to do a clean (just rm -rf ./build) even if other artifacts besides the ones generated via Make end up there. It also makes a lot of other things, such as grep’ing the source, a lot nicer.

To do this in Make, you mostly just need to prepend your output directory to the beginning of your pattern rules. For example, instead of a pattern like: %.o: %.c, which would map your .c files for .o files in the same directory, you can use $(BUILD_DIR)%.o: %.c.

### Automatic Header Dependencies
Handling the header dependencies is perhaps the most tedious thing about using the classic Make technique. Especially since, if you mess it up, you don’t get any explicit errors–things just don’t get re-compiled when they ought to be. This can lead to .o files having different ideas about what types or prototypes look like.

There is documentation for this here. However, the docs seem to assume that the dependency files are generated in a separate step from the compile step, which complicates things.

If you generate the dependency files as part of the compilation step, things get much simpler. To generate the dependency files, all you have to do is add some flags to the compile command (supported by both Clang and GCC):
```
-MMD -MP
which will generate a .d file next to the .o file. Then to use the .d files, you just need to find them all:
DEPS := $(OBJS:.o=.d)
and then -include them:
-include $(DEPS)
```
### Automatic Determination of List of Object/Source Files
First, find all of the source files in the given source directories. The simplest and fastest way to do this was to just shell out and use find.
```
SRCS := $(shell find $(SRC_DIRS) -name *.cpp -or -name *.c -or -name *.s)
```
But because Make works backward from the object files to the source, we need to compute all the object files we want from our source files. Just prepend a $(BUILD_DIR)/ and append a .o to every source file path:
```
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)
```
And then you can make your target depend on the objects files:
```
MAKEFILE
$(BUILD_DIR)/$(TARGET_EXEC): $(OBJS)
  $(CC) $(OBJS) -o $@ $(LDFLAGS)
```
Automatic Generation of Include Directory Flags
I used a similar technique to generate include directory flags. Find all the directories under the given source directories:
```
INC_DIRS := $(shell find $(SRC_DIRS) -type d)
```
And then prefix them with a -I:
```
INC_FLAGS := $(addprefix -I,$(INC_DIRS))
```

## Here is a simple Makefile that will do all these things and works with C, C++, and assembly:

```make
TARGET_EXEC ?= a.out

BUILD_DIR ?= ./build
SRC_DIRS ?= ./src

SRCS := $(shell find $(SRC_DIRS) -name *.cpp -or -name *.c -or -name *.s)
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)
DEPS := $(OBJS:.o=.d)

INC_DIRS := $(shell find $(SRC_DIRS) -type d)
INC_FLAGS := $(addprefix -I,$(INC_DIRS))

CPPFLAGS ?= $(INC_FLAGS) -MMD -MP

$(BUILD_DIR)/$(TARGET_EXEC): $(OBJS)
	$(CXX) $(OBJS) -o $@ $(LDFLAGS)

# assembly
$(BUILD_DIR)/%.s.o: %.s
	$(MKDIR_P) $(dir $@)
	$(AS) $(ASFLAGS) -c $< -o $@

# c source
$(BUILD_DIR)/%.c.o: %.c
	$(MKDIR_P) $(dir $@)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

# c++ source
$(BUILD_DIR)/%.cpp.o: %.cpp
	$(MKDIR_P) $(dir $@)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@


.PHONY: clean

clean:
	$(RM) -r $(BUILD_DIR)

-include $(DEPS)

MKDIR_P ?= mkdir -p
```
