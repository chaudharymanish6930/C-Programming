// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int a;
    printf("enter the grade of a : ");
    scanf("%d",&a);
    // more than 80 -> A
    // more than 60 -> B
    // more than 40 -> C
    // less than 40 -> D
    /*
    if(a>80){
        printf("your grade is :A");
    }
    else if(a>60){
        printf("your grade is :B");
    }
    else if(a>40){
        printf("your grade is :C");
    }
    else if(a<40){
        printf("you are fail");
    }
    */
    
    
    // second method
    if(a>80){
        printf("grade A");
    }
    else{
        if(a>60){
            printf(" grade B");
            }
        else{
            if(a>40){
                printf("grade C");
            }
            else{
                printf("grade D");
            }
        }
        
    }
   
    return 0;
}