#include <stdio.h>
void incdec(int n){
    if(n == 0) return;
    printf("%d\n",n);
    incdec(n-1);
    printf("%d\n",n);
    return;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    incdec(n);
    return 0;
}