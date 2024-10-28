#include <iostream>
#include <cstring>
using namespace std;

class A {
    char *p;
public:
    A() {}
    A(const char* str) {
        p = new char[strlen(str) + 1];
        strcpy(p, str);
    }
    ~A() {
        delete []p;
    }
    A(A&& x) {
        p = x.p;
        x.p = NULL;
    }
};

int main() {
    return 0;
}