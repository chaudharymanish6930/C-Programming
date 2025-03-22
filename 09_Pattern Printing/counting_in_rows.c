#include<stdio.h>
int main(){
    int n;
    printf("enter no of rows :");
    scanf("%d",&n);
    /*
    for(int i=1;i<=n;i++){ 
        for(int i=1;i<=n;i++){
            printf("1");
        }
       printf("\n");
    }
    */
    for (int i=1;i<=n;i++){
        for(int i=1;i<=n;i++){
        printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}