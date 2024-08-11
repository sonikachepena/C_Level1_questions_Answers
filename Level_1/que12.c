#include<stdio.h>
int main(){
    int n;
    printf("enter your three digit number:");
    scanf("%d",&n);
    int c=n%10;
    int d=(n/10)%10;
    int f=n/100;
    int e=c+d+f;
    printf("the sum of the digits: %d",e);
}