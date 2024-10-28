#include <iostream>

using namespace std;

#if 0
class A {
public:
    int x;
    A() {}
    A(int y) {
        x = y;
    }
};

class B {
public:
    int z;
    A t;

};
#endif

class vector {
private:
    int *data, tot;

public:
    vector(): data(NULL), tot(0) {}
    
    vector(int n): tot(n) {
        data = new int[n + 1];
    }

    ~vector() {
        tot = 0;
        delete[] data;
        data = NULL;
    }

    int& operator [] (const int& x) {
        return *(data + x);
    }

    void push_back(int x) {
        
    }

} v;

int main() {
    v = vector(10);
    v[0] = 1, v[1] = 2;
    cout << v[0] << ' ' << v[1] << endl;
    return 0;
}