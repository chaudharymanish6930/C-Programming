#include<stdio.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
   struct employee manish[100];

   manish[0].code=1000;
   manish[1].code=3840;
    
    manish[99].code=74759;

    printf("the values:%d %d \n\n",manish[0].code,manish[1].code);

    struct employee harry={100,74859.545,"manish"};
    printf("%d, %f, %c",harry.code,harry.salary,harry.name);
    struct employee shubh={0};
    
    return 0;
}