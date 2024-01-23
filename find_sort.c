#include <stdio.h>
#include <stdlib.h>


int findSmallest(int *arr, size_t size)
{
    size_t i;
    int smallest = arr[0];
    int smallest_indx = 0;
    for (i=0;i < size; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
            smallest_indx = i;
        }
    }
    return smallest_indx;
}

int *selectionSort(int *arr, size_t size){
    int newArr[size];
    size_t  i;
    for (i = 0; i<size; i++){
        int smallest = findSmallest(arr+i, size-i) + i;
        newArr[i] = arr[smallest];
        arr[smallest] = arr[i];
    }
    for (i=0; i<size; i++){
        arr[i] = newArr[i];
    }
}

int newArray(int *arr, int size){
    int i;
    for(i=0; i<size; i++){
        printf("Enter your arrays [%d]  digit : ", i);
        scanf("%d", &arr[i]);
        printf("Entering your arrays [%d] digit is finished. ", i);
}
}


int main(void)
{
    int size;
    puts("Enter your arrays size: ");
    scanf("%d", &size);
    int arr[size];
    newArray(arr, size);
    selectionSort(arr, size);
    puts("Sorted array");
    for (int i = 0; i<size; i++){
        printf("%d ", arr[i]);
    }
    return EXIT_SUCCESS;
}
