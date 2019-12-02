# Arrays
## Linear Search Implemented

### Implementaion of Linear search
//============================================================================
// Name        : the_basics.cpp
// Author      : Deepak Mane
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int* a = NULL;  // pointer to an int, intially to nothing.
	int n, Key;           // Size needed for array
	cout << "Enter  No of Elements to be present in Dynamic Integer Array : ";
	cin >> n;        // Read in the size
	a = new int[n];  // Allocate n ints and save ptr in a.
	for (int i=0; i<n; i++) {
		cout << "Enter " << i << " of " << n << " element of Integer Dynamic Array : ";
	    cin >> a[i];    // Initialize all elements to zero.
	}


	cout << "The Array on which Linear search to be performed : [";
	for(int i=0; i<n; i++)
	{
		cout << a[i] ;
		if(i < (n -1))
		{
			cout << ',';
		}
	}
	cout << "]" << endl;


	cout << "Enter the key to be searched : ";
	cin >> Key;
	for(int i=0; i<n; i++)
	{
		if(Key == a[i])
		{
			cout << "Found Key at : " << i << endl;
			cout << "Linear search Ended Successfully" << endl;
			return 0;
		}
	}
	cout << "Not found!!!" << endl;
	cout << "Linear search Ended Successfully" << endl;

	delete [] a;  // When done, free memory pointed to by a.
	a = NULL;     // Clear a to prevent using invalid memory reference.
}
