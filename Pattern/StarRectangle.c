#include<stdio.h>
int main()
{
    int col,row;
    printf("enter a number of row : ");
    scanf("%d",&row);
    printf("enter a number of col : ");
    scanf("%d",&col);
  
    for(int i = 1; i <= row; i++){
        for(int i = 1; i <= col; i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}