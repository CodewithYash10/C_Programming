#include <stdio.h>
int main()
{
    int n;
    printf("enter the num: ");
    scanf("%d", &n);
    int a = 3;
    for (int i = 3; i <= n; i++)
    {
        printf("%d ", a);
        a = a * 4;
    }
    return 0;
}