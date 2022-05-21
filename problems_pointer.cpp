// Created by Yoav Addlight

#include <iostream>

using namespace std;

void fun();

class Rectangle {
private:
    int lenght;
    int breadth;
};

void fun() {
    // By taking a pointer p and dynamically creating object of class rectangle.
    Rectangle *p = new Rectangle();
}

/* In function fun, it creates a pointer that is pointing to the Rectangle object.
The object Rectangle contains two integers, length and breadth. When the function fun ends,
 p will be destroyed as it is a local variable. 
 But, the memory it consumed won't be deallocated because we forgot to use delete p; at the end of the function. 
That means the memory won't be free to be used by other resources.
But, we don't need the variable anymore, but we need the memory. */

int main() { 
    // Infinite Loop
    while (1) {
        fun();
    }
}