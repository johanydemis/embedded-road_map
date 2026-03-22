#include <stdio.h>
void printArray(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
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

    return 0;
}