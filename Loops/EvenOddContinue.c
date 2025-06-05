#include<stdio.h>
int main()
{
//    **************For Odd Number******************


    // int i;
    // for (int i=1; i<=100; i++){
    //     if(i%2==0){
    //         continue;
    //     }
    //     printf("%d ",i);
    // }



    // **********For Even Number****************


    for (int i=1; i<=100; i++){
        if(i%2!=0){
            continue;
        }
        printf("%d ",i);
    }


    return 0;
}