#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
int main()
{
    struct node*head;
    struct node * one = NULL;
    struct node * two = NULL;
    struct node * three = NULL;

    one = malloc( sizeof( struct node));
    two = malloc( sizeof( struct node));
    three = malloc( sizeof( struct node));

    one -> data = 1;
    two -> data = 5;
    three -> data = 4;

    one -> next = two;
    two -> next = three;
    three -> next = NULL;
    head = one;

    // insert in 1st
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->data = 9;
    newNode->next = head;
    head = newNode;
    struct node * temp= head;
while(temp != NULL)
    {
        printf("%d -> " , temp -> data);
        temp= temp ->next;
    }
    printf("NULL");
}
