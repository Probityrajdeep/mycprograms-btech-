#include <stdio.h>

int main() {
    char ch = 'J';
    printf("Character: %c\n", ch);
    printf("Unicode Point: %d\n", ch);
    printf("Next: %c\n", ch + 1);
    printf("Previous: %c\n", ch - 1);

    return 0;
}
