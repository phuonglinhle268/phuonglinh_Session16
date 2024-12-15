#include <stdio.h>

int found(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;  
        }
    }
    return -1;  
}
int main() {
    
    int arr[] = {1, 2, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);  
    int value = 7;
    int index = found(arr, size, value);
    if (index != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri: %d\n", value, index);
    } else {
        printf("Phan tu %d khong duoc tim thay trong mang.\n", value);
    }

    return 0;
}
