#include<stdio.h>
#include<string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};

int main(){
  struct employee e1,e2;
  e1.code=5433;
//   ei.name="manish"
 strcpy(e1.name,"manish");
 e1.salary=54.44;
 printf("%d\n %f\n %s\n",e1.code,e1.salary,e1.name);
 e2.code=87.9;
 e2.salary=65.58;
 strcpy(e2.name,"rohit");
 printf("%d\n%d\n%s\n",e2.code,e2.salary,e2.name);
    return 0;

}