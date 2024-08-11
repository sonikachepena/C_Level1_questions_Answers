#include <stdio.h>
int main(){
    int n1,n2;
    printf("enter your two twodigit numbers:");
    scanf("%d %d",&n1,&n2);
    int a= n1+n2;
    if(a<100){
        printf("the sum is:%d",a);
    }
    else{
        printf("the difference :%d",(n1-n2));
    }

}