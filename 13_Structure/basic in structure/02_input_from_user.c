#include<stdio.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
   struct employee e1,e2,e3;

   printf("enter the value of code\n");
   scanf("%d",&e1.code);

   printf("enter the value of salary\n");
   scanf("%f",&e1.salary);

   printf("enter he value of name\n");
   scanf("%s",&e1.name);

   printf("%d %f %s\n",e1.code,e1.salary,e1.name);

   printf("enter the value of code\n");
   scanf("%d",&e2.code);

   printf("enter the value of salary\n");
   scanf("%f",&e2.salary);

   printf("enter he value of name\n");
   scanf("%s",&e2.name);

   printf("%d %f %s\n",e2.code,e2.salary,e2.name);

   printf("enter the value of code\n");
   scanf("%d",&e3.code);

   printf("enter the value of salary\n");
   scanf("%f",&e3.salary);

   printf("enter he value of name\n");
   scanf("%s",&e3.name);

   printf("%d %f %s\n",e3.code,e3.salary,e3.name);
    return 0;
}