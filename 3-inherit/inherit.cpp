#include <iostream>
#include <cstdlib>

using namespace std;

class A {
public:
    int x;
    int y;
    void func() {
        x = 1;
    }
    virtual void func(int t) {
        x = t;
    }
private:
    int z;
protected:
    int p;
};

#if 0
class B : public A {
    B() {
        x = 1;
        z = 1; // Error
        p = 1;
    }
};

void f() {
    A a;
    a.x = 1;
    a.z = 1;
    a.p = 1;
}
#endif

class C: public A {
    int t;
    void f() {}
} c;

int main() {
    A* p = new A;
    C* q = dynamic_cast<C*> (p);
    if (q == NULL) {
        printf("NULL");
    } else {
        puts("FUCK ZYT");
    }
    return 0;
}