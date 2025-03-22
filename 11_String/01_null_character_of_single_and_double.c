#include<stdio.h>
int main(){   //string end by  \0    takes 1byte
    char st[]={'a','b','c','d','\0'};
    for(int i=0;i<3;i++){
         printf("the first character is %c\n",st[i]);
    }
    printf("the first character is %c\n",st[0]);
    printf("the first character is %c\n",st[3]);

    char st1[]="manish";
    for (int i=0;i<4;i++){
        printf("the value of alphabets :%c\n",st1[i]);
    } 
    printf("the name is :%s\n",st[4]);
    printf("the name is :%c",st[2]);
    //c mainly used for sinlgle character and s is used for all stirng of the element

    return 0;
}