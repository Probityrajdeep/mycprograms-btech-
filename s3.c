#include<stdio.h>
int main()
{   int a,b;
    float c,d;
    printf("give the value of integer a : ");
    scanf("%d",&a);

    printf("give the value of integer b : ");
    scanf("%d",&b);

    printf("give the value of integer c : ");
    scanf("%.2f",&c);

    printf("give the value of integer d : ");
    scanf("%.2f",&d);

    printf("the adition of two integers are : ",a+b);
    
    printf("the substraction of two integer are : ",a-b);

    printf("the adition of two float are : ",c+d);

    printf("the substract of two float are : ",c-d);


return 0;
}