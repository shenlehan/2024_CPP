#include <iostream>
#define log(f, args...) do { printf("%s %d ", __FUNCTION__, __LINE__); printf(f, ##args); puts(""); } while (0);
using namespace std;

class T {
public:
    int x;
public:
    T() {}
    T(int _x): x(_x) {}
    ~T() {
        log("######");
    }
};

class TT: public T {
    int y;
public:
    TT() {}
    TT(int _x): y(_x) {}
/*
    TT(int _x, int _y): y(_y) {
        x = _x;
    }
*/
    TT(int _x, int _y): T(_x), y(_y) {}
    ~TT() {
        log("######");
    }    
};

void func(int t) {
    TT a;
}

int main() {
    func(1);
    return 0;
}