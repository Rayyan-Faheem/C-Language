#include<stdio.h>
void swap(int *a,int *b);
int main(){
    int a,b;
    printf("enter a ,b:");
    scanf("%d,%d",&a,&b);
swap(&a,&b);
printf("the value of a is %d",a);
printf("the value of b is %d",b);
return 0;
}
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return;
}