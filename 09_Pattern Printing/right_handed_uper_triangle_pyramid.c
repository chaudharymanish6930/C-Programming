// Online C compiler to run C program online
#include<stdio.h>
int main(){
 int n;
 printf("enter the number :");
 scanf("%d",&n);
 int nsp=0; 
 int nst=n;
 int mil=4;
  for(int i=1;i<=n;i++){
      for(int j=1;j<=nsp;j++){
          printf(" ");
      }
      for(int j=1;j<=nst;j++){
          printf("*");
      }
    
          nsp++;
          nst--;
      
      printf("\n");
  }
  
    return 0;
    
}