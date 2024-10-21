#pragma GCC optimize(2)
#include <iostream>
#include <cstdio>
#define log(f, args...) do { printf("%s %d ", __FUNCTION__, __LINE__); printf(f, ##args); puts(""); } while (0)
using namespace std;

#if 0
class A {
public:
    int x;
    virtual void f() {
        log("A");
    }
};

class B: public A {
public:
    int y;
    void f(int x) {
        log("B");
    }
};

// class C: public B {
// public:
//     int y;
//     void f() {
//         log("C");
//     }
// };

void func1(A *p) {
    p->f();
}

void func2(A &p) {
    p.f();
}

int main() {
    A a;
    B b;
    // C c;
    func1(&a);
    func1(&b);
    // func1(&c);
    func2(a);
    func2(b);
    // func2(c);
    return 0;
}
#endif

#if 1

class A {
public:
    virtual void f() {
        log("A::f");
    }
};

class B: public A {
public:
    void f() {
        log("B::f");
    }
    void g() {
        log("B::g");
    }
};

int main() {
    A* p = new B;
    p->f();
    // p->g();
    // ((B*)p)->g();
    B *q = dynamic_cast<B*> (p);
    q->g();
    return 0;
}

#endif