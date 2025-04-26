#include<stdio.h>
int main()
{   
    int l , b;
    printf("Enter The Value Of Lenth : ");
    scanf("%d",l);

    printf("Enter The Value of Breath: ");
    scanf("%d",&b);

    int area = l*b;
    int perimeter = 2*(l+b);

    if(area>perimeter){
        printf("Area is Greater Than Perimeter");
    }if(area<perimeter){
        printf("Perimeter is Greater Than Area");
    }if(area == perimeter){
        printf("Area Is Equal to Perimeter");
    }
    return 0;
}