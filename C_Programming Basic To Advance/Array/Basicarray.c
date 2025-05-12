#include<stdio.h>
int main()
{
    int arr[5];
    for(int i=0;i <= 4;i++){ // i = 0,1,2,3,4
        printf("\nEnter element number %d : ",i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

    // int arr[5] = {2,4,6,8,1};
    // arr[4] = 100; // {2,4,6,8,100}
    // arr[1] = 1; // {2,1,6,8,100}
    // printf("%d",arr[-1]);

    // float a[3] ={1.2,3.4,5.7};
    // printf("%f",a[2]);

    // char arr[4] = {'a', 'n', 'Y', '%'};
    // printf("%c",arr[3]);

    return 0;
}