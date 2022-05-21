// Created by Yoav Addlight

#include <iostream>

using namespace std;

// Prints elements of a 2-D array by usinng a pointer to an array. 
int main() {
  int arr[3][4] = { 
                    {10, 11, 12, 13}, 
                    {20, 21, 22, 23}, 
                    {30, 31, 32, 33} 
                  };

  int (*ptr)[4];
  ptr = arr;
  cout << ptr<< " "<< ptr + 1<< " "<< ptr + 2 << endl;
  cout << *ptr<< " "<< *(ptr + 1)<< " "<< *(ptr + 2)<< endl;
  cout << **ptr<< " "<< *(*(ptr + 1) + 2)<< " "<< *(*(ptr + 2) + 3)<< endl;
  cout << ptr[0][0]<< " "<< ptr[1][2]<< " "<< ptr[2][3]<< endl;

  return 0;
}