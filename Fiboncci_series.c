#include<stdio.h>
int main(){
    int n;
    int a=0,b=1;
   printf("enetr n");
   scanf("%d",&n);
   printf("%d,%d",a,b);
   int next_term;
   for(int i=2;i<n;i++){
    next_term=a+b;
    a=b;
    b=next_term;
    printf("%d,",next_term);
   } 
   return 0;
}
