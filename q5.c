#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
        switch (num > 0) {
            case 1:
                printf("%d is positive.\n", num);
                break;
            case 0:
                printf("%d is not positive.\n", num);
                break;
            default:
                printf("invalid input");
        }
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}
