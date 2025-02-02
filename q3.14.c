#include <stdio.h>

int main() {
    float original_Cost, selling_Price;

    printf("Enter the original cost: ");
    scanf("%f", &original_Cost);
    printf("Enter the selling price: ");
    scanf("%f", &selling_Price);

    if (selling_Price > original_Cost) {
        printf("Profit: %.2f\n", selling_Price - original_Cost);
    } else if (selling_Price < original_Cost) {
        printf("Loss: %.2f\n", original_Cost - selling_Price);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
