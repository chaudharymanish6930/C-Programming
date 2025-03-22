#include<stdio.h>
float f2c(float);

float f2c(float c){
    return ((9*c)/5)+32;
}
int main(){
    float c=37;
    printf("celcius to fehrenheit of %f is %f",c,f2c(35));
    return 0;
}