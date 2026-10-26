#include<stdio.h>
void main() {
    struct xx {
        int x=3;
        char name[] = 'hello';
    };
    struct xx *s = malloc(sizeof(struct xx));
    printf("%d", s->x);
    printf("%s", s->name);
}