#include <stdio.h>

void test(void) {
    static int a = 0;
    int b = 0;

    a++;
    b++;

    printf("a = %d, b = %d\n", a, b);
}

int main(void) {
    test();
    test();
    test();

    return 0;
}