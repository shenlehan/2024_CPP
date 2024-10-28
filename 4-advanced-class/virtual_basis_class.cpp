#include <iostream>
#include <cstring>
#include <cstdio>
#define log(f, args...) do { printf("%s %d ", __FUNCTION__, __LINE__); printf(f, ##args); puts(""); } while (0)
using namespace std;

class A {
public:
    int x;
    A(int _x): x(_x) {}
};

class B: virtual public A {
public:
    int y;
    B(int _y): A(1) {
        y = _y;
    }
    void f() {
        log("B");
    }
};

class C: virtual public A {
public:
    int z;
    C(int _z): A(2) {
        z = _z;
    }
    void f() {
        log("C");
    }
};

class D: public B, public C {
public:
    int m;
    D(int i, int j, int k): B(i), C(j), A(3) {
        m = k;
    }
};

int main() {
    D d(1, 2, 3);
    printf("%d %d %d %d", d.x, d.y, d.z, d.m);
    return 0;
}