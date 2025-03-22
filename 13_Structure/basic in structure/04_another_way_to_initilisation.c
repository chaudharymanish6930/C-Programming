#include<stdio.h>
struct employee{
    int code;
    float salary;
    char name[10];
}e4,e5,e6;
int main(){
   struct employee e1,e2,e3;

   printf("enter the value of code e1\n");
   scanf("%d",&e1.code);

   printf("enter the value of salary e1\n");
   scanf("%f",&e1.salary);

   printf("enter he value of name e1\n");
   scanf("%s",&e1.name);

   printf("%d %f %s\n",e1.code,e1.salary,e1.name);

//    another way to initialliasation

   printf("enter the value of code e4\n");
   scanf("%d",&e4.code);

   printf("enter the value of salary e4\n");
   scanf("%f",&e4.salary);

   printf("enter he value of name e4\n");
   scanf("%s",&e4.name);

   printf("%d %f %s\n",e4.code,e4.salary,e4.name);



   printf("enter the value of code e6\n");
   scanf("%d",&e6.code);

   printf("enter the value of salary e6\n");
   scanf("%f",&e6.salary);

   printf("enter he value of name e6\n");
   scanf("%s",&e6.name);

   printf("%d %f %s\n",e6.code,e6.salary,e6.name);

   e2.code=7876;
   // e2.name="manish";



   return 0;
}