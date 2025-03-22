#include<stdio.h>

float average(int a,int b,int c);

float average(int a,int b,int c){
    return(a+b+c)/3;
 }
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    // average(a,b,c);
    printf("the average of three nuumbers :%f",average(a,b,c));
    return 0;
}