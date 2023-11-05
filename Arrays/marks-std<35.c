/* Q.GIVEN AN ARRAY OF 10 STUDENTS PRINT THE INDEX(ROLL NUMBER) OF THE STUDENT 
WHO SCORED LESS THAN 35 AMRKS*/
#include<stdio.h>
int main(){
    int marks[10]={95,90,31,25,100,50,65,89,97,30};
    for(int i=0;i<10;i++)/*here in i we gave the indexing of our array*/{
        if(marks[i]<35){
            printf("roll number of the less marks std is %d\n",i);
        }
    }
    return 0;
}