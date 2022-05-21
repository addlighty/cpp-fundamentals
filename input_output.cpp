// Created by Yoav Addlight

#include <iostream>

using namespace std;

/* Input Stream: If the direction of flow of bytes is from the device( for example, Keyboard)
to the main memory then this process is called input.
Output Stream: If the direction of flow of bytes is opposite, i.e. from main memory to device
(display screen) then this process is called output. */

int main() {
    char text[] = "Yoav Addlight";
    cout << text << "- Engineering student";
    /* In the above program, the insertion operator(<<) inserts the value of the string variable 
    sample followed by the string "A computer science portal for geeks" in the standard output
    stream cout which is then displayed on the screen. */

    int age;

    cout << "Enter your age:";
    cin >> age;
    cout << "\nYour age is: " << age;

    /* The extraction operator(>>) is used along with the object cin for reading inputs.
    The extraction operator extracts the data from the object cin which is entered using the keyboard. */
    
    return 0;
}