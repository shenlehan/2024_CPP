#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
#if 0
    bool operator ==(const Complex& x) {
        return (real == x.real && imag == x.imag);
    }
#endif
    bool operator ==(const Complex& x) {
        return (this->real == x.real && this->imag == x.imag);
    }
    bool operator !=(const Complex& x) {
        return (*this == x);
    }
    Complex operator -() { // 取相反数
        Complex tmp;
        tmp.imag = -imag;
        tmp.real = -real;
        return tmp;
    }
};

class Count {
    int val;
public:
    Count& operator ++() { // 前置 ++，即 ++x
        ++val;
        return *this;
    }
    Count operator ++(int) { // 后置 ++，即 x++，注意这里不是引用类型
        Count tmp = *this;
        ++(*this);
        return tmp;
    }
};

int main() {
    return 0;
}