// Created by Yoav Addlight

#include <iostream>

using namespace std;

/* When the object is destroyed it frees the memory as well.
 So, we don't need to delete it as Smart Pointer does will handle it. 
 The idea is to take a class with a pointer, destructor and overloaded operators like * and ->. 
 Since the destructor is automatically called when an object goes out of scope, 
 the dynamically allocated memory would automatically be deleted (or reference count can be decremented) */

template <class T>
 class SmartPointer {
     T* pointer; // Actual pointer

public:
    // Constuctor
    explicit SmartPointer(T* p = NULL) {
        pointer = p;
    }
    // Destuctor
    ~SmartPointer() {
        delete(pointer);
    }

    // Overloading dereferencing operator
    T& operator*() {
        return *pointer;
    }

    // Overloading arrow operator so that members of Tcan be accessed like a pointer.
    T* operator->() {
        return *pointer;
    }
};

int main() {
    SmartPointer<int> ptr(new int());
    *ptr = 20;
    cout << *ptr;

    /*  We don't need to call delete ptr: when the object ptr goes out of scope, the destructor for it is automatically
    called and destructor does delete ptr. */

    return 0;
}