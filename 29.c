#include <stdio.h>

int main() {
    char ch;
    char s[20];

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("Enter a sentence: ");
    scanf("%s", s);

    printf("%c,%s\n", ch, s);

    return 0;
}