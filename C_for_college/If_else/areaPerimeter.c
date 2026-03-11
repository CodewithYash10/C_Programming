#include<stdio.h>
int main(){
    int length,breath;
    printf("Enter a length: ");
    scanf("%d",&length);
    printf("Enter the breath :");
    scanf("%d",&breath);

    int area = length * breath;
    int perimeter  = 2 * (length + breath);

    if(area > perimeter){
        printf("area is greater than perimeter");
    }else{
        printf("area is less than perimeter");
    }
    return 0;
}