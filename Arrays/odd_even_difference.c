#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int sumeven=0;
    int sumodd=0;
    for(int i=0;i<7;i++){
        if(i%2==0){
            sumeven=sumeven+arr[i];
        }
        else{
            sumodd=sumodd+arr[i];

        }
    }
    int res=sumeven-sumodd;
    printf("%d",res);
    return 0;

}