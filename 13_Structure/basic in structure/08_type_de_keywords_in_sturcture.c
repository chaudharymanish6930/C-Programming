#include<stdio.h>
#include<string.h>
typedef struct employee
{
  int code;
  float salary;
  char name[10];
} Emp;

int main(){
    // typedef int harry;
    // int a=99;
    // printf("the value of a is %d",a);

    // typedef struct employee emp;
    Emp e1;
    Emp* ptr1=&e1; //pointer
    e1.code=4511;
    strcpy(e1.name,"manish");
    e1.salary=546.36;

    printf("%d %f %s\n",e1.code,e1.salary,e1.name);
    printf("%d %f %s",ptr1->code,ptr1->salary,ptr1->name);

    return 0;
}
