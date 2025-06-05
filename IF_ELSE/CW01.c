#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Value  : ");
    scanf("%d", &n);
    if (n % 5 == 0 && n % 3 == 0)
    {
        printf("Your Value is Divided by 3 and 5");
    }
    /*if(n % 5 == 0){
        printf("\nYour Value is Divided by 5");
    }*/
    else
    {
        printf("Not Divided by three or five");
    }
    return 0;
}