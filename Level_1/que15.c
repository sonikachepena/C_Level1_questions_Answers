#include<stdio.h>
int main(){
    int n;
    printf("enter your number four digit:");
    scanf("%d",&n);
    int c=n%100;
    int d=n/100;
    int e=c%10;
    int g=c/10;
    int reverse=(e*10)+g;
    printf("the sum is:%d",(d*100)+reverse);
}