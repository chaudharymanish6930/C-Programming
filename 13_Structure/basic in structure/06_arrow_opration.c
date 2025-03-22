#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
      struct employee e1;
      e1.code=98;
      struct employee *ptr;
      ptr=&e1;   // ptr stores the address of e1 in our values you can print structure element using: the value of code then, print the code value
      
      printf("%d\n",(*ptr).code);
      printf("%d",ptr->code);

    struct employee *e2;
    e2->code=9876;
    strcpy(e2->name,"Manish");
    e2->salary=786.876;
    printf("%d\n%s\n%f\n",e2->code,e2->name,e2->salary);

    return 0;
}