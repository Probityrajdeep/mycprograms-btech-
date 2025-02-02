#include <stdio.h>

int main() {
    int jyo = 5, reb = 12, temp;
    temp = jyo;
    jyo = reb;
    reb = temp;
    
    printf("Jyo's position: Square %d\nRebecca's position: Square %d\n", jyo, reb);
    return 0;
}
