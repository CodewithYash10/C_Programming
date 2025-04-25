#include <stdio.h>
int main()

{
    float maths = 36;
    float Phy = 32;
    float Che = 21;
    float Eng = 40;


    float percentage = (maths + Che + Eng + Phy) / 160 * 100;

    printf("The Percentage Is : %f",percentage);



    return 0;
}