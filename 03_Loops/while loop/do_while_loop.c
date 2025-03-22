#include<stdio.h>
int main(){
   int i=11;
   while(i<10){
       printf("hello");
       i++;
   }
   
   do{
       printf("hello");
       i++;
   } while(i<10);
    return 0;
}