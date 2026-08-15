/* Enrollment no- 92500527163 */

/* Q2. Write a program to find out the factorial of a number
   using recursion (stack). */

#include <stdio.h>

int factorial(int n);

int main()
{
    int n, z;

    printf("\nEnter value: ");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("\nFactorial is not defined for negative numbers.");
    }
    else
    {
        z = factorial(n);
        printf("\nFactorial is: %d", z);
    }

    return 0;
}

int factorial(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
