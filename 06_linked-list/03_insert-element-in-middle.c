#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node* head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    one->data = 1;
    two->data = 5;
    three->data = 4;

    one->next = two;
    two->next = three;
    three->next = NULL;
    head = one;

    int position = 2;
    struct node *newNode2;
    newNode2 = malloc(sizeof(struct node));
    newNode2->data = 7;

    struct node *temp = head;
    for (int i = 1; i < position; i++) {
        temp = temp->next;
    }

    newNode2->next = temp->next;
    temp->next = newNode2;

    temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}
