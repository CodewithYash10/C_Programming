#include <stdio.h>
int main()
{
    int n;
    printf("enter the num: ");
    scanf("%d", &n);
    for (int i = n; i <= n*10; i=i+n)
    {
        printf("%d ",i);
    }
    return 0;
}