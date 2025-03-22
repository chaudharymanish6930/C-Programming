#include<stdio.h>
#include<string.h>
int main(){
    char st[]="harry";
    int lenght=strlen(st);
    printf("%d\n",lenght);
    printf("%d ",strlen(st));
    printf("%s\n",st);
    printf("%c",st[2]);
    return 0;
}