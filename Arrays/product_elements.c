#include<stdio.h>
int main(){
    int arr[5],prod=1;
    for(int i=0;i<5;i++){
        printf("enter the %d element:",i);
        scanf("%d",&arr[i]);
    }
for(int i=0;i<5;i++){
    prod=prod*arr[i];
}
printf("the product of the elements of the arry is %d",prod);
return 0;
    
} 