#include<stdio.h>
#include<string.h>
int main(){
    int a=strcmp("far","joke");
    printf("%d",a);

    int b=strcmp("far","ajoke");
    printf("%d",b);

    int c=strcmp("joke","far");
    printf("%d",c);
    return 0;
}