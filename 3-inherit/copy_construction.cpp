#include <iostream>
#include <cstring>

class A{
    char *str;
public:
    A(const char *s) {
        strcpy(str, s);
    }
};

A a1("asd");
A a2(a1);