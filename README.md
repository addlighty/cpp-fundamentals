C++ Fundamentals
=================

## Table of Contents

* [Basics](#basics)
  * [Program Structure](#program-structure)
  * [Namespace](#namespace)
  * [Constants](#constants)
  * [Enumerated Constants](#enumerated-constants)
  * [File IO](#file-io)
  * [Header Files](#header-files)
  * [User Input](#user-input)
* [Arithmetic Operations](#arithmetic-operations)
* [Control Flow](#control-flow)
  * [Rational Operators](#rational-operators)
  * [Logic Operators](#logic-operators)
  * [If-Else Statements](#if-else-statements)
  * [Switch Statements](#switch-statements)
  * [For Loops](#for-loops)
  * [While Loops](#while-loops)
  * [Break and Continue](#break-and-continue)
* [Pointers](#pointers)
  * [Arrow Operator](#arrow-operator)
* [Arrays](#arrays)
* [Functions](#functions)
  * [Functions in Header Files](#functions-in-header-files)
  * [Pass Variables by Reference](#pass-variables-by-reference)
* [Classes](#classes)
  * [this Pointer](#this-pointer)
* [Templates](#templates)
  * [Generic Functions](#generic-functions)
  * [Generic Classes](#generic-classes)
* [Inheritance](#inheritance)
* [Polymorphism](#polymorphism)
  * [Compile Time Polymorphism - Overloading](#compile-time-polymorphism---overloading)
  * [Runtime Polymorphism - Virtual Functions](#runtime-polymorphism---virtual-functions)
* [Vectors and Iterators](#vectors-and-iterators)


## Basics
----
### Program Structure 
```cpp
#include <iostream>

int main() 
{
  std::cout << "Hello world";
  return 0;
}
```
Any line that has a hash sign at the start is a preprocessor directive. Include means add the declarations of the given library. In this case we are adding the declarations of the iostream library. The brackets means we try to insert a file from the directory where all the standard libraries are stored.

```cpp
#include "main.hpp"![image](https://user-images.githubusercontent.com/98479568/163424773-cf0ef56e-53ed-4603-bc2c-7952c29913d8.png)

```
The double qoutes means we try to insert a file from the current directory, and if it is not there then look in the directory where all the standard libraries are stored.

To avoid writing std:: (or every other library) , before the start of the main function, put in the command "using namespace std;"
```cpp
using namespace std;
int main()
{
}
```
This tells the compiler to assume we are using the library.

There are two kinds of values:
* lvalue - a reference to the variable to which we can further assign (for example: ++a).
* rvalue - a value like the value of an expression which is not stored (for example: a++).

### Namespace
Namespaces allow us to group named entities that otherwise would have global scope into narrower scopes, giving them namespace scope. This allows organizing the elements of programs into different logical scopes referred to by names.
* Namespace declarations appear only at global scope.
* Namespace declarations can be nested within another namespace.
* Namespace declarations don’t have access specifiers. (Public or private)
* No need to give semicolon after the closing brace of definition of namespace.
* We can split the definition of namespace over several units.

```cpp
namespace namespace_name 
{
   int x, y; // code declarations where 

             // x and y are declared in 

             // namespace_name's scope

}

```

### Constants
In C++ we can define a variable as a constant. Meaning, its value does not change for the life of the program.
```cpp
const int weightGoal = 100;
```
### Enumerated Constants
This means the programmer can create a new variable type and then assign a finite number of values to it. 
```cpp
enum type_name 
{
  value1,
  value2,
  value3,
  .
  .
};
```
### File IO 

```cpp
 - Include the <fstream> library 
 - Create a stream (input, output, both)
      - ofstream myfile; (for writing to a file)
      - ifstream myfile; (for reading a file)
      - fstream myfile; (for reading and writing a file)
 - Open the file  myfile.open(“filename”);
 - Write or read the file
 - Close the file myfile.close();
```
### Header Files
The header file (.hpp) contain informatiom about how to do tasks while the main program (.cpp) tells what to do. Everything that is not directly related to to doing the task should be in the header file. Don't forget to include the header file in the main program.

```cpp
#include "main_header.hpp"
```

bits/stdc++ - a header file that includes every standard library.  

Header files available in C++ for Input/Output operations are: 

* iostream: iostream stands for standard input-output stream. This header file contains definitions of objects like cin, cout, cerr, etc.
* iomanip: iomanip stands for input-output manipulators. The methods declared in these files are used for manipulating streams. This file contains definitions of setw, setprecision, etc.
* fstream: This header file mainly describes the file stream. This header file is used to handle the data being read from a file as input or data being written into the file as output.

### User Input
The function std::cin will not retrieve strings that have a space in them. It will see the space as the end of the input. We will obviously need a method to enter strings. C++ has the function getline().

```cpp
#include<iostream>
#include<string>

using namespace std;
int main()
{
  int number;
  cin >> number;
  string name; 
  cout<<"Tell me your nickname?: ";
  getline(std::cin, name);
  cout<<"Hello "<<name<<"\n";
  return 0;
 }
```
## Arithmetic Operations
----
![image](https://user-images.githubusercontent.com/98479568/163413847-306be1f5-1d02-4ce3-b38d-63dec5ea2249.png)

Prefix operators increment the value of the variable, then return the reference to the variable.
Postfix operators create a copy of the variable and increments the value of the variable. Then it returns a copy from BEFORE the increment.

## Control Flow
----

### Rational Operators

![image](https://user-images.githubusercontent.com/98479568/163414526-78d188e6-d383-4d42-8523-b32b09925ff8.png)

### Logic Operators

![image](https://user-images.githubusercontent.com/98479568/163414710-10ab0c90-8b97-4a3d-8099-67b29383aac1.png) 

### If-Else Statements

```cpp
if(boolean expression)
{
     //statements to execute if the boolean expression is true
}
else if (boolean expression #2)
{
     //statements to execute if the 'else if' boolean expression  #2 is true
}

else
{
     //statements to execute if the boolean expressions 
    //'if' and 'else if'  are false
}
```
### Switch Statements

```cpp
switch(expression)
{
     case constant-expression : statements;
                               break; (this is optional);
     case constant-expression : statements;
                               break; (this is optional);
     ...

     default : //optional
        statements;
}

```

### For Loops

```cpp
for ( declaration : range ) statement;

for (initialization; condition; increase) statement;

```
There are three loop control statements:
* break - used to terminate the loop.
* continue - forces to execute the next iteration of the loop. 
* goto - referred to as unconditional jump statement can be used to jump from one point to another within a function (goto label , label:).

To create infinite loop: 

```cpp
for( ; ;)
{
     statements
}
```

### While Loops

```cpp
while(condition)
{
     statements;
}

```

To create infinite loop: 

```cpp
while(1)
{
     std::cout<<"This while loop will run forever\n";
}

```

#### Break and Continue 
Break statement will end the loop and begin executing the first statement that comes after the end of the loop.

The continue statement: The continue statement will force the next iteration to be executed.

## Pointers
----

The address of a variable can be obtained by preceding the name of a variable with an ampersand sign (&), known as address-of operator. For example: 
```cpp
foo = &myvar;

```
A variable which stores the address of another variable is called a pointer. Pointers are said to "point to" the variable whose address they store.
* is the dereference operator, and can be read as "value pointed to by".

```cpp
baz = *foo;

```
![image](https://user-images.githubusercontent.com/98479568/163424355-cb057e46-fb41-4b52-aef5-398909828273.png)

### Arrow Operator
The arrow operator gives the value held by member to class, structure or union instance pointer_name.

```cpp
(pointer_name)->(member)

```
The expressions a->member and (*(a)).member (where a represents a pointr) yield identical results.
We use pointers for DMA (Dynamic Memory Allocation). Dynamic memory allocation is the process of assigning the memory space during the execution time or the run time, mostly used when we do not know how much amount of memory would be needed for the program beforehand.

```cpp
int len;
cin >> len;
//Below variables are allocated memory dynamically.
int *pointer1 = new int;
int *pointer2; = new int[len];

// Dynamically allocated memory is deallocated.
delete pointer1;
delete[] pointer2;

```

## Arrays
----

C++ arrays can be declared as: 
```cpp
variableType arrayName [ ] = {variables to be stored in the array};

// or:
variableType arrayName[array size]

```
Multidimensional arrays in C++ are initialized with the format:
```cpp
variableType arrayName size of dim.1][size of dim. 2] ...[size of dim. n] = {variables to be stored in the array}; 

// or:
variableType arrayName[size of dim.1][size of dim. 2] ...[size of dim. n];

```

## Functions
----
All functions must have:
* Decleration: the statement of how the fucntion is to be called, written bedore main().
* Definition: the statements of the task the function performs when called. 

```cpp
// Declaration
returnedType functionName(parameter1, parameter2, ...,parameterN);

int main()
{ 
  ...
  functionName(parameter1, parameter2, ..., parameterN);
  ...
}
// Definition
returnedType functionName(parameter1, parameter2, ...,parameterN)
{
     statements;
     return x;
}
```

### Functions in Header Files
Move the include statements and the function declaration and the function definition to the header file.

### Pass Variables by Reference
Passing the address of the variable instead of the variable so the function change the value at the address.
```cpp
// Declaration
returnedType functionName(int &parameter);

int main()
{
     ...
     functionName(parameter);
     ...
}
// Definition
returnedType functionName(int &parameter)
{
     statements;
     return x;
}
```

## Classes
----
Special functions:
* Constructor - special function that is executed whenever we create a new instance of the class. It is used to set initial values of data members of the class. 
* Destructor - special function that is executed automatically whenever an object goes out of scope. Important role of destructors to release memory that was allocated by the class constructor and member functions.
The syntax to define a class:
```cpp
class ClassName
{
// The default is to make all members private
  type member1;
  type member2;
  ...

// Functions that access and/or modify data values in classes are called mutators. 
public:
  ClassName(); // Decalration of constructor
  returnedType mutatorName(function parameters);
  ~ClassName(); // Decalration of destructor
  ...
} ;

// Definition of constructor
ClassName::ClassName()
{
  member1 = value;
  member2 = value;
}

// Definition of destructor
ClassName::~ClassName()
{
  statements;
}

returnVariable ClassName:: mutatorName(function parameters)
{
  function statements;
}

```
### this Pointer
'this' returns the address of the calling object.

## Templates 
----
### Generic Functions
```cpp
template <typename T, typename U> //
T functionName (T  parameter1,U  parameter2) // Whichever variable type is listed first, is the variable type that is returned.
{
    function statements;
    return TtypeValue;
}
```
### Generic Classes
If the class is going to accept strings, make sure you include 'using namespace std;' or it won't recognize the string variable.
You will have to add the template command to each member function.
```cpp
template<class T>
class ClassName
{
// The default is to make all members private
  knownType member1;
  T member2;
  ...

// Functions that access and/or modify data values in classes are called mutators. 
public:
  ClassName(); // Decalration of constructor
  returnedType mutatorName(function parameters);
  T mutatorName(T parameter);

  ~ClassName(); // Decalration of destructor
  ...
} ;

// Definition of constructor
ClassName::ClassName()
{
  member1 = value;
  member2 = value;
}

// Definition of destructor
ClassName::~ClassName()
{
  statements;
}

T ClassName<T>:: mutatorName(function parameters)
{
  function statements;
}

```
## Inheritance
----
We can derive a class from another class, so the derived class can access members and functions of the base class.
There are three types of access control: public, private, and protected.
* Public Inheritance means all public members of the base class are accessible to the derived class
* Private Inheritance means all members of the base class are private to the derived class
* Protected Inheritance means all members of the base class are protected to the derived class.
It is very rare to have a protected or private inheritance, the vast majority of the time inheritance is public.

```cpp
template <typename T, typename U> //
T functionName (T  parameter1,U  parameter2) // Whichever variable type is listed first, is the variable type that is returned.
{
    function statements;
    return TtypeValue;
}
```

## Polymorphism
----

### Compile Time Polymorphism - Overloading 
#### Function Overloading 
Function Overloading will allow us to use the same function name for different functions. As long as the argument list is different, the compiler will be able to choose the correct definition. 

#### Overloading Operators
The function must specify a return type and use the keyword 'operator' followed by the wanted sign.

```cpp
returnedType operator + (Type parameter)
{
  return statement;
}
```

### Runtime Polymorphism - Virtual Functions 

```cpp
class baseClass
{
  public:
    virtual returnedType mutatorName1()
    { 
      statements for baseClass;
    }
   
    returnedType mutatorName2()
    {
      statements for baseClass;
    }
};
   
class derivedClass :public baseClass
{
  public:
    // mutatorName1 () is already virtual function in derived class. 
    returnedType mutatorName1() 
    { 
      statements for derivedClass;    
    }
    
    // Non-virtual function, binded at compile time.
    returnedType mutatorName2()
    { 
      statements for derivedClass; 
    }
};
```

## Vectors and Iterators
----
We can describe vectors as a dynamic array  with the ability to resize itself when an element is added or removed, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators.

Iterators are used to point at the memory addresses of STL containers (for example: vectors).

```cpp
#include <vector> 

int main() {
  std::vector<Type> vectorName; // The vector has size 0 when we instantiate it.
  vectorName.resize(number); // Changing the size to 'number';
  
  //creating an iterator for the vector
  std::vector<int> ::iterator itr;
  for (itr = vectorName.begin(); itr != vectorName.end(); ++itr)
    // Remember to dereference the iterator to get the value of the vector.
    statements;
   
  // Useful and common functions 
  vectorName.assign(number of elements, value); // assign writes over the elements in the vector.
  vectorName.push_back(value); // push_back add elements to the end of a vector.
  vectorName.pop_back(); // pop_back remove the last element in the vector but does not return it.
  vectorInts.clear(); // clear the vector. 
  
  
  // insert insert value after position.
  itr  = vectorName.begin();
  vectorName.insert(itr + position, value);
  
  // emplace insert value after position.
  // Reallocation happens only if there is a need for more space.
  itr  = vectorName.begin();
  vectorName.emplace(itr + position, value);
  
  // erase remove specific elements from the vector.
  // Erase the element in position in the vector.
  vectorName.erase(vectorName.begin() + positon);
  // Erase a range of elements from start (include) to end (exclude).
  vectorName.erase(vectorName.begin() + start, vectorName.begin() + end);  
    
      
```

