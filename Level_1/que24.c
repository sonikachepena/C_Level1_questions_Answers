#include<stdio.h>
int main(){
    int n;
    printf("enter your three digit number:");
    scanf("%d",&n);
    int a= n%10;
    int b= n/10;
    int c= b/10;
    int d= (a==c);
    int e= d%2;
    int f= n-(e*5);
    printf("the result is : %d",f);
}