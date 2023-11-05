#include<stdio.h>
int main(){
    int a,b,sum=0;
    printf("enter a,b");
    scanf("%d,%d",&a,&b);
    for(int i=a;i<=b;i++){
        sum=sum+i;
    }
    printf("sum of range is:%d",sum);
    return 0;
}