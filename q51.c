#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The first %d numbers are: ", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
        sum += i;
    }

    printf("\nTheir sum is: %d\n", sum);

return 0;
}