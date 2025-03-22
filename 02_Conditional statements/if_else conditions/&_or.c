// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int n;
    printf("enter any number:");
    scanf("%d",&n);
   //   if (n%3==0 || n%5==0){
   //    if(n%15!=0){
   //        printf("it is divisible by 3 and          5 but not 15");
    //             }
     //   else{
     //       printf("it is divisible by 15");
      //      }
    //     }
    if(n%5==0 || n%3==0 && n%15){
        printf("the number is visible by 3 and 5 but not 15");
    }
    else{
        printf("the number is not matching the required condition ");
    }
         
  /*  else{
        printf("it is not divisible by 3 or 5");
    }*/
    return 0;
}