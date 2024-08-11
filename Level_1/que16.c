#include<stdio.h>
int main(){
    int x,y;
    printf("enter your number four digit:");
    scanf("%d",&x);
    int a = x % 100;
    int  b = x/100;
    int ones = a %10;
    int  tens = a/ 10;
    int rev = (ones * 10) + tens;
    y = (b* 100) + rev;
    printf("%d",y);
}