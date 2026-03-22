#include <stdio.h>
void printArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d \n", arr[i]);
    }
}

void func(int arr[]) {
    printf("Inside func sizeof(arr): %zu\n", sizeof(arr));
}

int main() {
    int arr[3] = {1, 2, 3};
    int *p = arr;

    printf("arr: %p\n", arr);
    printf("&arr[0]: %p\n", &arr[0]);
    printf("p: %p\n", p);
    printf("arr[0]: %d\n", arr[0]);
    printf("*(arr+1): %d\n", *(arr+1));
    printf("*(p+2): %d\n", *(p+2));

    printArray(arr, 3);
    printf("sizeof(arr): %lu\n", sizeof(arr));
    printf("sizeof(p): %lu\n", sizeof(p));
    func(arr);
    return 0;
}