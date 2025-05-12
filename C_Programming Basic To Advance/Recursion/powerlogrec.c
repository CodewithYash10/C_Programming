#include <stdio.h>
int powerlog(int a, int b)
{
    if (b == 0) return 1;
    if (b == 1) return a;
    int x = powerlog(a, b / 2);
    if (b % 2 == 0) return x * x;
    else return x * x * a;
}
int main()
{
    int a;
    printf("enter the base : ");
    scanf("%d", &a);
    int b;
    printf("enter the power : ");
    scanf("%d", &b);

    return 0;
}