#include<stdio.h>
int main(){
    int n1,n2;
    printf("enter your two three digit numbers:");
    scanf("%d %d",&n1,&n2);
    int f= n1%10; // ones
    int a= n1/10;
    int b= a%10; 
    int g= a/10; // hun
    int h= n2%10; //ones
    int c= n2/10;
    int d= c%10;
    int i= c/10; //hun
    if((f+g)>(h+i)){
        printf("the result is:%d",(f+b+g));

    }
    else{
        printf("the result is :%d",(h+d+i));
    }
}