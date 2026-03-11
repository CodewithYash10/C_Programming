#include<stdio.h>
int main(){
    int selling_price,cost_price;
    printf("Enter the cost price : ");
    scanf("%d",&cost_price);
    printf("Enter the selling price: ");
    scanf("%d",&selling_price);
    if(cost_price > selling_price){
        printf("loss\n");
    }else{
        printf("profit\n");
    }

    return 0;
}