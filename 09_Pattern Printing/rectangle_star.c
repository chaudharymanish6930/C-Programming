#include<stdio.h>
int main(){
    int n;
    printf("enter no of rows :");
    scanf("%d",&n);
   for(int i=1;i<=n;i++){
       for(int j=1;j<=n;j++){
           if(j==1 || i==1 || j==4 || i==4){
               printf("*");
           }
           else{
               printf(" ");
           }
       }
       printf("\n");
   }
    return 0;
}