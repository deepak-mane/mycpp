# Dynamic Memory Allocation in C++ | new for Arrays

- Another form of new
- Used for allocating dynamic arrays
- Written as new[]
- Subsequently, use delete[] for releasing the memory

```cpp
  <type> * <variable> = new <type>[size];
  delete [] <variable>;
  
  int *p = new int[5]; //Allocate memory for 5 integers
  delete []p; // Note the usage of [] with delete
```

```cpp
// MemoryManagement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdlib.h>
#include <stdio.h>
#include <iostream>

void Malloc() {
    //int* p = (int *)calloc(5, sizeof(int));
    int* p = (int*)malloc(5 * sizeof(int));
    if (p == NULL) {
        printf("Failed to allocate memory\n");
        return ;
    }
    *p = 5;
    printf("%d", *p);
    //free(p);
    p = NULL;
    //free(p);
}

void NewM() {
    int* p = new int; // This statement allocates memory for the integer pointer.
    *p = 6;
    std::cout << *p << std::endl;
    delete p;
}

void NewArrays() {
    int* p = new int[5];
    for (int i = 0; i < 5; ++i) {
        p[i] = i;
    }
    delete []p;
}


int main() {
    NewArrays();
    return 0;
}

```
