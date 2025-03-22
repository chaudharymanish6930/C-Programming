#include <stdio.h>
void fun(int arr[]){
  arr[0]=10;
  return;
}
int main() {
  int arr[5]={32,34,45,32,45};
  printf("%d\n",arr[0]);
   fun(arr);  
   printf("%d\n",arr[0]); 
for(int i=0;i<=4;i++){
    printf("%d ",arr[i]);
    }//only name?
  
    return 0;
}