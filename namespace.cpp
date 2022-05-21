// Created by Yoav Addlight

#include <iostream>

using namespace std;

// Variable created in ns namespace.
namespace var_ns {
    int var = 10;
}

namespace class_ns {
    // A Class in a namespace
    class student {
    public:
        void display() {
            cout << "ns::student\n";
        }
    };
}


namespace class_ns2 {
    // Only declaring class here
    class engineer;
}

// Defining class outside
class class_ns2::engineer {
    public:
        void display() {
            cout << "ns::engineer\n";
        }
};

// Global variable
int var = 50;

int main() { 
    // Local variable
    int var = 1;

    // These variables can be accessed from outside the namespace using the scope operator ::
    cout << var_ns::var << endl;

    class_ns::student stu;
    stu.display();

    class_ns2::engineer eng;
    eng.display();

    return 0;
}
