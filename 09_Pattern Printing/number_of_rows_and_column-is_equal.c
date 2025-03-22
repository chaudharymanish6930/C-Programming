#include<stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    // *****... print
    for(int i=1;i<=n;i++){ //outer loop                         signified no of lines
        for(int i=1;i<=n;i++){
            printf("*");
        }
       printf("\n");
    }
    
    return 0;
}