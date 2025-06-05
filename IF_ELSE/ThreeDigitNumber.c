#include<stdio.h>
int main()
{
    int n;
    printf("Enter The Value : ");
    scanf("%d",&n);
    if(n>99 && n<999){
        printf("It is a three digit number");
    }else{
        printf("It is not three digit number");
    }
    return 0;
}