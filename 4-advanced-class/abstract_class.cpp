#include <iostream>
#define log(f, args...) do { printf("%s %d ", __FUNCTION__, __LINE__); printf(f, ##agrs); puts(""); } while (0)
using namespace std;

class A {
    int i, j;
public:
    A() {}
    ~A() {}
    void f(int x) {}
};

int main() {
    return 0;
}