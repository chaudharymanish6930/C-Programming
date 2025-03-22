#include<stdio.h>
void sumofinteger(int A[]){
    int i,sum;
    for(int i=0;i<5;i++){
     sum=A[i]+sum;
    }
    printf("%d",sum);
}
int main(){
    int A[]={1,2,3,4,5};
    sumofinteger(A);

    return 0;
}