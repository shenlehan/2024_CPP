#include <iostream>
using namespace std;

class Random {
    unsigned int seed;
public:
    Random() {}
    Random(unsigned int t): seed(t) {}
    unsigned int operator ()() {
        seed = 114514 * seed % 1919810 + 12345;
        return seed;
    }
};

int main() {
    Random r(1);
    int x = r();
    return 0;
}