#include<stdio.h>
int main(){
    int num;
    printf("Enter a num :");
    scanf("%d",&num);
    if(num < 0){
        num = num * (-1);
    }
    printf("The Modulo is : %d\n",num);
    return 0;
}