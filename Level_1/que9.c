#include<stdio.h>
int main(){
    int n;
    printf("enter your three digit number:");
    scanf("%d",&n);
    int c=n/100;
    printf("the result hundereds place digit:%d",c);
}