#include <iostream>
using namespace std;

#if 0
class A {
    int &x;
    const int y = 10;

}a, b;
#endif

class A {
    char *p;
public:
    A& operator =(A&& x) {
        delete []p;
        p = x.p;
        x.p = NULL;
        return *this;
    }
    char& operator [](int i) { // 注意这里是引用（要修改），而且 int i 这里是真的参数，要用
        return p[i];
    }
};

int main() {

    return 0;
}