#include <iostream>
using namespace std;

class A0 {
public:
    double x, y;
    A0() {
        x = y = 0;
    }
    A0(double _x, double _y): x(_x), y(_y) {}
    ~A0() {}
};

class A {
public:
    A0 a, b;
    int z;
    double d;
    // void* operator new(size_t size) {
    //     void *p = malloc(size);
    //     memset(p, 0, size);
    //     return p;
    // }
    A(int x) {
        z = x;
    }
#if 0
    void* operator new(size_t size, void* p) {
        return p;
    }
    void operator delete(void *p, size_t size) {
        ...
    }
    void* operator new[](size_t size) {
        void *p = malloc(size);
        memset(p, 0, size);
        return p;
    }
    void operator delete[](void *p) {
        ...
    }
#endif
};

char buf[sizeof(A)];
A *p = new (buf) A(0);

int main() {
    A* a = new A;
    cout << a->a.x << ' ' << a->a.y << endl;
    cout << a->z << ' ' << a->d << endl;
    return 0;
}