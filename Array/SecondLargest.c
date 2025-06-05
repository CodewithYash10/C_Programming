#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[7] = {-2,-3,-400,-5,-6,-2000,-5};
    int max = INT_MIN; // sabse chota number
    int smax = INT_MIN;
    for(int i = 0; i <= 6; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    for(int i = 0; i <= 6; i++){
        if(){
            max = arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}