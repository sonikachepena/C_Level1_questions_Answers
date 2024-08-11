#include<stdio.h>
int main(){
    int n;
    printf("enter your three digit number:");
    scanf("%d",&n);
    int a= n%10;
    int b= n/10;
    int e= b%10;
    int f= b/10;
    int c= a+f+e;
    if(c<10){
        printf("the sum is: %d",c);
    }
    else{
        int r= c%10;
        int y= c/10;
        int g= r+y;
        printf("the sum is : %d",g);
    }
}