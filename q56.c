#include <stdio.h>
#include <math.h>

int main() {
    int num, orig, rem, n = 0, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    orig = num;
    while (orig != 0) {
        orig /= 10;
        n++;
    }
    orig = num;
    while (orig != 0) {
        rem = orig % 10;
        sum += pow(rem, n);
        orig /= 10;
    }
    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}