#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
void show(struct employee e); // function prototype
 void show(struct employee e){
        printf("code is %d\nslaray is %f\nname is %s \n",e.code,e.salary,e.name);
 }

int main(){
    struct employee e1;
    e1.code=54373;
    strcpy(e1.name,"manish");
    e1.salary=467585.454;
    show(e1);
        return 0;
}



