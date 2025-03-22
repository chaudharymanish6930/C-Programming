#include<stdio.h>

int main(){
  int arr[9];
  printf("enter the array :\n");
  for(int i=0; i<=9;i++){
    scanf("%d",&arr[i]);
  }
  for(int i=0;i<=9;i++){
    printf("%d ",arr[i]);
  }
  return 0;
}