#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b);

int main(void){
    swap(15, 10);
    return EXIT_SUCCESS;
}

void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
    printf("swap: a = %d, b = %d \n", a, b);
}
