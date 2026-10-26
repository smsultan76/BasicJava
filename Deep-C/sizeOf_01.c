#include<stdio.h>
void main(){
    int i = 12;
    int j = sizeof(i++);
    printf("%d %d\n", i,j);
}