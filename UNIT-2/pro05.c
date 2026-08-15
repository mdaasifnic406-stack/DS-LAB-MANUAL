/* Enrollment no- 92500527163 */

/* Q5. Write a program to find the power of a given number using stack. */

#include <stdio.h>

#define MAX 100

int stack[MAX], top = -1;

void push(int value);
int pop();

int main()
{
    int base, power, i;
    int result = 1;

    printf("\nEnter base value: ");
    scanf("%d", &base);

    printf("\nEnter power value: ");
    scanf("%d", &power);

    if(power < 0)
    {
        printf("\nNegative power is not supported.");
        return 0;
    }

    for(i = 1; i <= power; i++)
    {
        push(base);
    }

    while(top != -1)
    {
        result = result * pop();
    }

    printf("\nPower = %d ^ %d = %d", base, power, result);

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
        stack[++top] = value;
    }
}

int pop()
{
    if(top == -1)
    {
        printf("\nStack Underflow.");
        return -1;
    }
    else
    {
        return stack[top--];
    }
}
