#include<stdio.h>
int main(){
    int n;
    printf("enter your three digit number:");
    scanf("%d",&n);
    int c=n%10;
    int d=(n/10)%10;
    int e=n/100;
    printf("the sum is %d",((c*100)+(d*10)+e));
}