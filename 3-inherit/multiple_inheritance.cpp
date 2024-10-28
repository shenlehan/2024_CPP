#include <iostream>
#define log(f, args...) do { printf("%s %d ", __FUNCTION__, __LINE__); printf(f, ##args); puts(""); } while (0)
using namespace std;

class A {
    int m;
public:
    void fa() {
        log("A");
    }
};

class B {
    int n;
public:
    void fb() {
        log("B");
    }
};

class C: public A, public B {
    int r;
public:
    void fc() {
        log("C");
    }
};

int main() {
    C c;
    A *pa = &c;
    B *pb = &c;
    pa->fc();
    return 0;
}