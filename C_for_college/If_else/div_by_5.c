#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num%5==0){
        printf("Given num is div by 5");
    }else{
        printf("Not div by 5\n");
    }
    return 0;
}