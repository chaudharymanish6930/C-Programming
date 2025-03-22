#include <stdio.h>
int main() {
      int x,y;
      printf("enter the coordinator : ");
      scanf("%d %d",&x,&y);
      if (x==0 && y==0){
          printf(" the point lies on origin");
      }
      else if(x==0){
          printf("lies on y-axis ");
      }
      else if (y==0){
          printf("lies on x-axis");
      }
      else{
          printf("the point does not lie on x and y axis  ");
      }
    return 0;
}