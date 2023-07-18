#include<stdio.h>
#include<stdlib.h>
struct tree{
    int data;
    struct tree *left;
    struct tree *right;
};
struct tree *create(int x){
    struct tree *node=malloc(sizeof(struct tree));
    node->left=NULL;
    node->right=NULL;
    node->data=x;
    return node;
}
struct tree *insert(struct tree *root,int x){
    if(root==NULL){
        create(x);
    }
}
int main(){
    int choose,x;
    printf("\nchoose the item\n");
    scanf("%d",&choose);
    struct tree *root=NULL;
    switch (choose)
    {
    case 1 :
        printf("\nenter the element to inserted\n");
        scanf("%d",&x);
        insert(root,x);
        break;
    
    default:
        break;
    }
    
    return 0;
}