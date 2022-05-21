// Created by Yoav Addlight

#include <iostream>

using namespace std;

class Student {
    public:
    string name;
    int id;

    // Default Constructor
    Student() {
        cout << "Default Constructor called" << endl; 
        id=-1;
    }
    
    // Parameterized Constructor
    Student(int x) {
        cout << "Parameterized Constructor called" << endl;
        id=x;
    }

    //Definition for Destructor
    ~Student() {
        cout << "Destructor called for id: " << id <<endl; 
    }
    
    // printname is not defined inside class definition
    void printname();
    
    // printid is defined inside class definition
    void printid() {
        cout << "Student id is: " << id;
    }
};

// Definition of printname using scope resolution operator ::
void Student::printname() {
    cout << "Student's name is: " << name; 
}

int main() {
    
    Student obj1;
    obj1.name = "xyz";
    obj1.id=15;
    
    // call printname()
    obj1.printname();
    cout << endl;
    
    // call printid()
    obj1.printid();

    // obj1 will call Parameterized Constructor
    Student obj2(23);
    cout << "Student id is: " <<obj2.id << endl;

    return 0;
} // Scope for obj1 and obj2 ends here