#include<stdio.h>
int main(){
    int arr[10];
    for(int i=1;i<=10;i++){
        arr[i]=3*(i);
    }
    for(int i=1;i<=10;i++){
        printf("3 X %d = %d\n",i,arr[i]);
    }
  return 0;
}