#include <stdio.h>

int main() {
    int arr[20];
    printf("Input 20 elements in the array:\n");
    for (int i = 0; i < 20; i++) {
        printf("element%d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Elements in array are:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", arr[i]);
    }

    return 0;

}