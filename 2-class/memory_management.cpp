#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

const int NUM = 32;

class A {
public:
    void* operator new(size_t size);
    void operator delete(void *p);
private:
    static A *p_free;
    A *next;
};

A* A::p_free = NULL;
void *A::operator new(size_t size) {
    if (p_free == NULL) {
        p_free = (A*)malloc(size * NUM);
        for (int i = 0; i < NUM - 1; ++i) {
            p_free[i].next = &p_free[i + 1];
        }
        p_free[NUM - 1].next = NULL;
    }
    A *p = p_free;
    p_free = p_free->next;
    memset(p, 0, size);
    return p;
}

#if 0
void *A::operator new(size_t size, void *p, void* q) {
    return p;
}
#endif

void A::operator delete(void *p) {
    ((A*)p)->next = p_free;
    p_free = (A*)p;
}

int main() {
    return 0;
}