#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int *ptr=a;  // address of the firrst element of the array
    printf("the value a addres %u is %d",ptr+2,*(ptr+3));

    //// *(S+3) refers to the 4th element


    return 0;
} 