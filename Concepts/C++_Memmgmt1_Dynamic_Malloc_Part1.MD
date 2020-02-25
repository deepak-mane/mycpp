# C++ - Memory Management : Part 1
Dynamic Memory Allocation - malloc function

  + [Memory Management](./README.MD)
    - [Memory Management Part1](./README.MD)
      - [Dynamic Memory Allocation Malloc Part1](./C++_Memmgmt1_Dynamic_Malloc_Part1.MD)
      + [Dynamic Memory Allocation NewOperator Part2](./C++_Memmgmt1_Dynamic_NewOperator_Part2.MD)
      + [Dynamic Memory Allocation NewOperator Part3](./C++_Memmgmt1_Dynamic_NewOperator_Part3.MD)
      + [Dynamic Memory Allocation 2DArrays Part4](./C++_Memmgmt1_Dynamic_2DArrays_Part4.MD)
</br>
- C/C++ programs are provided with different types of memory areas
  + <b>stack</b> : Allocated automatically for local variables
  + <b>data section</b> : Allocated for Global and static data
  + <b>heap</b> : Allocated at runtime
  
- All the memeory is taken from the process address space
- C/C++ programs provide support for memory allocation at runtime (also called dynamic memory)
- Allocations on the heap have to be managed by the programmer


 ## Dynamic Memory Allocation in C
 
 - C provides various functions for allocating memory from the heap.
   + <b>malloc</b> : allocates raw memory on the heap.
   + <b>calloc</b> : allocates raw memory on the heap and initializes it to zero.
   + <b>realloc</b>: allocates larger chunk of memory for an existing allocation.
   + <b>free</b>: deallocates/releases the memory allocated through the above functions. 
   

```c
// MemoryManagement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdlib.h>
#include <stdio.h>

int main() {
    //int* p = (int *)calloc(5, sizeof(int));
    int* p = (int *)malloc(5 * sizeof(int));
    if (p == NULL) {
        printf("Failed to allocate memory\n");
        return -1;
    }
    *p = 5;
    printf("%d", *p);
    //free(p);
    p = NULL;
    //free(p);
    return 0;
}

```

