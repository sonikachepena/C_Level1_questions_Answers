#include<stdio.h>
int main(){
    int n;
    printf("enter your two digit number:");
    scanf("%d",&n);
    int c=n%10;
    int d=n/10;
    int e=c+d;
    printf("the sum of the digits: %d",e);
}