// Created by Yoav Addlight

#include <iostream>

using namespace std;

// The memory location of the variables is passed to the parameters in the function, and then the operations are performed. 
void swap(int *x, int *y) {
    int z = *x;
    *x = *y;
    *y = z;
}

// Driver Code
int main() {
    int a = 45, b = 35;
    cout << "Before Swap\n";
    cout << "a = " << a << " b = " << b << "\n";

    swap(&a, &b);

    cout << "After Swap with pass by pointer\n";
    cout << "a = " << a << " b = " << b << "\n";

    return 0;
}