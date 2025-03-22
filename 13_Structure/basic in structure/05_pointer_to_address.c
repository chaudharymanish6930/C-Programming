#include<stdio.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
      struct employee e1;
      e1.code=98;
      e1.salary=897.90;
      struct employee *ptr;
      ptr=&e1;
      // ptr stores the address of e1 in our values
      // you can print structure element using:
      // the value of code then, print the code value
      printf("%d",(*ptr).code);

    return 0;
}