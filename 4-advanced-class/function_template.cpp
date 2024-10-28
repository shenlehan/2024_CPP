#include <iostream>
using namespace std;

template<class T>
T calc(T a, T b) {
    return (T)(a > b ? a : b);
};

int main() {
    int x = 1, y = 2;
    cout << calc(x, y) << endl;
    double m = 1.1, n = 1.2;
    cout << calc(m, n) << endl;

    cout << calc<double> (x, m) << endl; // use who?

    return 0;
}