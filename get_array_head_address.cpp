#include <iostream>
using namespace std;

int b[20][10];

int main() {
    int *p1;
    p1 = &b[0][0]; // or p = b[0]
    p1++; // p1 指向了下一个元素

    typedef int A[10];
    A *p2;
    p2 = &b[0]; // or p2 = b;
    p2++; // p2 指向了下一行

    typedef int B[20][10];
    B *p3;
    p3 = &b;
    p3++; // p3 指向了下一个二维数组

    return 0;
}