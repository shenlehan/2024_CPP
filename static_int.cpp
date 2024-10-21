#include <iostream>
#include <cstring>
using namespace std;

class A{
public:
    static int shared;
    int t;
#if 0
    A(int _t, int _shared): t(_t) {
        shared = _shared;
    }
#endif
    A() {}
    A(int _t): t(_t) {}
};

int A::shared = 1;

int main() {
    A a;
    
    return 0;
}