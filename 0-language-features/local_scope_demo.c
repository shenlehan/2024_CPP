#include <stdio.h>
#include <stdlib.h>
#define log(f, args...) do { printf("%s %d ", __FUNCTION__, __LINE__);\
                             printf(f, ##args); } while(0)
#define max(x, y) x > y ? x : y

int func(int x1) {
    int a = 1;
    for (int i = 0; i < 10; ++i) {
        printf("%d ", i);
    }
    int b = 2;
    return x1 + a + b;
}

extern void func2();

int (*f)(int);

int ma\
in() {
    log("POINT 1\n");
    printf("%d\n", func(10));
//    func2();
    f = func;
    f(10);
    return 0;
}