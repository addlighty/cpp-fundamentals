// Created by Yoav Addlight

#include <iostream>

using namespace std;

/* It allows a function to modify a variable without having to create a copy of it.
We have to declare reference variables. The memory location of the passed variable and parameter is the same and therefore,
any change to the parameter reflects in the variable as well. */
void swap(int& x, int& y) {
    int z = x;
    x = y;
    y = z;
}

int main() {
    int a = 45, b = 35;
    cout << "Before Swap\n";
    cout << "a = " << a << " b = " << b << "\n";

    swap(a, b);

    cout << "After Swap with pass by reference\n";
    cout << "a = " << a << " b = " << b << "\n";

    return 0;
}