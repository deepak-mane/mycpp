# C++ Lambda Basics

### Program explaining usage of lambda functions

```cpp
#include <iostream>

using namespace std;

int main()
{
    /*
    * [capture list] (parameter list) -> return_value_type {function_body}
    */
    
    /* 1st Way of calling lambda function
     * Give lamba function a name and call it ...
     *
     
    auto func = [](){
        cout << "Hello World" << endl;
    };
    
    func();
    */
    
    
    /* 2nd Way of calling lambda function
      * CAll lambda function directly after definition
      *
    [](){
            cout << "Hello World" << endl;
        }();
    */
    
    /* Define a lambda function that takes parameters
     *
     *
     
    [](int a, int b){
            cout << "a + b = " << a + b  << endl;
        }(7,3);
        
     */
    
    /* Define a lamba function that Returns something
     *
    int sum = [](int a, int b)->int{
           return a + b;
        }(7,3);
        
    cout << "The sum is : " << sum << endl;
     */
    cout << "The sum is : " << [](int a, int b)->int{
        return a + b;
    }(7,3) << endl;
    return 0;
}
```
