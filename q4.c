#include <stdio.h>

int main() {
    int n = 2345, sum = 0;
    sum = sum + n % 10;  // sum becomes 5, n becomes 234
    n = n / 10;
    sum = sum + n % 10;  // sum becomes 9, n becomes 23
    n = n / 10;
    sum = sum + n % 10;  // sum becomes 12, n becomes 2
    n = n / 10;
    sum = sum + n % 10;  // sum becomes 14, n becomes 0
    n = n / 10;
    printf("sum = %d, n = %d\n", sum, n);  // Print the final values of sum and n
    return 0;
}
