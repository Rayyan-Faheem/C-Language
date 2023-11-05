#include<stdio.h>
int main(){
    int marks[10];
    for(int i=0;i<10;i++){
        //int a=i+1;
        printf("enter %d element of array:\n",i/*a,OR DIRECTELY i=1*/);
        scanf("%d",&marks[i]);
    }
    printf("The elements of array are:");
    for(int i=0;i<10;i++){
        printf("%d,",marks[i]);
    }
    return 0;
}