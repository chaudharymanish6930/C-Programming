#include<stdio.h>
int main(){
    for(int i=1;i<15;i++){
        if(i==11){
            break;
        }
        printf("9 X %d = %d\n",i,i*9);
    }
}