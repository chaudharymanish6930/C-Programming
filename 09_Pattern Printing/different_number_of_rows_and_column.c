#include<stdio.h>
int main(){
    int n;
    printf("enter no of rows :");
    scanf("%d",&n);
    int m;
    printf("enter no of column :");
    scanf("%d",&m);
    // *****... print
    for(int i=1;i<=n;i++){ //outer loop                         signified no of lines
        for(int i=1;i<=m;i++){
            printf("*");
        }
       printf("\n");
    }
    
    return 0;
}