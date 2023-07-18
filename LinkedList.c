#include<stdio.h>
#include<stdlib.h>

struct node{
    int a;
    struct node * next;
};
void printLinkedlist(struct node *p){
    while(p!=NULL){
        printf(" %d ->",p->a);
        p=p->next;
    }
}
int main(){
  struct node *head;
  struct node *first=malloc(sizeof(struct node)) ;
  struct node *second=malloc(sizeof(struct node)) ;
  struct node *third=malloc(sizeof(struct node)) ;

  first->a=2;
  second->a=3;
  third->a=4;

  first->next=second;
  second->next=third;
  third->next=NULL;
  head=first;
  printLinkedlist(head);

    return 0;
}