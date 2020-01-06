  # Linux System Programming
  
- How to develop Linux System C/C++ Libraries:
    + Generic
    + Extensible
    + Programmable
    + Modularized

## Release 1 Building and Managing a Library
+ __Section 1 : Introduction to Libraries__
  - [What is Library]()
  - [Relationship between Library and Application]()
  - [Ex : Doubly linked list as a Library]()
  - [Quick Compilation Steps]()
  - [Summary]()

+ Section 2 : Header Files
  - [What are Header Files and their Purpose?](./Header_Files_Purpose.MD)
  - [Relationship between Source and header files](./Relationship_Source_Header_Files.MD)
  - [Text Substitution Method](./Text_Subsitution.MD)
  - Text Substitution Method - Example and Demo

+ Section 3 : Preprocessing Directives
  - Problem of Duplicate inclusion of Hdr files
  - Pre-processing Directives
  - [Solution to Duplicate inclusion of Header files](./Section3/Problem_of_Duplicate_Inclusion_of_HeaderFiles.MD)

+ Section 4 : Correct way of Using Structures and Functions
  - Structures - Define and Use thumb Rule
  - Functions - Declare and Use thumb rule
  - Problem of Recursive Dependency
  - Solution to Recursive Dependency

+ Section 5 : Creation of Static and Dynamic Libraries
  - Resuming with Doubly Linked List Library
  - Quick Creation of Static and Dynamic Libraries
  - Linking with Static Library
  - Linking with Dynamic Library

+ Section 6 : Building using a Makefile
  - What are Makefiles and why do we need it
  - Functions of Makefile
  - Makefile Dependency tree
  - Steps of Writing a Makefile
  - Assignment on Makefile

+ Section 7 : Run-time Programmable libraries
  - What are Programmable Libraries?
  - Steps to Program the libraries
  - Registering of the callbacks with Libraries
  - key_match callback
  - comparison_fn callback
  - Delegation of Application specific operations to Libraries

+ Section 8 : Writing Iterators using Macros
  - What are Iterative Macros ?
  - Why we need Iterative Macros ?
  - How to Write Iterative Macros - For Trees and Linked Lists
  - Exercises

+ Section 9 : Glue Based Libraries and Data structures
  - What are Glue Based Libraries ?
  - Introducing Glthreads - A Glued Linkedlist
  - Glthreads Vs Traditional Linked List
  - Structure field offset
  - GLThread Operations
  - GLNode Insertion
  - GLThread Iteration
  - GLNode Removal
  - Code Walk - Demo
  - Traditional List Problems
  - GLThread Benefits 

## Release 2 Memory Management Concepts
+ Section 10 : Memory Layout of Linux Process
  - Virtual Memory Basics 
  - Memory Layout of Linux Process 
  - Example: Memory Layout of Linux Process 
  - Exercise on size command 

+ Section 11 : Stack Memory Management
  - Stack Memory Basics and Contents 
  - Stack-Overflow and Prevention 
  - Stack Memory Corruption 
  - Common Cpu Registers
  - Procedure Call Mechanism - Step by Step
  - Purpose of Base Pointer register (ebp) 
  - Procedure Return Mechanism - Step by Step
  - Lab session 

+ Section 12 : Heap Memory Management
  - Introduction and Goals
  - How Malloc Works
  - Top of Heap Memory region - break pointer
  - Heap Memory Mgmt Sys Calls - brk and sbrk
  - Meta and Data Blocks
  - How free() works
  - Block Splitting
  - Block Merging
  - Memory Illness - Problem of Fragmentation

+ Section 13 : Concept of Paging
  - Introduction to Paging
  - Byte Addressable Memory
  - 32 bit and 64 bit Machine Architecture
  - Address Bus and Data bus         
  - Physical Vs Virtual Address
  - Physical Memory Frames        
  - Virtual Address Composition
  - Page Table
  - Paging In Action
  - Shared Physical Memory

+ Section 14 : Multilevel Paging
  - Introduction
  - Multi Level Paging In Action - Part1
  - Multi Level Paging In Action - Part2
  - Assignment 8: Test your Understanding

+ Section 15 : Demand Paging
  - Problem Statement
  - Demand Paging Steps
  - Effective Access Time

+ Section 16 : Memory Management for Multi-threaded Process
  - Introduction
  - Virtual Memory Management
  - Page Table Management
  - Thread Termination

## TOPICS TO BE ADDED
+ Section 18: Understanding four stages of Compilation
  - Four stages of C/C++ Compilation
  - How Dynamic Library works ?
  - Dynamic Linking : Linking with Dynamic Library
  - Comparison - Static Vs Dynamic Linking

+ Section 19: Structure Padding in C
  - What is Structure Padding?
  - Why Padding is done?
  - Disable Padding

+ Section 20 : Hidden Structures in C
  - What are Hidden Structures ?
  - Access hidden Structures
  - Opaque Pointers

+ Section 21 : Endianness and Byte Order
  - Big-endian and Little Endian Machines
  - Host Byte Order
  - Network Byte Order
  - htonl() and variants
  
+ Section 22 : Opaque Pointers

