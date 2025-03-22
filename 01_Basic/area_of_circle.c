#include <stdio.h>

int main() {
   float r;
   float pi;
   float a;
   printf("enter the value of r:");
   scanf("%f",&r);
   printf("enter the value of pi:");
   scanf("%f",&pi);
   a=pi*r*r;
   printf("area of circle is: %f",a);
    return 0;
}