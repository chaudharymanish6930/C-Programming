#include<stdio.h>
int main(){
    int n;
    printf("enter a number you wants to table :");
    scanf("%d",&n);
    for(int i=1;i<15;i++){
        if(i==11){
            break;
        }
        printf("%d X %d = %d\n",n,i,i*n);
    }
}