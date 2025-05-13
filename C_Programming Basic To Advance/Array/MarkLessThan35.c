#include <stdio.h>

int main()
{
    // int marks[5];

    // for(int i = 0; i < 5; i++) {
    //     printf("Enter The Element Number %d : ", i + 1);
    //     scanf("%d", &marks[i]);  // Fix: Use marks[i] instead of marks[5]

    //     if(marks[i] < 35) {
    //         printf("%d ", marks[i]);
    //     }
    // }



    int marks [10] = {95,96,31,25,100,50,15,89,97,30};
    for(int i=0;i<10;i++){
        if(marks[i]<35){
            printf("%d ",i);
        } 
    }       
    return 0;
}
