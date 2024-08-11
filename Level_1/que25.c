#include<stdio.h>
int main(){
    int n;
    printf("enter your four digit number:");
    scanf("%d",&n);
    int first_two = n%100;
    int last_two = n/100;
    int tens = first_two/10;
    int hundred = last_two%10;
    int d= (tens==hundred);
    int e= d%2;
    int f= n-(e*5);
    printf("the result is :%d",f);
}