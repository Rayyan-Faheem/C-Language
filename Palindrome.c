#include<stdio.h>
int main(){
    int n,r=0,temp;
    printf("enter a number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
r=r+(n%10);
r=r*10;
n=n/10;
    }
printf("reverse of the number is %d",r);
if(n==r)
printf("%d is palindrome\n",n);
else
printf("%d is not a palindrome/n",n);
return 0;
}
