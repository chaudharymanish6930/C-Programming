#include<stdio.h>
int main(){
   int a=5;
   int *x;
   *x = &a;
   *x=7;
   // a is changed
  printf("%d\n",a);
  printf("%d\n",*x);
  printf("%d",*x);
 
   return 0;
}