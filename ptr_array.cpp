// Created by Yoav Addlight

#include <iostream>

using namespace std;

//An array name contains the address of first element of the array which acts like constant pointer. It means, the address stored in array name can't be changed.
int main() {
    //Declare an array
    int val[3] = { 5, 10, 20 };
    
    //declare pointer variable 
    int *ptr;
    
    //Assign the address of val[0] to ptr
    // We can use ptr=&val[0];(both are same)
    ptr = val ;
    cout << "Elements of the array are: ";
    cout << ptr[0] << " " << ptr[1] << " " << ptr[2];

    //Declare an array
    int arr[3] = {10, 100, 200};
    
    //declare pointer variable 
    int *ptr;
    
    //Assign the address of v[0] to ptr
    ptr = arr;
    
    for (int i = 0; i < 3; i++) {
            cout << "Value at ptr = " << ptr << "\n";
            cout << "Value at *ptr = " << *ptr << "\n";
            
            // Increment pointer ptr by 1 
            ptr++;
    }
    return 0;
}
