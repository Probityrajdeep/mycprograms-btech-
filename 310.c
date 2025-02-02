#include <stdio.h>

int main() {
    int advertis = 25000000;
    int service = 35000000;
    long long sales = 150000000000;
    long long totalRevenue = sales + advertis + service;

    printf("Total Revenue of the company: %lld\n", totalRevenue);
    
    return 0;
}
