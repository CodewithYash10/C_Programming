#include<stdio.h>
int main(){
    // Taking input
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    // 100 97 94....
    int a = 100;
    for(int i=1;a>0;i++)
    {
        printf("%d ",a);
        a = a - 3;
    }
    return 0;
}