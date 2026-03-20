/*void swap(int *a, int *b);*/
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Pointer a: %p\n", a);
    printf("Pointer b: %p\n", b);
}

int main()
{
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    printf("Address of x: %p\n", &x);
    printf("Address of y: %p\n", &y);
    return 0;
}