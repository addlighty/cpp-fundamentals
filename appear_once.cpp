// Created by Yoav Addlight

#include <iostream>

using namespace std;

// Find the array element that appears only once.
int findSingle(int ar[], int ar_size) {
    // Do XOR of all elements and return
    int res = ar[0];

    for (int i = 1; i < ar_size; i++) {
        res = res ^ ar[i];
        return res;
    }
}

int main() {
    int arr[] = {2, 3, 5, 4, 5, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Element occurring once is " << findSingle(arr, n);

    return 0;
}