#include <stdio.h>
int main(){
    int n1,n2;
    printf("enter your two twodigit numbers:");
    scanf("%d %d",&n1,&n2);
    if(n1<n2){
        int a= n2%10;
        int b= n2/10;
        printf("the sum is:%d",(a+b));
    }
    else{
        int c= n1%10;
        int d= n1/10;
        printf("the sum is:%d",(c+d));
    }
}