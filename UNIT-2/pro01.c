/* Enrollment no- 92500527163 */

/* Q1. Implement stack using array with following operations:
   push, pop, print, peek, peep, change, exit. */

#include <stdio.h>

#define MAX 3

int stack[MAX], top = -1;

void push();
void pop();
void peek();
void peep();
void change();
void display();

int main()
{
    int op;

    do
    {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. Peep");
        printf("\n5. Change");
        printf("\n6. Display");
        printf("\n7. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &op);

        switch(op)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                peep();
                break;

            case 5:
                change();
                break;

            case 6:
                display();
                break;

            case 7:
                printf("\nExiting...");
                break;

            default:
                printf("\nInvalid choice.");
        }

    } while(op != 7);

    return 0;
}

void push()
{
    int value;

    if(top == MAX - 1)
    {
        printf("\nStack Overflow.");
    }
    else
    {
        printf("\nEnter the value to be added: ");
        scanf("%d", &value);

        top++;
        stack[top] = value;
    }
}

void pop()
{
    int val;

    if(top == -1)
    {
        printf("\nStack Underflow.");
    }
    else
    {
        val = stack[top];
        top--;

        printf("\nValue deleted is: %d", val);
    }
}

void peek()
{
    if(top == -1)
    {
        printf("\nStack is empty.");
    }
    else
    {
        printf("\nTop element is: %d", stack[top]);
    }
}

void peep()
{
    int position;

    printf("\nEnter position from top: ");
    scanf("%d", &position);

    if(position < 1 || position > top + 1)
    {
        printf("\nInvalid position.");
    }
    else
    {
        printf("\nElement is: %d", stack[top - position + 1]);
    }
}

void change()
{
    int position, value;

    printf("\nEnter position from top: ");
    scanf("%d", &position);

    if(position < 1 || position > top + 1)
    {
        printf("\nInvalid position.");
    }
    else
    {
        printf("\nEnter new value: ");
        scanf("%d", &value);

        stack[top - position + 1] = value;

        printf("\nValue changed successfully.");
    }
}

void display()
{
    int i;

    if(top == -1)
    {
        printf("\nStack is empty.");
    }
    else
    {
        printf("\nStack elements are:");

        for(i = top; i >= 0; i--)
        {
            printf("\n%d", stack[i]);
        }
    }
}
