#include <iostream>
#include <cstdlib>
#include <cstdio>
#define log(f, args...) do { printf("%d %s ", __LINE__, __FUNCTION__); printf(f, ##args); puts(""); } while (0);
using namespace std;

template<class T>
class vector;

template<class T>
class node {

    friend vector<T>;

private:
    T val[100];
    static size_t id;
    node *next, *prev;

};

template<class T>
class vector {

};

int main() {
    return 0;
}