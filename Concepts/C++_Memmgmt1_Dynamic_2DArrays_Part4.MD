Dynamic Memory Allocation in C++ | 2D Arrays


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

void Strings() {
    char* p = new char[4];
    strcpy_s(p, 4, "C++");
    std::cout << p << std::endl;
    delete[]p;
}

void TwoD() {
    int *p1 = new int[3];
    int* p2 = new int[3];
    int** pData = new int* [2];

    pData[0] = p1;
    pData[1] = p2;

    pData[0][1] = 2;

    delete[]p1;
    delete[]p2;
    delete pData;

}


int main() {
    TwoD();
    return 0;
}


```
