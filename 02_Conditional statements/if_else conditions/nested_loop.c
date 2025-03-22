#include <stdio.h>
int main() {
  int n;
  printf("enter the number");
  scanf("%d",&n);
  if(n%5==0){
     if (n%3==0){
      printf("the number is divisible by  5 amd 3");
                }
      else{
            printf("the number is not divisible 3 and 5 ");        
           }
  }
    else {
        printf("the number is not divisible 3 and 5 ");
    }       
    return 0;
}