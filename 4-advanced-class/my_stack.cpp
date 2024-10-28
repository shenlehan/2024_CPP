#include <iostream>
#include <cstring>
using namespace std;

#if 0
template<class T>
class stack {
private:
    struct node {
        T val;
        node *nxt, *prev;
    } *head, *tail, *new_node;
    size_t size;
    stack(): head(NULL), tail(NULL), new_node(NULL) {
        size = 0;
    }

public:
    void pop() {

    }

};
#endif

class A {
    int x;
    char s[100];
    double d;
public:
    A() {}
    A(int t) {
        x = t;
    }
    A(char *str) {
        strcpy(s, str);
    }
    A(double dd) {
        d = dd;
    }
};

int main() {
    A a1; // or A a1 = A(); 但不可以 A a1();
    A a2(1); // or A a2 = A(1) or A a2 = 1;
    A a3("asd"); // or A a2 = A("asd") or A a2 = "asd";
    A a3(3.14); // or A a2 = A(3.14) or A a2 = 3.14;

    A *a5 = new A;
    A *a6 = new A(2);
    A *a7 = new A("asd");
    A *a8 = new A(3.14);

    A *a9 = new A[100]; // 只能调用默认构造函数
    A a[10] = {A(1), A(), A("asdd"), A(3.1415)};
    return 0;
}