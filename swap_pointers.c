#include <stdio.h>
#include <stdlib.h>

void swap(int *pa, int *pb);

int main(void){
    int a = 5;
    int b = 4;
    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return EXIT_SUCCESS;
}

void swap(int *pa, int *pb){
    int t = *pa;
    *pa = *pb;
    *pb = t;
    return;
}
