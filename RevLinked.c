#include <stdio.h>
#include <stdlib.h> // Include this header for malloc

struct node {
    int data;
    struct node* next;
};

void reverse(struct node** head) {
    struct node* prev = NULL;
    struct node* current = *head;
    struct node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}

int main() {
    struct node* first = malloc(sizeof(struct node));
    struct node* second = malloc(sizeof(struct node));
    struct node* third = malloc(sizeof(struct node));
    struct node* head = first;

    first->data = 20;
    second->data = 30;
    third->data = 10;

    first->next = second;
    second->next = third;
    third->next = NULL;

    printf("orginal\n");
    struct node *x=head;
    while (x!= NULL) {
        printf("%d\n", x->data);
        x = x->next;
    }
    printf("\n\n\nreversed\n");
    reverse(&head);

    struct node* temp = head;
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    return 0;
}
