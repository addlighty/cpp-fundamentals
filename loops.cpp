// Created by Yoav Addlight

#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        cout << "Hello For Loop\n";
    }

    // Initialization expression
    int i = 1;
    // Test expression
    while (i < 10) {
        cout << "Hello While Loop\n";

        // Update expression
        i++;
    }

    int j = 2; // Initialization expression

    do
    {
        // Loop body
        cout << "Hello Do-While Loop\n";

        // Update expression
        i++;

    }  while (i < 1);   // Test expression

    return 0;
}