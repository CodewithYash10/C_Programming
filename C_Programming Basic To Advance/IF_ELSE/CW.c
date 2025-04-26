#include<stdio.h>
int main()
{
    int Year;
    printf("Enter The Value Of Year : ");
    scanf("%d",&Year);

    if(Year + 4){
        printf("it is leap year");
    }
    else{
        printf("it is not leap year");
    }
    return 0;
}