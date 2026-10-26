#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main() {
    struct xx {
        int x;
        char name[6];
    };

    struct xx *s = malloc(sizeof(struct xx));
    printf("Pointer size: %zu bytes\n", sizeof(s));
    printf("Structure size: %zu bytes\n", sizeof(struct xx));
    printf("Size through pointer: %zu bytes\n", sizeof(*s));
    
    s->x = 3;
    strcpy(s->name, "hello");

    printf("%d\n", s->x);
    printf("%s", s->name);
}