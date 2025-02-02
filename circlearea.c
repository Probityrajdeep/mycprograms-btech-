#include<stdio.h>
int main(){
    int radius,pi,area;
    printf("Enter the radius of circle");
    scanf("%d",&radius);
    pi =22/7;
    area=pi*radius*radius;
    printf("The area of the circle is: %d",area);

    return 0;
}