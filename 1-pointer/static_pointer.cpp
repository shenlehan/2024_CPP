#include <iostream>
using namespace std;

int *p;

void func() {
    static int cnt = 0;
    p = &cnt;
    cout << cnt << endl;
    ++cnt;
    if (cnt >= 100) {
        return;
    }
    func();
}

int main() {
    func();
    cout << __LINE__ << " " << *p << endl;
    return 0;
}