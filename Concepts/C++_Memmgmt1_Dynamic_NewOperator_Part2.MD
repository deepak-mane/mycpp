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
