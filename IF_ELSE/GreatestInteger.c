#include<stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter The Value of a : ");
    scanf("%d",&a);
    printf("Enter The Value of b : ");
    scanf("%d",&b);
    printf("Enter The Value of c : ");
    scanf("%d",&c);

    if(a>b && b>c){
        printf("a is Grater");
    }
    if(b>a && b>c){
        printf("b is Greater");
    }else{
        printf("c is Greater");
    }

    return 0;
}