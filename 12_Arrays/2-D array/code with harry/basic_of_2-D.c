#include<stdio.h>
int main(){
    int arr[4][5];
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            printf("enter the array element [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");

    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            printf("enter the array element [%d][%d] is :%d\n",i,j,arr[i][j]);   
        }
        
    }

     for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            printf("%d",arr[i][j]);   
        }
        printf("\n");
    }

    return 0;

}