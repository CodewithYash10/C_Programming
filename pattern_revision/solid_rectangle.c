#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter a number of row :");
    scanf("%d", &row);
    printf("Enter a number of col :");
    scanf("%d", &col);
    for (int i = 1; i <= row; i++)
    {
        for (int i = 1; i <= col; i++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}