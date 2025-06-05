#include<stdio.h>
int main()
{
    int CP,SP;
    printf("Enter The Cost Price : ");
    scanf("%d",&CP);

    printf("Enter The Selling Price : ");
    scanf("%d",&SP);

    if(SP>CP){
        printf("You are Profit");
    }
    if(CP==SP){
        printf("No Profit No Loss");
    }
    else{
        printf("You are Loss");
    }
    return 0;
}