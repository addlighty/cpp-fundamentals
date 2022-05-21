// Created by Yoav Addlight

#include <iostream>

using namespace std;

int countSetBits(int n) {
    int count = 0;

    while (n) {
        cout << (n & 1)<<endl; // And operation between the lsb in the binary representation of n and 1.
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int countSetBitsUtil(int x) {
    if (x <= 0)
        return 0;
    return (x % 2 == 0 ? 0 : 1) + countSetBitsUtil(x / 2);
}


int main() {
    int i = 10;
    cout << countSetBits(i);
    return 0;
}