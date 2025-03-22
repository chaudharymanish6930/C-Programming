#include<stdio.h>
int main(){
    int i=3;
    int *j;
    j=&i;
    printf("adfres of i =%u\n",&i);
    printf("adfres of i =%p\n",&i);
    printf("adress of the j :%p\n",j);
     printf("adress of the j :%p\n",*j);
    return 0;
}