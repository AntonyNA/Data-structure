#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};

void valueAtend(struct node *q){
    int b;
    struct node *x = q;
    printf("\nenter the element added to the end\n");
    scanf("%d",&b);
    struct node*new=malloc(sizeof(struct node));
     new->next=NULL;
     new->data=b;
    while (q->next!=NULL)
    {
        q=q->next;
    }
    if(q->next==NULL){
        
        q->next=new;
        
       
    }
    while(x!=NULL){
        printf(" %d -> ",x->data);
        x=x->next;
    }



}


void valueAtfront(struct node *p){
    struct node* head= p;
    int a;
    printf("enter the value to be inserte at the fron:\n");
    scanf("%d",&a);
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=a;
    newnode->next=p;
    p=newnode;
    while(p!=NULL){
        printf(" %d -> ",p->data);
        p=p->next;

    }
    valueAtend(head);
}

int main(){
    struct node *one=malloc(sizeof(struct node));
    struct node *two=malloc(sizeof(struct node));
    struct node *head;
    head=one;
    one->next=two;
    two->next=NULL;

    one->data=10;
    two->data=30;
    //add value at the front
    valueAtfront(head);
    

    return 0;
}