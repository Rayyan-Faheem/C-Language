#include<stdio.h>
#include<math.h>

void checkprefectsquare(int n){
    if(ceil((double)sqrt(n))==floor((double)sqrt(n))){
        printf("true");
    }
    else{
        printf("false");
    }
    
    }
    int main(){
        int n=49;
        checkprefectsquare(n);
        return 0;
    }

    
