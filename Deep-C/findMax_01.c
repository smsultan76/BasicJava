#include <stdio.h>

int max(int a[], int n) {
    int max = a[0];

    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    return max;
}

int main() {
    int a[] = {1, 2,9,3, 5, 7};
    int n = sizeof(a) / sizeof(a[0]);

    printf("%d\n", max(a, n));

    return 0;
}