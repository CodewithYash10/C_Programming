#include<stdio.h>
int main()
{
    double x1,x2,x3,y1,y2,y3;
    printf("Enter The Value Of x1 : ");
    scanf("%d",&x1);
    printf("Enter The Value Of y1 : ");
    scanf("%d",&y1);
    printf("Enter The Value Of x2 : ");
    scanf("%d",&x2);
    printf("Enter The Value Of y2 : ");
    scanf("%d",&y2);
    printf("Enter The Value Of x3 : ");
    scanf("%d",&x3);
    printf("Enter The Value Of y3 : ");
    scanf("%d",&y3);

    double m1,m2;
    
    m1 = (y2-y1)/(x2-x1);
    m2 = (y3-y2)/(x3-x2);

    if(m1 = m2){
        printf("ST Line");
    }
    else{
        printf("Not ST Line");
    }

    return 0;
}