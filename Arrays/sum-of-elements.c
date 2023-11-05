#include<stdio.h>
int main(){
int add[5],sum=0;
for(int i=0;i<5;i++){
    printf("enter %d element of the array:",i);
    scanf("%d",&add[i]);

}for(int i=0;i<5;i++){
    sum=sum+add[i];
}
printf("the sum of the elements in the arrsy is %d",sum);
return 0;

}
/*[OR]-> int arr[5]={1,2,3,4,5}
int sum=0;
for(int i=0;i<5;i++){
    sum=sum+add[i];
}
return 0;
*/

