#include<stdio.h>
void print(int *a[]){
    int i;
    for(i=1;i<15;i++){
        printf("%c\n",a[i]);
    }
}
int main(){
    char c[20]="manish chaudhary";
    print(&c);

    return 0;
}