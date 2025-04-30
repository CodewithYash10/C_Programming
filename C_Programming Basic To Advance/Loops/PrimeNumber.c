#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d",n);

    int a = 0;
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==0){
        printf("The number is Prime");
    }else{
        printf("The number is Composite");
    }
    return 0;
}