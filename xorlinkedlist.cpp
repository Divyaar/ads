#include <stdio.h>
#include<malloc.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* XOR(struct node *a, struct node *b) {
    return (struct node*) ((unsigned int) (a) ^ (unsigned int) (b));
}
void insert(struct node **t, int data) 
{   
    struct node *p = (struct node *) malloc(sizeof(struct node));
   p->data = data;
   p->next = XOR(*t, NULL);
    if (*t != NULL) {
    	
        struct node* next1 = XOR((*t)->next, NULL);
        (*t)->next = XOR(p, next1);
    }

    *t = p;
}
void display(struct node *head) {
    struct node *curr = head;
    struct node *prev = NULL;
    struct node *next;
 
    printf("Following are the nodes of Linked List: \n");
 
    while (curr != NULL) {
        printf("%d ", curr->data);

        next = XOR(prev, curr->next);
        prev = curr;
        curr = next;
    }
}
int main() {
    struct node *root = NULL;
    insert(&root, 10);
    insert(&root, 20);
    insert(&root, 30);
    insert(&root, 40);
    display(root);
 
    return (0);
}

