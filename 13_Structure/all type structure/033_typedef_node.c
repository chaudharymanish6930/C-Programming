#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
    int data;
    struct node* next;
};
typedef struct node *node ;
node top, head, temp1, temp2, temp3;
int main(){
    head = malloc(sizeof(node));
    head->data=10;
    head->next=NULL;
    temp1 = malloc(sizeof(node));
    temp1->data=20;
    temp1->next=NULL;
    head->next=temp1;
    temp2 = malloc(sizeof(node));
    temp2->data=30;
    temp2->next=NULL;
    temp1->next=temp2;
    temp3 = malloc(sizeof(node));
    temp3->data=40;
    temp3->next=NULL;
    temp2->next=temp3;
    
    top=head;
    while(top!=NULL){
        printf("%d->",top->data);
        top=top->next;
    }
    printf("NULL");
    return 0;
}