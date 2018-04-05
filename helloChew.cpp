#include <cstdio>
#include "myHeader.h"

int main() {

    int a = 1, b = 1;
    while (a < 10) {
        printf ("a = %d, b = %d\n", a, b);
        printf ("max = %d\n", max(a++, b++));
        
    }
}