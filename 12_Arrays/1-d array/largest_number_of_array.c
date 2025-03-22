
#include <stdio.h>

int main() {
    int arr[8]={12,24,23,64,35,87,33,2};
    int max = -1;
    for(int i=0;i<=8;i++){
        if(max<arr[i]){
            max=arr[i];
            
        }
    }
    printf("%d",max);
    
    return 0;
}