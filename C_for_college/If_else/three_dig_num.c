#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num > 99 && num < 1000){
        printf("Given num is three dig\n");
    }else{
        printf("Given num is not three dig num\n");
    }

    return 0;
}