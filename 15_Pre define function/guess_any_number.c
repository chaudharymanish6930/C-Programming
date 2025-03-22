#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    // initialize random nmberr generator
    srand(time(0));
    
    // generate random number betweeen 1 and 100
    int randomNumber=(rand()%100)+1;
    int no_of_guess =0;

    // pront the random number
    printf("random number :%d\n",randomNumber);

    do{
        printf("guess the number :");
        scanf("%d", &gussed);
        if(gussed>randomNumber){
            printf("Lower number please\n");
        }
        else{
            printf("higher number plesse");
        }
        no_of_guess++;

    }while(gussed!=randomNumber);

    printf("you gussed the number in id",no_of_guess);
    return 0;
}