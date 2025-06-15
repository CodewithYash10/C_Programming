#include <stdio.h>
int main()
{
    int percentage;
    printf("Enter the percentage: ");
    scanf("%d", &percentage); // Fix: Added &

    if (percentage > 100 || percentage < 0)
    {
        printf("Enter a valid percentage\n");
    }
    else if (percentage < 33)
    {
        printf("You are fail\n");
    }
    else
    {
        printf("You are pass\n");
    }

    return 0;
}
