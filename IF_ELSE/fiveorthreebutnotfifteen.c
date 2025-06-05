#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Value : ");
    scanf("%d",&n);
    
    // if(n%5==0  || n%3==0){
    //     if(n%15!=0){
    //         printf("The Number is Divisible by Three and Five But not Fifteen");
    //     }
    //     else{
    //         printf("The Number Is Divisible By Fifteen");
    //     }
    // }
    // else{
    //     printf("The Number is Not Divisible Three or Five");
    // }


    if((n%5==0 || n%3==0) && n%15!=0){
        printf("The Number is Divisible by Three and Five But not Fifteen");
    }
    else{
        printf("The Number is Not Matching The Required Condition");
    }
    return 0;
}