#include<stdio.h>
int main(){
    int n;
    printf("enter your three digit number:");
    scanf("%d",&n);
    int a= n%10;
    int b= n/10;
    int e= b%10;
    int f= b/10;
    int c= a+f;
    if(c<10){
        printf("success");
    }
    else{
        printf("failure");
    }
}