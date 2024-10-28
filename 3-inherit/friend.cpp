#include <iostream>
#include <cstring>
using namespace std;
class A;
class C {
public:
    void print(A& a); 
};

class A {
private:
    int x;
public:
    friend void func1(A a);
    friend class B;
    friend void C::print(A& a);

public:
    A() {}
    A(int _x): x(_x) {}
    ~A() {}
};

void C::print(A& a){
        cout << a.x << endl;
}
void func1(A a) {
    cout << a.x << endl;
}

class B {
    void print(A a) {
        cout << a.x << endl;
    }
};


int main() {

    
    return 0;
}