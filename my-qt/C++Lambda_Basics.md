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

    /* More shorter version of the same above way of writting::
     *
    cout << "The sum is : " << [](int a, int b)->int{
        return a + b;
    }(7,3) << endl;

    */

    /* Capture Lists
     *

    int a = 7;
    int b = 3;

    [a,b]()
    {
        cout << "a is : " << a << endl;
                cout << "b is : " << b << endl;
                cout << "a + b = " << a + b << endl;
    }();
     */


    /* Capturing by value
     *

    int c = 42;
    auto func = [c](){
        cout << "The inner value of c is : " << c << endl;
    };

    for(int i = 1; i < 5; i++) {
        cout << "The outer value of c is : " << c << endl;
        func();
        c = c + 1;
    }
    */

    /* Capturing by Reference
     *

    int c = 42;
    auto func = [&c](){
        cout << "The inner value of c is : " << c << endl;
    };

    for(int i = 1; i < 5; i++) {
        cout << "The outer value of c is : " << c << endl;
        func();
        c = c + 1;
    }
    */

    /* Capture everything by value

    int c = 42;
    int d = 6;

    auto func = [=](){
        cout << "The inner value of c is : " << c << endl;
        cout << "The inner value of d is : " << d << endl;
    };

    for(int i = 1; i < 5; i++) {
        cout << "The outer value of c is : " << c << endl;
        func();
        c = c + 1;
    }
     */

    /* Capture everything by Reference
    */
    int c = 42;
    int d = 6;

    auto func = [&](){
        cout << "The inner value of c is : " << c << endl;
        cout << "The inner value of d is : " << d << endl;
    };

    for(int i = 1; i < 5; i++) {
        cout << "The outer value of c is : " << c << endl;
        func();
        c = c + 1;
    }
     //*/

    return 0;
}

```
