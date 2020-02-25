# Dynamic Memory Allocation in C++

- C++ provides two operators for dynamic memory allocation on the heap.
  + new : allocates raw memory on the heap.
  + delete : deallocates/releases the memory allocated through the above functions.
- Memory that is allocated through new has to be released with delete

```cpp
  <type> * <variable> = new <type>(optional args);
  delete <variable>;
  
  int *p = new int(value);
  delete p;
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
int main() {
    NewM();
    return 0;
}
```

|malloc | new|
|---| ---|
|Function|Operator |
|Requires size during allocation |Size is ascertained from type |
|Cannot initialize Memory |Can initialize Memory |
|Cannot call Constructors |Can call constructors |
|Returns Void Pointer that needs to be type casted |Returns correct type of Pointer|
|Cannot be Customized |Can be Customized through Overloading |
|malloc, calloc & realloc |Only one New Pointer in C++ but Has different forms |
|When above failed to allocate memory Returns NULL |When New fails to allocate memory it Throws exception |
| |New is more superior to malloc |


