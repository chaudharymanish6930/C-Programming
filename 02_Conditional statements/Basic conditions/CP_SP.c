#include <stdio.h>
int main() {
    int CP, SP;
    printf("enter the cost price :");
    scanf("%d",&CP);
    printf("enter the selling price :");
    scanf("%d",&SP);
    if(SP<CP){
        printf("profit");
    }
    else if (SP>CP){
        printf("loss");
    }
    else if(CP=SP){
        printf("no profit and no loss");
    }
   
    return 0;
}