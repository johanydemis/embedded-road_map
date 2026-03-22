#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 10;              // stack
    int *p = malloc(sizeof(int));  // heap

    *p = 20;

    printf("x (stack): %p\n", &x);
    printf("p (heap address): %p\n", p);
    int *arr = malloc(3 * sizeof(int));

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    for(int i = 0; i < 3; i++) {
     printf("%d\n", arr[i]);
    }

    free(arr);

    free(p);

    return 0;
}