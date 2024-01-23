#include <stdio.h>
#include <stdlib.h>


void readInArray(int *arr, int size){
    int i;
    printf("%s", "Enter your list of numbers: ");
    for (i = 0; i < size; i++){
        scanf("%d", &arr[i]);
        printf("%d\n", arr[i]);
    }
}



void binary_search(int *arr, int key)
{
    int left = 0;
    int right = sizeof(arr) / sizeof(arr[0]);
    int mid = (right + left) / 2;
    
    if (key == arr[mid]){
        printf("%d has been found.", key);
        return;
    }

    if (arr[mid] < key){
        while (left <= right){
            left = mid + 1;
            mid = (left + right) / 2;
            if (key == arr[mid]){
                printf("%d has found.", key);
                return;
            }
    }
        puts("your number hasn`t found");
        return;
  }
    if (arr[mid] > key){
       while (right >= left){
          right = mid - 1;
          mid = ( left + right ) / 2;
          if (key == arr[mid]){
             printf("%d has found.", key);
             return;
          }
      }
         puts("Your number hasn`t been found");
         return;
      
    }
}



int main(void)
{
    unsigned int size;
    puts("Enter your list size: ");
    scanf("%u", &size);

    int arr[size];
    readInArray(arr, size);
    
    puts("What number are you looking for?");
    int number;
    scanf("%d", &number);
    binary_search(arr, number);
    return EXIT_SUCCESS;
}
