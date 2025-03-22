#include<stdio.h>
#include<string.h>
int main(){
    char st[]="manish";
    char target[2]; // source copy in target 
    // char target[11]; full number
    strcpy(target,st);// target main source copy ho jata hain
    printf("%s\n %s\n",st,target);
// copy the string in the target to given numbr
   char  target1[3];
    printf("%s\n %s\n",st,target1);
    return 0;
}