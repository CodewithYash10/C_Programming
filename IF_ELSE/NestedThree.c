#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the 1st Value : ");
    scanf("%d",&a);
    printf("Enter the 2st Value : ");
    scanf("%d",&b);
    printf("Enter the 3st Value : ");
    scanf("%d",&c);
    
    if(a>b){
        if(a>c){
            printf("%d is the gratest value",a);
        }else{
            printf("%d is the gratest value",c);
        }
    }
    else{
        if(b>c){
            printf("%d is the gratest value",b);
        }else{
            printf("%d is the greatest value",c);
        }
    }
    return 0;
}