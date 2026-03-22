#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(sizeof(int));
    *p = 42;

    printf("p address: %p\n", p);

    return 0;
}