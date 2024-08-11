#include<stdio.h>
int main(){
    int n;
    printf("enter your three digit number:");
    scanf("%d",&n);
    int c=(n/10)%10;
    printf("the tens digit is:%d",c);
}