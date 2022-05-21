// Created by Yoav Addlight

#include <iostream>

using namespace std;

int main() {
    // an array of 10 integers. If arr[0] is stored at address x, then arr[i] is stored at x + sizeof(int) * i.
    int arr[5], i;

    cout << "Size of integer in this compiler is " << sizeof(int) << "\n";

    for (i = 0; i < 5; i++)
        // The use of '&' before a variable name, yields
        // address of variable.
        cout << "Address arr[" << i << "] is " << &arr[i]  << "\n";

    return 0;
}