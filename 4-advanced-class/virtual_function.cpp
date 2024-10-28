#include <iostream>
using namespace std;

class A {
public:
    int x;
    void f(int t) {
        x = t;
    }
};

class B: public A {
    void f(int t) {
        x = 2 * t;
    }
};

int main() {
    return 0;
}