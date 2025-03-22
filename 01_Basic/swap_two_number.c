#include<stdio.h>
int main(){
    int n; 
    printf("enter n :");
    scanf("%d",&n);
    int r;
    printf("enter r :");
    scanf("%d",&r);
    int a;
   a=n;
   n=r;
   r=a;
     printf("the value of n :%d\n",n);
     printf("the value of r :%d",r);
    return 0;
    
}