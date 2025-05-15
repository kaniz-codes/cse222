#include <stdio.h>
#define MAXSIZE 8

int stack[MAXSIZE];
int top = -1;

void push()
{
    if (top == MAXSIZE - 1)
    {
        printf("Overflow\n");
    }
    else
    {
        int x;
        printf("Insert element: ");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        printf("Popped %d\n", stack[top]);
        top--;
    }
}

void peek()
{
    if (top == -1)
    {
        printf("Empty\n");
    }
    else
    {
        printf("Top element is %d\n", stack[top]);
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{

    push();
    push();
    display();
    peek();
    pop();
    display();



    return 0;
}
