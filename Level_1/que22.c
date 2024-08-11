#include<stdio.h>
int main(){
    int n;
    printf("enter your number:");
    scanf("%d",&n);
    int b= n/10;
    int c= b%10;
    int a = c%2;
    int y= n-(a*5);
    printf("the result is : %d",y);
}