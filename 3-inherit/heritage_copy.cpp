#include <iostream>
#include <cstring>
#include <cstdio>
#define log(f, args...) do { printf("%s %d", __FUNCTION__, __LINE__); printf(f, ##args); puts(""); } while (0)
using namespace std;

class A {
public:
    char *p;
    A() { log(""); p = new char[5]; strcpy(p, "hi"); }
    A(const char *str) {
        p = new char[strlen(str) + 1];
        strcpy(p, str);
        log("");
    }
    A(const A& a) {
        p = new char[strlen(a.p) + 1];
        strcpy(p, a.p);
        log("");
    }
};

class B: public A {
public:
    int x;
    B() {}
    B(int _x, char *str): x(_x), A(str) {}
    B(const B &b) {
        *this = b;
    }
};

int main() {
    B b1(1, "hello");
    B b2(b1);
    cout << b2.p << endl;
    printf("%p\n%p\n", b1.p, b2.p);
    return 0;
}