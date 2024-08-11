#include<stdio.h>
int main(){
    int n;
    printf(" enter your number:");
    scanf("%d",&n);
    int a;
    a= n%2;
    int y= n-(a*5);
    printf("the result is: %d",y);
    
}