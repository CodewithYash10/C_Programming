#include<stdio.h>
int main()
{
    int a, b; //a>b 
    printf("Enter Dividend: ");
    scanf("%d",&a);

    printf("Enter Divisor: ");
    scanf("%d",&b);

    /*
    ****************Formula*****************


    int q = a/b;
    int r = a - b * q;

    printf("The Remainder When %d Is divided by %d is: %d",a,b,r);
    
    */

    int r = a % b;
    printf("The Remainder When %d Is divided by %d is: %d",a,b,r);


    return 0;
}