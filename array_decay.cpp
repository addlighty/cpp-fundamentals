// Created by Yoav Addlight

#include <bits/stdc++.h>

using namespace std;

// Passing array by value
void aDecay(int *p) {
    // Printing size of pointer
    cout << "Modified size of array is by passing by value: " << sizeof(p) << endl;
}
  
// Function to show that array decay happens even if we use pointer
void pDecay(int (*p)[7]) {
    // Printing size of array
    cout << "Modified size of array by passing by pointer: " << sizeof(p) << endl;
}

// A function that prevents Array decay by passing array by reference
void fun(int (&p)[7]) {
    // Printing size of array
    cout << "Modified size of array by passing by reference: " << sizeof(p) << endl;
}

int main() {
    int a[7] = {1, 2, 3, 4, 5, 6, 7,};
  
    // Printing original size of array
    cout << "Actual size of array is: " << sizeof(a) <<endl;
  
    // Passing a pointer to array
    aDecay(a);
      
    // Calling function by pointer
    pDecay(&a);   
  
    // Calling function by reference
    fun(a);

    return 0;
}