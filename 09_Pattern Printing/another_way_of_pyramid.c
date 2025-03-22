#include<stdio.h>
int main(){
 int n;
 printf("enter the number :");
 scanf("%d",&n);
 int nst=1;
int nsp=3;
  for(int i=1;i<=n;i++){
      for(int j=1;j<=nsp;j++){
          printf(" ");
      }
      nsp--;
      for(int j=1;j<=nst;j++){
          printf("*");
      }
      nst=nst+2;
      printf("\n");
  }
    return 0;
    //  4
}