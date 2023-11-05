#include<stdio.h>
void decreas(int n){
    if(n==0) return;
    printf("%d\n",n);
     decreas(n-1);
     //printf("%d\n",n); ->to print 1 to n.
     return;
}
int main(){
    int n,d;
    printf("enter number:");
    scanf("%d",&n);
    decreas(n);
return 0;
}