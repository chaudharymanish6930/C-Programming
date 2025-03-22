#include<stdio.h>
int count(int a[],int n){
    int x=0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            x++;
        }
    }
    return x;
}
int main(){
int a[]={1,2,-3,4,-5,6,-7,8,9,10};
  printf("the no is positve :%d", count(a,10));
    return 0;
}