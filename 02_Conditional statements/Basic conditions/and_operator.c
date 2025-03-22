#include<stdio.h>
int main(){
    int a=1;
    int b=0;
    if (a&&b){
        printf("both are true\n");
    }

    if(a){
        if(b){
        printf("both are trrue");
        }
    }
    return 0;

}