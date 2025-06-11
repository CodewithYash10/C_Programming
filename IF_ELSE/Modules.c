#include<stdio.h>
int main()
{
    int n;
    printf("Enter The Value of n : ");
    scanf("%d",&n);

    if(n<0){
        n = n * (-1);
    }

    printf("The absolute Value is : %d",n);


    return 0; 
}