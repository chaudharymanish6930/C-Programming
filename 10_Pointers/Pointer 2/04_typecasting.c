#include<stdio.h>
int main(){
    char a="manish";
    char *P="jaat ";
    P=(char*)P;
    printf("%d",sizeof(char));
    printf("\n%d ,%d",P,*P);
    return 0;
}