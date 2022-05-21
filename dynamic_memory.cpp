// Created by Yoav Addlight

#include <iostream>

using namespace std;

/* Dynamically allocated memory is allocated on Heap and non-static and local variables get memory allocated on Stack. 
The new operator denotes a request for memory allocation on the Free Store. 
If sufficient memory is available, new operator initializes the memory and returns 
the address of the newly allocated and initialized memory to the pointer variable. */

/* For dynamically allocated memory like "int *p = new int[10]", it is programmers responsibility 
to deallocate memory when no longer needed.
If programmer doesn't deallocate memory, it causes memory leak 
(memory is not deallocated until program terminates).  */

int main() {
    // Pointer initialized with NULL Then request memory for the variable

    int *p = NULL; 

    p = new int;   

    // Allocate block of memory: new operator is also used to allocate a block(an array) of memory of type data-type. 
    int *p_a = new int[10];

    // Release memory pointed by pointer-variable
    delete p;  

    // Release block of memory pointed by pointer-variable
    delete[] p_a;  

        // Pointer initialization to null
    int* p = NULL;

    // Request memory for the variable using new operator
    p = new(nothrow) int;
    if (!p)
        cout << "allocation of memory failed\n";
    else {
        // Store value at allocated address
        *p = 29;
        cout << "Value of p: " << *p << endl;
    }

    // Request block of memory using new operator
    float *r = new float(75.25);

    cout << "Value of r: " << *r << endl;

    // Request block of memory of size n
    int n = 5;
    int *q = new(nothrow) int[n];

    if (!q)
        cout << "allocation of memory failed\n";
    else {
        for (int i = 0; i < n; i++)
            q[i] = i+1;

        cout << "Value store in block of memory: ";
        for (int i = 0; i < n; i++)
            cout << q[i] << " ";
    }

    // freed the allocated memory
    delete p;
    delete r;

    // freed the block of allocated memory
    delete[] q;

    return 0;
}