#include <stdio.h>
int main() {
    int a = 3;  
    int *ptr = &x;  
    // C�ch 1: toan tu *
    printf("Cach 1:\n");
    printf("Gia tri cua a: %d\n", *ptr);  
    printf("Dia chi cua a: %d\n", &a);   

    // C�ch 2: con tro
    printf("Cach 2:\n");
    printf("Gia tri cua a: %d\n", *ptr);  
    printf("Dia chi cua a: %d\n", ptr); 

    return 0;
} 
