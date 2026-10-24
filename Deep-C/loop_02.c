#include<stdio.h>

int main() {

int i,j, count= 0;

for ( i = 0; i < 5 ;i ++) {
    for ( j = 0 ; j < i ; j ++) {
        printf("%d  %d \t", i,j);
        count++;
    }
    printf("\n");

}
printf("%d", count);

return 0;
}