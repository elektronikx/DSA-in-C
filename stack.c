#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

/* Function to push element */
void push(int x)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = x;
        printf("%d pushed into stack\n", x);
    }
}

/* Function to pop element */
void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

/* Function to peek element */
void peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top element is %d\n", stack[top]);
    }
}

/* Main function */
int main()
{
    push(10);
    push(20);
    push(30);

    peek();

    pop();
    pop();

    peek();

    return 0;
}