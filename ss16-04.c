#include <stdio.h>

void printarr(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("Phan tu %d: %d\n", i + 1, *(arr + i)); 
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);  
    printArray(arr, size);

    return 0;
}

