#include<stdio.h>
int main(){
    int year;
    printf("enter the year : ");
    scanf("%d",&year);

    if((year%4==0 && year%100!=0) || year%400==0){
        printf("this year is leap year");
    }
    else{
        prinf("this is not leap year");
    }
    return 0; 
}