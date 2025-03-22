#include<stdio.h>
int main(){
     char a ='A';
     char *ptr=&a;
     printf("the addresss of the numbber:%u\n",&a);
     printf("the adress of a is %u\n",ptr);
     ptr++; // increasingg byteof any datatype
     printf("the adrees of %u\n",ptr);
     return 0;
}
// according to size