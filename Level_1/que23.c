#include<stdio.h>
int main(){
    int n;
    printf("enter your two digit number:");
    scanf("%d",&n);
    int a= n%10;
    int b= n/10;
    int c= a+b;
    int d= c%2;
    int y= n-(d*5);
    printf("the result is: %d",y);
}