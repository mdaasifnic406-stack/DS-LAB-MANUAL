/* Enrollment no- 92500527163 */

/* Q4. Write a program to find the factorial of a given
   integer number using stack. */

#include <stdio.h>

#define MAX 30

int stack[MAX], top = -1;

void push(int value);
int pop();

int main()
{
    int i, n, fact = 1;

    printf("\nEnter value: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("\nFactorial is not defined for negative numbers.");
        return 0;
    }

    for(i = 1; i <= n; i++)
    {
        push(i);
    }

    while(top != -1)
    {
        fact = fact * pop();
    }

    printf("\nFactorial is: %d", fact);

    return 0;
}

void push(int value)
{
    if(top == MAX - 1)
    {
        printf("\nStack Overflow.");
    }
    else
    {
        top++;
        stack[top] = value;
    }
}

int pop()
{
    int val;

    if(top == -1)
    {
        printf("\nStack Underflow.");
        return -1;
    }
    else
    {
        val = stack[top];
        top--;
        return val;
    }
}
