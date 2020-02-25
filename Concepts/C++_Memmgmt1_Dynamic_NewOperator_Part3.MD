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
