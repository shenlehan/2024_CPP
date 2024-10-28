#include <iostream>
using namespace std;

int a[100], n;

int &change(int x) {
    a[x] = 1;
    return a[x];
}

int main() {
    a[10] = 10;
    cout << a[10] << endl;
    change(10);
    cout << a[10];
    return 0;
}