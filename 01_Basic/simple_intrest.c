#include <stdio.h>
int main() {
   float principal,rate,t,si;
   printf("enter principal:");
   scanf("%f",&principal);
   printf("enter rate:");
   scanf("%f",&rate);
   printf("enter time:");
   scanf("%f",&t);
   si=(principal*rate*t)/100;
   printf("the simple interest:%f",si);
    return 0;
}