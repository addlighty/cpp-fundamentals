// Created by Yoav Addlight

#include <iostream>

using namespace std;

class Person {
private:
   int age;
public:
    void setAge (int x) {
       // The 'this' pointer is used to retrieve the object's x hidden by the local variable 'x'
       this-> age = x;
    } 

    void print() { 
       cout << "Age = " << age << endl; // 'age' equals this->age
    }

    /* Reference to the calling object can be returned */ 
    Person& func () {
    // Some processing
        return *this;
    } 
};



int main()
{
   Person obj;
   int x = 20;
   obj.setAge(5);
   obj.print();
   return 0;
}