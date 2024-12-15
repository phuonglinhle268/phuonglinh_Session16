#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;  
    *a = *b;         
    *b = temp;      
}
int main() {
    int a = 1;
	int b = 3; 
    printf("Truoc khi doi:\n");
    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("Sau khi doi:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
