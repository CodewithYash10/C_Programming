#include<stdio.h>
int main(){
    float num1,num2;
    char op;

    printf("enter the first number: ");
    scanf("%f",&num1);
    printf("enter secound number: ");
    scanf("%f",&num2);
    printf("enter the operator: ");
    scanf("%c",&op);

    switch(op){
        case '+':
            printf("sum = %0.2f",num1 + num2);
            break;
        case '-':
            printf("diff = %0.2f",num1-num2);
            break;
        
    }
    return 0;
}