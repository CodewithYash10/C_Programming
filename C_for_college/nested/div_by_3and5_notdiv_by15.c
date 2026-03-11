#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if((a%3==0) || (a%5==0)){
        if(a%15!=0){
            printf("given num is div by 3 or 5 but not div by 15");
        }
        else{
            printf("given num is div by 15");
        }
    }
    else{
        printf("given num is not div by 3 or 5");
    }

    return 0;
}