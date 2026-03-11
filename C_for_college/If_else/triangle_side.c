#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a first,secound and thirs number: \n");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("given number forms a triangle\n");
    }else{
        printf("not able to form triangle\n");
    }
    return 0;
}