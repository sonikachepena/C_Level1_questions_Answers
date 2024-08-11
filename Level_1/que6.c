#include<stdio.h>
int main(){
    int n;
    printf("enter your two digit number:");
    scanf("%d",&n);
    int c=n%10;
    printf("the result ones digit:%d",c);
}