#include<stdio.h>
int main()
{
    int a;
    printf("Enter The Value of 1st Sides : ");
    scanf("%d",&a);

    int b;
    printf("Enter The Value of 2st Sides : ");
    scanf("%d",&b);

    int c;
    printf("Enter The Value of 3st Sides : ");
    scanf("%d",&c);

    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("Valid Tringle");
    }
    else{
        printf("Not Valid Tringle");
    }
    
    return 0;
}