#include <stdio.h>
int main()
{
    // and operater************

    /*int num;
    printf("Enter a num: ");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("given number is div by 3 and 5");
    }
    else
    {
        printf("given number is not div");
    } */

    //or operator *************

    int num;
    printf("Enter a num: ");
    scanf("%d", &num);
    if (num % 3 == 0 || num % 5 == 0)
    {
        printf("given number is div by 3 or 5");
    }
    else
    {
        printf("given number is not div");
    } 

    return 0;
}