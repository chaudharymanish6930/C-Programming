#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={7,4,8,6,7,9,55};
    for(int i=0;i<=6;i++){
        for(int j=i+1;j<=6;j++){
            if(arr[i]==arr[j]){
                printf("%d is the duplicate element",arr[i]);
                break;
            }
        }
    }
   
    return 0;
}