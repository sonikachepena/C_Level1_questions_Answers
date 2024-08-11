#include<stdio.h>
int main(){
    int n;
    printf("enter your two digit number:");
    scanf("%d",&n);
    int a= n%10;
    int b= 1;
    printf("the result is :%d",((b*10)+a));

}