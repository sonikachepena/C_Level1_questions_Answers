#include<stdio.h>
int main(){
    int n;
    printf("enter your four digit number:");
    scanf("%d",&n);
    int a= n%100;
    int b= n/100;
    int tens = a/10;
    int hun = b%10;
    int c= tens+hun;
    if(c==10 && (tens || hun >7)){
        printf("success");
    }
    else{
        printf("failure");
    }
}