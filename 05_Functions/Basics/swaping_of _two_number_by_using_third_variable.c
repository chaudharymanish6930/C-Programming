#include<stdio.h>
void swap(int x,int y){
    int z=x;
    x=y;
    x=z;
    return;
}
int main(){
    int a; 
    printf("enter a :");
    scanf("%d",&a);
    int b;
    printf("enter b :");
    scanf("%d",&b);
   swap(a,b);
   
   printf("the value of a :%d\n",a);
   printf("the value of b :%d",b);
    return 0;
    
}