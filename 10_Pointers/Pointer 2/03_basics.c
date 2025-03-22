#include<stdio.h>
int main(){
    int a=30;
    int *p;
    p=&a;
    printf("%d\n",a);
    printf("%d\n",*p);
    printf("%d\n",p);
    printf("%d\n",p-1);
    printf("%d\n",*(p+1));
    return 0;
}
