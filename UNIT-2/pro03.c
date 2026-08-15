/* Enrollment no- 92500527163 */

/* Q3. Write a program to print strings in reverse order using stack. */

#include <stdio.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char str[]);
void pop();

int main()
{
    char str[MAX];

    printf("Enter a string: ");
    scanf("%s", str);

    push(str);
    pop();

    return 0;
}

void push(char str[])
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(top == MAX - 1)
        {
            printf("\nStack Overflow.");
            return;
        }

        stack[++top] = str[i];
    }
}

void pop()
{
    if(top == -1)
    {
        printf("\nStack Underflow.");
        return;
    }

    printf("Reversed string: ");

    while(top != -1)
    {
        printf("%c", stack[top--]);
    }

    printf("\n");
}
