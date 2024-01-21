#include <stdio.h>
#include <stdlib.h>  //здесь находятся служебные функции общего назначения

int main(void){ // void в скобках означает что функция main не будет принимать никаких аргументов.
    if (puts("Hello, world!") == EOF) {
        return EXIT_FAILURE;
    }
    puts("Hello, world!");
    return EXIT_SUCCESS; //какой-то макрос. То же самое что и #define EXIT_SUCCESS 0
}

