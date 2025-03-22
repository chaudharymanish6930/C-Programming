#include<stdio.h>
#include<string.h>
int main(){
    char st[]="happy";
    char s1[56]="harry";
    char s2[65]=" bhai";
    char s3[43]="jai";

    // char target[30];
    // strcpy(target, st);
    strcat(s1,s3); // added the string in the one stringg
    strcat(s1,s2);
    strcat(s2,s3);
    strcat(s3,s2);
    printf("%s \n",s1); 
    printf("%s\n ",s2); // new assign value insert in the old variable
    printf("%s",s3); 

    return 0;
}