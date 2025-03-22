#include<stdio.h>
#include<limits.h>
#include<stdbool.h>
int main(){
    int arr[7]={1,2,3,5,3,2,1};
    for(int i=0;i<=6;i++){
        bool flag =false;
        for(int j=i+1;j<=6;j++){
            if(arr[i]==arr[j]){
               flag = true;
               /* printf("%d is the duplicate element",arr[i]);*/ 
                
            }
        }
        if(flag==false){
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}