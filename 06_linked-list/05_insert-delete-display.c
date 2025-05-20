#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *head = NULL;

// Function to create a new node
struct node* createNode(int data) 
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Insert at the beginning
void insertAtBeginning(int data) 
{
    struct node *newNode = createNode(data);
    newNode->next = head;
    head = newNode;
}

// Insert at the end
void insertAtEnd(int data) 
{
    struct node *newNode = createNode(data);
    if (head == NULL) 
    {
        head = newNode;
        return;
    }
    struct node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

// Insert at a specific position (1-based index)
void insertAtPosition(int data, int position) 
{
    if (position == 1) 
    {
        insertAtBeginning(data);
        return;
    }
    struct node *newNode = createNode(data);
    struct node *temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++)
        temp = temp->next;
    if (temp == NULL) {
        printf("Invalid position!\n");
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

// Delete from the beginning
void deleteFromBeginning() 
{
    if (head == NULL) return;
    struct node *temp = head;
    head = head->next;
    free(temp);
}

void deleteFromEnd() 
{
    if (head == NULL) return;
    if (head->next == NULL) 
    {
        free(head);
        head = NULL;
        return;
    }
    struct node *temp = head;
    while (temp->next->next != NULL)
        temp = temp->next;
    free(temp->next);
    temp->next = NULL;
}
void deleteFromPosition(int position)
{
    if (position == 1) 
    {
        deleteFromBeginning();
        return;
    }
    struct node *temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; i++)
        temp = temp->next;
    if (temp == NULL || temp->next == NULL) 
    {
        printf("Invalid position!\n");
        return;
    }
    struct node *del = temp->next;
    temp->next = del->next;
    free(del);
}
void display() 
{
    struct node *temp = head;
    while (temp != NULL) 
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() 
{
    printf("Insert 10 at end: ");
    insertAtEnd(10);
    display();
    printf("\nInsert 5 at Beginning: ");
    insertAtBeginning(5);
    display();
    printf("\nInsert 15 at end: ");
    insertAtEnd(15);
    display();
    printf("\nInsert at position 3: ");
    insertAtPosition(12, 3);
    display();
    printf("\nDelete from beginning: ");
    deleteFromBeginning();
    display();
    printf("\nDelete from end: ");
    deleteFromEnd();
    display();
    printf("\nDelete from position 2: ");
    deleteFromPosition(2);
    display();
    printf("Kaniz Fatema\n20245103154\n");

    return 0;
}
