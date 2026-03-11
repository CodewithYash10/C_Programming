#include<stdio.h>
int main(){
    int first,secound,third;
    printf("enter first num: ");
    scanf("%d",&first);
    printf("enter secound num: ");
    scanf("%d",&secound);
    printf("enter third num: ");
    scanf("%d",&third);
    if(first>secound && first>third){
        printf("%d is greatest",first);
    }
    if(secound>first && secound>third){
        printf("%d is greatest",secound);
    }
    if(third>first && third>secound){
        printf("%d is greater",third);
    }
    return 0;
}