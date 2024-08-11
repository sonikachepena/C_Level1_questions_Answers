#include<stdio.h>
int main(){
    int n;
    printf("enter your two digit number:");
    scanf("%d",&n);
    int a= n%10;
    int b= n/10;
    int c= a+b;
    if(c==10){
        printf("success");
    }
    else{
        printf("failure");
    }
}