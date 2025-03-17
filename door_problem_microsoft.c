#include <stdio.h>
#include <math.h>

int main() {
    int doors[100] = {0}; // All doors are initially closed

    for (int person = 1; person <= 100; person++) {
        for (int door = person; door <= 100; door += person) {
            doors[door - 1] = !doors[door - 1]; // Toggle the door
        }
    }

    printf("Final status of doors:\n");
    for (int i = 0; i < 100; i++) {
        printf("Door %d is %s\n", i + 1, doors[i] ? "open" : "closed");
    }

    return 0;
}
