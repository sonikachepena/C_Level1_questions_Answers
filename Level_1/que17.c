#include<stdio.h>
int main(){
    int n;
    printf("enter your two digit number:");
    scanf("%d",&n);
    int c= n%10;
    int d= n/10;
    printf("the rsult is:%d",(d*10)+(c*0));

}