#include<stdio.h>
int main(){
    int x,y,z;
    printf("enter three values:");
    scanf("%d,%d,%d",&x,&y,&z);
    if(x>y && x>z){
        printf("%d is greatest",x);

    }
    else if(y>x && y>z){
        printf("%d is greatest",y);
    }
    else if(z>x && z>y){
        printf("%d is greatest",z);

    }
    else{
        printf("all are equal");
    }
    return 0;
    
}