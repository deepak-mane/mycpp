# Simple C++ Makefile Template

This is a very simple C++ Makefile template, that can be used to get small to medium sized C++ projects up and running quickly and easily. The Makefile assumes source code for the project is broken up into two groups, headers (*.hpp) and implementation files (*.cpp).

The source code and directory layout for the project is comprised of three main directories (include, src and build), under which other directories containing code would reside. The layout used in the example is as follows:

![Alt text](./images/Makefile.png?raw=true "Title")

### The Makefile 
- [cpp_makefile_template.zip](./cpp_makefile_template.zip)
The Makefile supports building of a single target application called program which once built will be placed in the build/apps directory. All associated objects will be placed in the build/objects directory. The following is a listing of the Makefile in its entirety:

```make

CXX      := -c++
CXXFLAGS := -pedantic-errors -Wall -Wextra -Werror
LDFLAGS  := -L/usr/lib -lstdc++ -lm
BUILD    := ./build
OBJ_DIR  := $(BUILD)/objects
APP_DIR  := $(BUILD)/apps
TARGET   := program
INCLUDE  := -Iinclude/
SRC      :=                      \
   $(wildcard src/module1/*.cpp) \
   $(wildcard src/module2/*.cpp) \
   $(wildcard src/module3/*.cpp) \
   $(wildcard src/*.cpp)         \

OBJECTS := $(SRC:%.cpp=$(OBJ_DIR)/%.o)

all: build $(APP_DIR)/$(TARGET)

$(OBJ_DIR)/%.o: %.cpp
   @mkdir -p $(@D)
   $(CXX) $(CXXFLAGS) $(INCLUDE) -o $@ -c $<

$(APP_DIR)/$(TARGET): $(OBJECTS)
   @mkdir -p $(@D)
   $(CXX) $(CXXFLAGS) $(INCLUDE) $(LDFLAGS) -o \
   $(APP_DIR)/$(TARGET) $(OBJECTS)

.PHONY: all build clean debug release

build:
   @mkdir -p $(APP_DIR)
   @mkdir -p $(OBJ_DIR)

debug: CXXFLAGS += -DDEBUG -g
debug: all

release: CXXFLAGS += -O2
release: all

clean:
   -@rm -rvf $(OBJ_DIR)/*
   -@rm -rvf $(APP_DIR)/*
   
```

### Makefile Commands
The following commands can be used with this Makefile:
```make
make all
make clean
make program
make build
make release
make debug
```
### Example Run
The following is the expected output when the command "make clean all" is executed:

```make
make clean all
rm -rf build/*
c++ -pedantic-errors -Wall -Wextra -Werror -Iinclude/ -o build/objects/src/program.o
   -c src/program.cpp
c++ -pedantic-errors -Wall -Wextra -Werror -Iinclude/ -o build/objects/src/module1/mod1c1.o
   -c src/module1/mod1c1.cpp
c++ -pedantic-errors -Wall -Wextra -Werror -Iinclude/ -o build/objects/src/module1/mod1c2.o
   -c src/module1/mod1c2.cpp
c++ -pedantic-errors -Wall -Wextra -Werror -Iinclude/ -o build/objects/src/module2/mod2c1.o
   -c src/module2/mod2c1.cpp
c++ -pedantic-errors -Wall -Wextra -Werror -Iinclude/ -o build/objects/src/module2/mod2c2.o
   -c src/module2/mod2c2.cpp
c++ -pedantic-errors -Wall -Wextra -Werror -Iinclude/ -L/usr/lib -lstdc++ -lm
-o build/apps/program
build/objects/src/program.o
build/objects/src/module1/mod1c1.o
build/objects/src/module1/mod1c2.o
build/objects/src/module2/mod2c1.o
build/objects/src/module2/mod2c2.o
```

### Working Sample Makefile
- To run use below command
```ssh
make LINK_TARGET=linkedlist  <linkedlist is name of executable you need to generate from main.c or main.cpp >
```

```Makefile
TARGET_EXEC ?= $(LINK_TARGET)

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
 
