#include <stdio.h>

int main() {
    fprintf(stdout, "%s", __FUNCTION__);
    return 0;
}