// Created by Yoav Addlight

#include <iostream>

using namespace std;

/* Void pointer represents absence of type. void pointers are pointers that point to a value that has no type.
This means that void pointers have great flexibility as it can point to any data type. There is payoff for this flexibility.
These pointers cannot be directly dereferenced. 
They have to be first transformed into some other pointer type that points to a concrete data type before being dereferenced. */

void increase(void *data,int ptrsize) {

    if(ptrsize == sizeof(char)) {
        char *ptrchar; 
        
        //Typecast data to a char pointer
        ptrchar = (char*)data;
        
        //Increase the char stored at *ptrchar by 1
        (*ptrchar)++;
        cout << "*data points to a char"<<"\n";
    }
    else if(ptrsize == sizeof(int)) {
        int *ptrint;
        
        //Typecast data to a int pointer
        ptrint = (int*)data;
        
        //Increase the int stored at *ptrchar by 1
        (*ptrint)++;
        cout << "*data points to an int"<<"\n";
    }
}

int main() {
    // Declare a character 
    char c='x';
    
    // Declare an integer
    int i=10;
    
    //Call increase function using a char and int address respectively
    increase(&c,sizeof(c));
    cout << "The new value of c is: " << c <<"\n";
    increase(&i,sizeof(i));
    cout << "The new value of i is: " << i <<"\n";
    
    return 0;
}
