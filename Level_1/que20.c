#include<stdio.h>
int main(){
    int n;
    printf("enter your three digit number:");
    scanf("%d",&n);
    int a = n%10;
    int b= (n/10)%10;
    int c= n/100;
    printf("the result is:%d",(c*100)+(b*0)+a);
} 
