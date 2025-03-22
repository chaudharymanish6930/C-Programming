#include<stdio.h>
int main(){
    int marks[]={1,2,3,4,5};

    int *ptr=&marks[0];
    // printf("%d\n",marks[3]);
    // printf("%d",&marks[3]);
    for (int i=0;i<=4;i++){
        printf("the array element :%d\n",marks[i]);
        printf("the address of the array :%d\n",&marks[i]);
         printf("the address of the array :%u\n",marks[i]);

    }
    for(int i=0;i<=4;i++){
        int*y=&marks[i];
        printf("the ral element is :%d\n",*y);
    }
}