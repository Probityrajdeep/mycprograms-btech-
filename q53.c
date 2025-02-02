#include<stdio.h>
int main()
{
    int table,j,i=0;
    printf("Enter the table you want: ");
    scanf("%d",&table);
    printf("Enter the row you want: ");
    scanf("%d",&j);

    while (i<=j)
    {
        printf("%d X %d = %d\n",table,i,table*i);
        i++;
    }
    
    return 0;
}