#include<stdio.h>
int main(){
/*int a=5;
    int *p=&a;
    printf("%d\n",p);
printf("%d",*p);
return 0;*/


/*int a,b,sum;
printf("enter a,b:");
scanf("%d,%d",&a,&b);
int *p=&a;
int *q=&b;
sum=*p+*q;
printf("the sum is %d:",sum);
return 0;
}*/
//OR ELSE THIS METHOD...
int a,b,*p,*q,sum;
printf("enter a,b");
scanf("%d,%d",&a,&b);
p=&a;
q=&b;
sum=*p+*q;
printf("the sum is %d",sum);
return 0;
}