#include<stdio.h>
int main ()
{
    float radius;
    // float pi = 3.14 
    printf("Give The Radius Value: ");
    scanf("%f",&radius);
    
    float pi = 3.14;
    float area = pi * radius * radius;

    printf("The Radius is: %f",area);

    return 0;
}