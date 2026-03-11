#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a first ,secound and third : \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is greatest",a);
    }
    if(b>a && b>c){
        printf("%d is greatest",b);
    }
    if(c>b && c>a){
        printf("%d is greatest\n",c);
    }

    return 0;
}