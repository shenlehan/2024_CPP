#include <iostream>
using namespace std;

int main() {
    int x = 1, y = 2;
    const int *x1 = &x;
    int* const y1 = &y;
    x1 = &y;
    y1 = &x;
    *x1 = 2;
    *y1 = 2;
    return 0;
}