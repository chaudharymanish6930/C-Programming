#include<stdio.h>
int main(){
int a,b,c;
printf("enter the value of a :");
scanf("%d",&a);
printf("enter the value of b :");
scanf("%d",&b);
printf("enter the value of c :");
scanf("%d",&c);
  if (a>b){
      if(a>c){
          printf("a is greatest");
      }
      else{
          printf("c is greatest");
      }
  }
  else{
      if(b>c){
          printf("b is greatest");
      }
      else {
          printf("c is greatest");
      }
  }
    return 0;
}