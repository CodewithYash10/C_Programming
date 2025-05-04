#include<stdio.h>
int main()
{
    int rowcol;
    printf("enter the rowcol : ");
    scanf("%d",&rowcol);

    for(int i = 1; i <= rowcol; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}