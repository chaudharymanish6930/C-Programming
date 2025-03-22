#include <stdio.h>

int main() {
    int arr[8]={-12,-24,-23,-64,-35,-87,-33,-92};
    int max = arr[0];
    for(int i=0;i<=7;i++){
        if(max<arr[i]){
            max=arr[i];
            
        }
    }
    printf("%d",max);
    
    return 0;
}