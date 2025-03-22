#include<stdio.h>
int main(){
    if(1){
        printf("this is executed!\n");
    }
    if(2345){
        printf("the is not your code\n");
    }
    if(2.345){
        printf("this is yur age \n");
    }
    if(0){ // not print in this case
        printf("thsuwh is your name");
    }
    return 0;
}