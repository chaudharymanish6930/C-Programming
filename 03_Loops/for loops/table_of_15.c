#include <stdio.h>
int main() {
    // i++ or i=i+1
    printf("table of 19\n");
  for(int i=19; i<=190; i++){
      if(i%19==0){
          printf("%d\n",i);
      }
  }
  
  
  printf("table of 15\n");
  for(int j=15; j<=150; j=j+15){
      printf("%d\n",j);
  }
   
    return 0;
}