#include<stdio.h>
int main(){
    int num;
    printf("Enter a num :");
    scanf("%d",&num);
    if(num%2==0){
        printf("Given number is even");
    }else{
        printf("Given number is odd");
    }
    return 0;
}