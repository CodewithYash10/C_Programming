#include <stdio.h>
int main()
{
    int n;
    printf("Enter The Number : ");
    scanf("%d", &n);
    int a = 0;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % 2 == 0)
        {
            a = 1;
            break;
        }
    }
    if (a == 0)
        printf("The given number is prime\n");
    else
        printf("The given Number is Composite\n");
    return 0;
}